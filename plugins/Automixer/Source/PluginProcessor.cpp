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
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();
    
    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear(i, 0, buffer.getNumSamples());
    
    for (int channel = 0; channel < totalNumInputChannels; ++channel)
    {
        auto* channelData = buffer.getWritePointer(channel);
    }
}
