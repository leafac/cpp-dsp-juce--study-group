#include "PluginProcessor.h"
#include "PluginEditor.h"

AutomixerAudioProcessor::AutomixerAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
: AudioProcessor(BusesProperties()
#if ! JucePlugin_IsMidiEffect
#if ! JucePlugin_IsSynth
                 .withInput("Input",  juce::AudioChannelSet::stereo(), true)
#endif
                 .withOutput("Output", juce::AudioChannelSet::stereo(), true)
#endif
                 )
#endif
{
}

AutomixerAudioProcessor::~AutomixerAudioProcessor()
{
}

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new AutomixerAudioProcessor();
}

const juce::String AutomixerAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool AutomixerAudioProcessor::isBusesLayoutSupported(const BusesLayout& layouts) const
{
#if JucePlugin_IsMidiEffect
    juce::ignoreUnused(layouts);
    return true;
#else
    if (layouts.getMainOutputChannelSet() != juce::AudioChannelSet::mono()
        && layouts.getMainOutputChannelSet() != juce::AudioChannelSet::stereo())
        return false;
#if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
#endif
    return true;
#endif
}
#endif

double AutomixerAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

bool AutomixerAudioProcessor::isMidiEffect() const
{
#if JucePlugin_IsMidiEffect
    return true;
#else
    return false;
#endif
}

bool AutomixerAudioProcessor::acceptsMidi() const
{
#if JucePlugin_WantsMidiInput
    return true;
#else
    return false;
#endif
}

bool AutomixerAudioProcessor::producesMidi() const
{
#if JucePlugin_ProducesMidiOutput
    return true;
#else
    return false;
#endif
}

int AutomixerAudioProcessor::getNumPrograms()
{
    return 1;
}

int AutomixerAudioProcessor::getCurrentProgram()
{
    return 0;
}

void AutomixerAudioProcessor::setCurrentProgram(int index)
{
}

const juce::String AutomixerAudioProcessor::getProgramName(int index)
{
    return {};
}

void AutomixerAudioProcessor::changeProgramName(int index, const juce::String& newName)
{
}

void AutomixerAudioProcessor::getStateInformation(juce::MemoryBlock& destData)
{
}

void AutomixerAudioProcessor::setStateInformation(const void* data, int sizeInBytes)
{
}

bool AutomixerAudioProcessor::hasEditor() const
{
    return true;
}

juce::AudioProcessorEditor* AutomixerAudioProcessor::createEditor()
{
    return new AutomixerAudioProcessorEditor(*this);
}

void AutomixerAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{
}

void AutomixerAudioProcessor::releaseResources()
{
}

void AutomixerAudioProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    juce::ScopedNoDenormals noDenormals;
    
    auto inputChannelsCount = getTotalNumInputChannels();
    auto outputChannelsCount = getTotalNumOutputChannels();
    
    // FIXME:
    // 1. The plugin consumes more CPU when there’s no audio running through it. It gives me the impression that there’s some denormalization issue.
    // 2. Having to compute RMS by hand like this seems clunky. There should be a better way…
    // 3. The plugin made REAPER crash the first time I loaded it. But not on subsequent runs.
    // 4. It still shows up as “yourcompany”
    // 5. It’s annoying having to restart REAPER on every build.
    // 6. There’s no way to tell that the RMS computation is actually working.
    for (int sampleIndex = 0; sampleIndex < buffer.getNumSamples(); sampleIndex++)
    {
        float rmsChannelsSquares = 0;
        for (int channel = 0; channel < inputChannelsCount; channel++)
            rmsChannelsSquares += pow(buffer.getSample(channel, sampleIndex), 2);
        rmsSquaresSum += rmsChannelsSquares - rmsSquares[rmsSquaresIndex];
        rmsSquares[rmsSquaresIndex] = rmsChannelsSquares;
        rmsSquaresIndex++;
        if (rmsSquaresIndex == 48000) rmsSquaresIndex = 0;
        float rms = sqrt(rmsSquaresSum / (48000 * inputChannelsCount));
    }
    
    for (auto channel = 0; channel < outputChannelsCount; channel++)
        buffer.clear(channel, 0, buffer.getNumSamples());
}
