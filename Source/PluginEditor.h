/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class ComboBoxAssertionFiringAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    ComboBoxAssertionFiringAudioProcessorEditor (ComboBoxAssertionFiringAudioProcessor&);
    ~ComboBoxAssertionFiringAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    LookAndFeel_V1 thisLaF;
    
    ComboBox cb;
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    ComboBoxAssertionFiringAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ComboBoxAssertionFiringAudioProcessorEditor)
};
