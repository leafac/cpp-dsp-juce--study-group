#include "PluginProcessor.h"
#include "PluginEditor.h"
#include <string>

AutomixerAudioProcessorEditor::AutomixerAudioProcessorEditor(AutomixerAudioProcessor& p)
: AudioProcessorEditor(&p), audioProcessor(p) {
  setSize(400, 300);
}

AutomixerAudioProcessorEditor::~AutomixerAudioProcessorEditor() {
}

void AutomixerAudioProcessorEditor::paint(juce::Graphics& g)
{
  g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
  
  g.setColour(juce::Colours::white);
  g.setFont(15.0f);
  g.drawFittedText("Hello World", getLocalBounds(), juce::Justification::centred, 1);
}

void AutomixerAudioProcessorEditor::resized() {
}
