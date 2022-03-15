#pragma once

#include <JuceHeader.h>

class AutomixerAudioProcessor  : public juce::AudioProcessor
{
public:
    AutomixerAudioProcessor();
    ~AutomixerAudioProcessor() override;
    
    const juce::String getName() const override;
    
#ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported(const BusesLayout& layouts) const override;
#endif
    
    double getTailLengthSeconds() const override;
    
    bool isMidiEffect() const override;
    bool acceptsMidi() const override;
    bool producesMidi() const override;
    
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram(int index) override;
    const juce::String getProgramName(int index) override;
    void changeProgramName(int index, const juce::String& newName) override;
    
    void getStateInformation(juce::MemoryBlock& destData) override;
    void setStateInformation(const void* data, int sizeInBytes) override;
    
    bool hasEditor() const override;
    juce::AudioProcessorEditor* createEditor() override;
    
    void prepareToPlay(double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;
    
    void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&) override;
    
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AutomixerAudioProcessor)
};
