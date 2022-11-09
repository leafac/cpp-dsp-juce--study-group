#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

class AutomixerAudioProcessorEditor : public juce::AudioProcessorEditor {
public:
  AutomixerAudioProcessorEditor(AutomixerAudioProcessor&);
  ~AutomixerAudioProcessorEditor() override;
  
  void paint(juce::Graphics&) override;
  void resized() override;
  
private:
  AutomixerAudioProcessor& audioProcessor;
  
  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AutomixerAudioProcessorEditor)
};
