# 2022-09-14

[**Meeting**](https://youtu.be/ajlzmauNYDc)

**Cwits:** Implement ways to manipulate samples, for example, trimming the edges.

**Fotis:** Developed an user interface for a sampler using HISE. Ran into an issue with the onscreen keyboard, which we fixed by removing the onscreen keyboard 🙃

**Leandro:** Did a reverse-avalanche oscillator in a toy for his son.

- https://www.youtube.com/watch?v=WjrJeUBjw5g&lc=Ugwfq6USi3crwV5tI5t4AaABAg (see Leandro’s comment for some more technical details):

  > I just spent a couple hours playing around with this circuit. Here’s what I learned:
  >
  > 1. The trick that made it work for me was to shine a bright light close to the LDR. Like Sam did in the video, I used my phone light.
  >
  > 2. If you just want to play around with the circuit, you can use a breadboard.
  >
  > 3. I tried a couple transistors with the middle leg still on, even with the middle leg connected to the breadboard. It worked 🤷
  >
  > 4. The type of LDR will change the range. I found that the GL5539 worked the best from me, after having tried the GL5506, GL5516, GL5528, GL5537, and the GL5549. But they all worked to some extent.
  >
  > 5. Different kinds of transistors gave me different frequencies. With the 2N3904 I could only produce annoyingly high-pitched sounds, no matter how big the capacitor. With the BC547 I got sounds similar to Sam’s. The BC337 also worked, though less pleasing. And the BC517 was my favorite. Fun stuff. I didn’t even need the phone light for the oscillation to start with all of these, except for the 2N3904. If playing around with different transistors remember to swap the legs around, because the pinouts are different.
  >
  > 6. It won’t take just a couple of minutes to put together 😉
  >
  > Overall, really enjoyable experiment. Thanks, Sam!

- https://www.youtube.com/watch?v=zCTLeNxge54

- https://www.youtube.com/c/airwindows/search?query=diy

- https://twitter.com/matttytel/status/1483878590089506828

# 2022-08-31

[**Meeting**](https://youtu.be/V55b8sfSY2k)

**Cwits:** Implemented a step sequencer and is considering turning the project into a product.

**Fotis:** Using the development version of HISE to build an interface. Finishing his first commercial sample pack.

- https://www.youtube.com/watch?v=2C4psWqleRs
- https://www.youtube.com/watch?v=cIQ9IXSUzuM

**Bo:** Implemented a new concept for a filter with a combination of averaging. Running into issue with the build system perhaps caused by having updated Visual Studio.

**Leandro:** Working on Automixer for Video, which is JSFX-only. Learning about simple circuits such as the Atari Punk Console & an analog VU meter.

# 2022-08-17

[**Meeting**](https://youtu.be/Pwbs9yiZHXo)

**Leandro** is still working on the JSFX Automixer & learning about electronics.

- https://www.ericasynths.lv/shop/ (Check the manuals for the EDU DIY modules!)

**Bo** got the iPlug installation issues sorted out and we coded a first-order filter together.

**Fotis** got HISE compiled.

- http://www.hise.audio/
- https://www.patreon.com/posts/building-hise-on-28322675
- https://github.com/christophhart/HISE
- Make sure to unpack the SDKs using the password you can find on the forum!
- https://www.airwindows.com/balanced/

**Cwits** fixed the timing issues in the metronome.

# 2022-08-03

[**Meeting**](https://youtu.be/NtdsA5x5-Xc)

Leandro is prototyping the Automixer in JSFX and learning about electronics. Shout out to:

- [Moritz Klein](https://www.youtube.com/c/MoritzKlein0)
- [LOOK MUM NO COMPUTER](https://www.youtube.com/c/LOOKMUMNOCOMPUTER)
- [Music From Outer Space](http://musicfromouterspace.com/)

Cwits has fixed his MIDI-recording timing issues by putting MIDI processing in the same loop as audio processing.

- https://github.com/Tracktion/tracktion_engine
- https://www.qtractor.org/
- https://lmms.io/
- https://openmpt.org/

Fotis translated an Airwindows plugin to JSFX with the help of [Mark Heath’s tutorial](https://www.youtube.com/watch?v=fs1SG5L39_Q).

Bo installed iPlug2 and built an example plugin.

- https://github.com/iPlug2/iPlug2/wiki/02_Getting_started_windows

# 2022-07-20

[**Meeting**](https://youtu.be/y23owjOtT70)

Cwits talked about adding audio inputs to his Raspberry Pi project by getting an Analog-to-Digital Converter (ADC). We also discussed the issues he’s been having with timing events.

Fotis talked about a C++ book he’s reading: **Absolute C++**, by Walter Savitch. We also discussed some issue he had trying to compile a JUCE port of an Airwindows plugin.

Leandro talked about communication between plugin instances using global variables, which is necessary for the Automixer. We also looked at Room EQ Wizard to measure & analyze electronics circuits.

---

- <https://github.com/deadlab-plugins/bluelab-plugins>
- <https://github.com/MeijisIrlnd/airwindows>

# 2022-07-07

[**Meeting**](https://youtu.be/h-7Wm30yShM)

Leandro talked about his first experiences with electronics: from basic components and what they do up to an overdrive pedal. Shout out to https://www.youtube.com/user/aritosuzuki !

Alessandro is working on software for transcribing music. In particular, he’s implementing an algorithm to slow playback and help you transcribe fast parts. See more at <https://github.com/Thronplunder/transcriber>.

Fotis talked about spatial audio and showed us his drums plugin from the past.

---

- <https://github.com/essej/paulxstretch>
- **A Review of Time-Scale Modification of Music Signals**, by Jonathan Driedger, and Meinard Müller.

# 2022-06-22

[**Meeting**](https://youtu.be/i5Oe4cN6Rzc)

- Fotis had a plugin working iPlug2. We discussed the tradeoffs when compared to JUCE, looked at the boilerplate generated by iPlug2, and talked about lambdas.
- Leandro finished reading A Tour of C++. Next he’ll use this knowledge to create a side-channel to communicate streams of audio between instances of his Automixer.
- Bo made his plugin stereo & created sliders. He’ll now attach these sliders to the member variables in the audio processor.
- Cwits made the sequencer work and trigger samples. He also showed us how he uses lambdas as callbacks for loading files without interrupting audio playback.

---

- <https://docs.juce.com/master/tutorial_slider_values.html>

```c++
void Fudge____AudioEditor::sliderValueChanged(juce::Slider* slider) override
{
  if (slider == &slider1)
    fudge____AudioProcessor.weight = slider1.getValue();
  else if (slider == &slider2)
    fudge____AudioProcessor.fudge = slider2.getValue();
}
```

- <https://docs.juce.com/master/classAudioProcessorValueTreeState.html>
- <https://www.tobias-erichsen.de/software/loopmidi.html>
- <https://github.com/KeppySoftware/OmniMIDI>
- <https://www.schiit.com/home>

# 2022-06-08

[**Meeting**](https://youtu.be/Jgv-xCjKJOI)

- Fotis talked about instruments that combine synthesis & sampling.
  - <https://github.com/munt/munt>
  - <https://github.com/mpue/Synthlab/tree/master>
  - <https://lbezone.ust.hk/obj/1/o/b500028/b500028.pdf>
  - <https://lbezone.ust.hk/obj/1/o/b519393/b519393.pdf>
  - <http://repository.ust.hk/ir/bitstream/1783.1-1410/1/icmc02.pdf>
- Leandro is still reading his Tour of C++ book.
- Bo showed us a prototype of his Fudge Filter in JSFX and we converted it to C++ & JUCE.
  - <https://www.allrecipes.com/recipe/261099/fudge-muffins/>

# 2022-05-11

[**Meeting**](https://youtu.be/iVcsnzVHzlg)

- Cwits: Implemented the timing of MIDI events using a combination of precise sleep with `nanosleep()` & a bit of busy wait. For next meeting will try to fix a crash that’s probably caused by a race condition.
- Fotis: <https://github.com/DISTRHO/Cardinal> & <https://aria.dog/barks/why-i-will-never-create-modules-for-vcv-rack-anymore/>. For next meeting will study about sound engines combining sampling & synthesis.
- Leandro: Reading **A Tour of C++**, by Bjarne Stroustrup. Recommended for experienced programmers with a foot in programming-language theory who want to get up to speed in C++ relatively fast. For next meeting will finish reading the book and start applying the knowledge to the Automixer.
- Bo: Following along The Audio Programmer’s JUCE tutorials. Got stuck because of a couple syntax issues & a misnamed class, but back on track now. We talked about classes, inheritance, and namespaces. For next meeting will continue with the tutorials.

# 2022-05-11

[**Meeting**](https://youtu.be/flgKOgGaDtQ)

- Bo:
  - Studying JUCE & C++.
  - Watching The Audio Programmer and other YouTube tutorials.
- Cwits:
  - Taking a break.
- Fotis:
  - Created a Bespoke patch.
  - Bought Fluid Chords.
  - Tone filter from NieR:Automata.
- Leandro:
  - Concurrency between tracks:
    - <https://gist.github.com/leafac/9151449bcea3c79e9b84e921315fbe59>
    - One block isn’t enough, probably because the children may start processing the next block before the parent finished processing its own block.
    - When you hit play, it’s off (it doesn’t null):
      - Not worry about it?
      - Fade-in?
  - Latency
    - It just works—no latency introduced 🤷
- Links:
  - https://www.pitchinnovations.com/products/fluid-chords/
  - http://themaister.net/blog/2019/02/23/recreating-the-tone-filter-from-nierautomata/
  - https://www.platinumgames.com/official-blog/article/9581
  - https://www.kvraudio.com/forum/viewtopic.php?t=521928
  - https://www.patreon.com/posts/ncar-35428355

# 2022-04-26

[**Meeting**](https://youtu.be/p1D43DKp1ns)

- Cwits created a piano roll for the Push. For next meeting he’ll look into how to record MIDI and deal with timing issues.
- Fotis designed 3 plugins that have to do with synthesis and synesthesia. For next meeting he’ll look into a reverb by BABY Audio & reveal some mysterious plugin in KVR that he’s been talking to the developer about.
- Leandro learned how to send & receive audio between instances of a plugin. For next meeting he’ll do a couple more experiments with concurrency and latency, and he’ll brush up on C++.
- Links:
  - http://www.rossbencina.com/writings
  - https://github.com/airwindows/airwindows/blob/master/plugins/MacSignedVST/Console6Channel/source/Console6ChannelProc.cpp
    - https://github.com/airwindows/airwindows/blob/master/plugins/MacSignedVST/Console6Buss/source/Console6BussProc.cpp
  - https://github.com/Samelot/Reaper/blob/master/Effects/LOSER/gmemSend
  - https://github.com/Samelot/Reaper/blob/master/Effects/LOSER/gmemReceive

# 2022-04-13

[**Meeting**](https://youtu.be/ISaeg_YJ4R4)

- Leandro investigated issues related to FX chains with different latency before sending audio to the automixer.
- Cwits developed a pitch shifter (http://blogs.zynaptiq.com/bernsee/pitch-shifting-using-the-ft/ / https://www.zynaptiq.com/pitchmap/), a tone generator, a mechanism to manage voices, and the beginnings of MIDI processing (http://www.music.mcgill.ca/~ich/classes/mumt306/StandardMIDIfileformat.html).
- Fotis tested and/or mentioned the following:
  - https://audiomodeling.com/about-us/technology/
  - https://www.stagecraftsoftware.com
  - https://www.stagecraftsoftware.com/products/disarray/
  - https://github.com/GuitarML?tab=repositories
  - https://forums.cockos.com/showthread.php?p=2546830
  - https://babyaud.io/taip-plugin

# 2022-03-29

[**Meeting**](https://youtu.be/D3OMyljNh8o)

- Unusual meeting because some people were busy and we wanted to catch https://www.youtube.com/watch?v=gnbSMmTiDxk
- Leandro’s progress:
  - Ergonomics: Having to close and reopen REAPER to load a new version of a VST.
    - Tale told me a probable reason for this: REAPER keeps the VST loaded in memory; on Windows one isn’t even able to overwrite the VST file while a DAW has it open.
    - Tried to get the plugin to load in Live, just to check. But Live doesn’t pick it up. Probably because Xcode puts it under `~/Library/Audio/Plug-ins/`, instead of `/Library/Audio/Plug-ins/` 🤷
  - Plugin still crashes REAPER from time to time.
  - Using Tale’s trick of outputting RMS as audio, it turns out that RMS computation is wrong! 🤷
  - Plugin delays on different automixed tracks could be an issue!

# 2022-03-15

[**Meeting**](https://youtu.be/Sq_XXdnNV8c)

- Progress:
  - Cwits made a whole engine capable of loading audio-processing modules into a Raspberry Pi and controlling them via an Ableton Push.
  - Fotis made some progress through the video tutorials on JUCE and started looking into Cabbage & DIN Is Noise.
  - Leandro got RMS computation of arbitrary sizes working (probably).
- Links:
  - <https://www.youtube.com/watch?v=pqYXKRA6DXY>
  - <https://www.youtube.com/watch?v=q7XrrBXIzfg>
  - <https://github.com/rorywalsh/cabbage>
  - <https://github.com/micah-frank-studio/Lore>
  - <https://github.com/CsoundQt/CsoundQt/>
  - <https://github.com/csudo/csudo>
  - <https://github.com/micah-frank-studio/Lore/blob/main/GenerativeDevices/Ember/Ember.csd>
  - <https://github.com/FluidSynth/fluidsynth>
  - <https://github.com/davy7125/polyphone>
  - <https://dinisnoise.org/README/>
  - <https://www.patreon.com/posts/ncar-35428355>

# 2022-03-02

[**Meeting**](https://youtu.be/xagHKQTdMd4)

- Progress:
  - Fotis followed along some The Audio Programmer tutorials, but got stuck, and we helped him get unstuck. He’ll continue with the tutorials and think about some synth ideas.
  - Cwits found a library able to communicate with Push from a Raspberry Pi. He also found some algorithms like delay and filters. He’ll now try to connect the controller code to the audio-processing code.
  - Leandro found a way to compute RMS with JUCE. It turns out that it may not give the control necessary for the automixer to work (bigger window sizes independent of the buffer size). He’ll now come up with a custom RMS computation.
- Links:
  - <https://polyversemusic.com/products/wider/>
  - <https://github.com/lane-s/libpush>
  - <https://www.flux.audio/spat-revolution-subscription/>
  - <https://www.musicdsp.org/en/latest/Filters/243-butterworth-optimized-c-class.html>
  - <https://youlean.co>
  - <https://iplug2.github.io>
  - <https://youtu.be/Mo0Oco3Vimo>

# 2022-02-15

[**Meeting**](https://youtu.be/v4YRmSR6VC8)

- We talked about our goals.
  - **Fotis:** Learn how synthesizers work, for example, what makes a synth from brand X different from brand Y. Explore CLAP.
  - **Victor:** Learn how the mathematics, music, and code come together. Build a custom livelooping that works well for accompanying monophonic instruments (flute).
  - **Tom:** Build a standalone application with PulseAudio, instead of a plugin that’s loaded into a DAW. Build delays & reverbs for guitar. Build an instrument similar to theremin that’s controlled with something like a Leap Motion.
  - **Cwits:** Learn how the mathematics, music, and code come together. Build basic plugins like delays.
  - **Leandro:** Develop a version of his [Automixer](https://github.com/leafac/reaper/tree/da940056c122ceb7f8d7f23499afef451c5fd8ae#automixer) that works in every DAW.
- We reported success in building the basic example code given by APIs/frameworks of choice.
- We looked at the basic example code generated by Projucer and discussed the lifecycle of a plugin and some C++.
- We chose a task that will take us towards our goals that’s small enough we can finish it until next meeting (2022-03-01).

**Links**

- <https://www.bespokesynth.com>
- <https://en.wikipedia.org/wiki/Gibbs_phenomenon>
- <https://www.plogue.com/products/bidule.html>
- <https://dinisnoise.org/>
- Oversampling and antialiasing filters (among many other interesting things): <https://www.youtube.com/watch?v=VtNvWkB3R3U>
- Building a circular buffer (useful for delays, reverbs, and many other things) from scratch (among many other interesting things): <https://www.youtube.com/watch?v=D5mCdBTMjt8>
- The very basics of a filter (EQ): <https://www.youtube.com/watch?v=HexzW0EZal8>
- Also, search <https://www.youtube.com/c/leafac> & <https://www.youtube.com/c/IDDQDMusic> for various other topics.
- <https://www.stagecraftsoftware.com/products/theremin/>
- <https://github.com/surge-synthesizer/surge/blob/4af3bf350963d161a211f70ccb6d3012a09162de/src/common/dsp/oscillators/ModernOscillator.cpp>
- <https://craftofcoding.wordpress.com/2022/02/11/what-fortran-does-better-than-c-like-languages/>
- <https://www.airwindows.com/>
- Related to CLAP:
  - <https://www.kvraudio.com/forum/viewtopic.php?f=31&t=574861&start=480>
  - <http://drobilla.net/2019/11/11/lv2-the-good-bad-and-ugly.html>
  - <https://github.com/free-audio/clap-juce-extensions>
  - <https://github.com/schwaaa/clap-imgui/>
  - <https://vi-control.net/community/threads/clap-a-new-plugin-format.118833/>
- <https://www.youtube.com/playlist?list=PLLgJJsrdwhPwJimt5vtHtNmu63OucmPck>

# 2022-02-01

[**Meeting**](https://youtu.be/FutGtjbElBA)

We started by introducing ourselves. We have some people who are new to programming, and so people who are authors of C++ programming books(!)

**Logistics**

We’ll meet every 15 days for about 1~1.5h. We’ll communicate on Discord, Skype, and over here on this GitHub repository, where we’ll also share the code we end up writing.

**Materials**

- YouTube videos & channels to check:
  - Awesome introductions to how audio is represented digitally that clears up some misconceptions: <https://www.youtube.com/watch?v=cIQ9IXSUzuM>
  - Another video by the same person, which covers other kinds of digital signals (images and videos): <https://www.youtube.com/watch?v=FG9jemV1T7I>
  - Excellent practical demonstrations of some basic concepts such as aliasing distortion, sampling rates, and so forth, and practical aspects when dealing with music production: <https://www.youtube.com/c/DanWorrall> & <https://www.youtube.com/channel/UCxihtGe18Br6U8RuYCt-hDw>
  - Our own channels, in which we’ve been live-coding audio effects for almost a year, but using REAPER’s JSFX, not C++:
    - <https://www.youtube.com/c/IDDQDMusic>
    - <https://www.youtube.com/c/leafac>
- Victor’s book on C++: <https://web.corral.tacc.utexas.edu/CompEdu/pdf/isp/EijkhoutIntroSciProgramming-book.pdf>
- An introductory book on Digital Signal Processing: <http://www.dspguide.com/>
  - Great explanations.
  - Suitable for beginners.
  - A bit old, so take the parts about hardware with a grain of salt.
- _Designing Audio Effect Plug-Ins in C++_, by Will Pirkle. A book recommended by [Justin Johnson](https://github.com/Justin-Johnson), of [ReEQ](https://github.com/Justin-Johnson/ReJJ) fame.
- Other stuff:
  - <https://juce.com>
  - <https://iplug2.github.io>
  - <https://github.com/DISTRHO/DPF>
  - <https://github.com/free-audio/clap>
  - <https://linux.softpedia.com/get/Multimedia/Audio/PyDAW-103171.shtml>
  - <https://www.boomlibrary.com/sound-effects/debird/>
  - <https://github.com/salmer/CppDeveloperRoadmap>
  - <https://github.com/rorywalsh/cabbage>
  - <https://www.theaudioprogrammer.com>

**Goals for Next Week**

- Setting an objective. Examples: Making a synthesizer, making a compressor, contributing to an existing open-source project, learning how a reverb works.
- Digital Signal Processing:
  - Have a basic understanding of Digital Audio Workstations (DAW) and what some audio effects do: EQ, compression, delay, reverb, distortion, and so forth.
  - Understand how digital audio is represented: floating points, sampling rates, bit depths, frequency, amplitude, audio-to-digital conversation and digital-to-audio conversion, DC, Nyquist frequency, aliasing, time-domain vs frequency domain, and so forth.
  - How to make sense of what’s displayed in an oscilloscope (time-domain) and on a frequency spectrum analyzer (frequency domain).
  - Get a point where the first chapter of _Designing Audio Effect Plug-Ins in C++_ makes sense.
- Programming:
  - Setting up a project for an audio plugin, getting it to compile, and running it inside a DAW. Either using JUCE or something else.
