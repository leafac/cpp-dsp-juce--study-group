#include "PluginProcessor.h"
#include "PluginEditor.h"
#include <string>

auto globalCounter = 0;

AutomixerAudioProcessorEditor::AutomixerAudioProcessorEditor(AutomixerAudioProcessor& p)
: AudioProcessorEditor(&p), audioProcessor(p)
{
    setSize(400, 300);
    globalCounter++;
}

AutomixerAudioProcessorEditor::~AutomixerAudioProcessorEditor()
{
}

void AutomixerAudioProcessorEditor::paint(juce::Graphics& g)
{
    g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
    
    g.setColour(juce::Colours::white);
    g.setFont(15.0f);
    g.drawFittedText(std::to_string(globalCounter), getLocalBounds(), juce::Justification::centred, 1);
}

void AutomixerAudioProcessorEditor::resized()
{
}
