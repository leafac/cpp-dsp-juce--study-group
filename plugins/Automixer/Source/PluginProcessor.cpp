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

const juce::String AutomixerAudioProcessor::getName() const
{
    return JucePlugin_Name;
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

bool AutomixerAudioProcessor::isMidiEffect() const
{
#if JucePlugin_IsMidiEffect
    return true;
#else
    return false;
#endif
}

double AutomixerAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
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

void AutomixerAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{
}

void AutomixerAudioProcessor::releaseResources()
{
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

void AutomixerAudioProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();
    
    // In case we have more outputs than inputs, this code clears any output
    // channels that didn't contain input data, (because these aren't
    // guaranteed to be empty - they may contain garbage).
    // This is here to avoid people getting screaming feedback
    // when they first compile a plugin, but obviously you don't need to keep
    // this code if your algorithm always overwrites all the output channels.
    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear(i, 0, buffer.getNumSamples());
    
    // This is the place where you'd normally do the guts of your plugin's
    // audio processing...
    // Make sure to reset the state if your inner loop is processing
    // the samples and the outer loop is handling the channels.
    // Alternatively, you can process the samples with the channels
    // interleaved by keeping the same state.
    for (int channel = 0; channel < totalNumInputChannels; ++channel)
    {
        auto* channelData = buffer.getWritePointer(channel);
        buffer.getRMSLevel(0, 0, buffer.getNumSamples() + 1000);
        // ..do something to the data...
    }
}

bool AutomixerAudioProcessor::hasEditor() const
{
    return true;
}

juce::AudioProcessorEditor* AutomixerAudioProcessor::createEditor()
{
    return new AutomixerAudioProcessorEditor(*this);
}

//==============================================================================
void AutomixerAudioProcessor::getStateInformation(juce::MemoryBlock& destData)
{
}

void AutomixerAudioProcessor::setStateInformation(const void* data, int sizeInBytes)
{
}

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new AutomixerAudioProcessor();
}
