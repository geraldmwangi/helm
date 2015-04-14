/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_90EF70451B8A1879__
#define __JUCE_HEADER_90EF70451B8A1879__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "wave.h"
#include "twytch_common.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class WaveViewer  : public AnimatedAppComponent,
                    SliderListener
{
public:
    //==============================================================================
    WaveViewer (int resolution);
    ~WaveViewer();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void update() override;
    void setWaveSlider(Slider* slider);
    void setAmplitudeSlider(Slider* slider);
    void resetWavePath();
    void sliderValueChanged(Slider* sliderThatWasMoved) override;
    void showRealtimeFeedback();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void mouseDown (const MouseEvent& e);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Slider* wave_slider_;
    Slider* amplitude_slider_;
    mopo::Processor::Output* wave_state_;
    Path wave_path_;
    int resolution_;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WaveViewer)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_90EF70451B8A1879__