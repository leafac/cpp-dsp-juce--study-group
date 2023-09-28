# 2023-09-27

[**Meeting**](https://youtube.com/live/ANL09qlun_Y)

Aline is a special guest. She’s a friend of Leandro’s from college.

Leandro introduced how to program a Raspberry Pi Pico with CircuitPython, which will be part of the EWI project pitched last meeting.

Bo showed the code for a JSFX which splits the signal between low and high frequencies and distorts the low frequencies.

Fotis is developing a user interface in HISE, and also showed a sequencer that runs in the browser and works by drawing shapes. Finally, he showed as a vocoder effect done in TurboSynth, from back in the 90s(!)

- https://www.youtube.com/watch?v=_yHJ8fEJgf0
- https://archive.org/details/macos9appinstaller

# 2023-09-05

[**Meeting**](https://youtube.com/live/X7pWjUN7GKQ)

Fotis tried to get HISE’s new feature of time stretching to work, both from the GUI as well as from a script, but it didn’t work. Yet.

Cwits showed us some file editing features in his project: cutting and pasting sections of audio, reversing audio, and so forth.

Bo showed us some JSFX with a really clever idea for distortion in which the coefficient of a low-pass filter is modulated with the incoming signal.

Leandro pitched an idea of a EWI with a Raspberry Pi Pico, showed a Hammerspoon script that disables a MacBook keyboard for cleaning, and worked on Project Euler’s problem 9.

- https://github.com/leafac/hammerspoon
- https://www.reddit.com/r/synthrecipes/comments/k4n1jj/dx7_in_vital_sure_why_not_plus_a_crash_course_in/
- https://www.youtube.com/watch?v=-1dqCVg1mVU
- https://github.com/bgins/coincident-spectra
- https://coincident-spectra.fission.app/
- https://www.youtube.com/watch?v=n9oOCTFhio4
- https://github.com/cardonabits/haxo-hw
- https://www.instructables.com/Make-a-Wind-controlled-MIDI-Instrument/

# 2023-08-24

[**Meeting**](https://youtube.com/live/-Obb3JzddzU)

Fotis showed some updates to HISE, wrote some JSFX for sliders, and brought The Signal State for us to play together.

Cwits is dealing with weird edge cases in MIDI files.

Leandro coded Project Euler problem 8. We learned to use vectors and that we need to be mindful of `int` overflows.

- https://github.com/ldrolez/free-midi-chords
- https://github.com/edkashinsky/reaper-reableton-scripts
- https://www.youtube.com/watch?v=_Jzz6GKdcFA
- https://www.youtube.com/watch?v=EtNRuzKKtWI

# 2023-08-10

[**Meeting**](https://youtube.com/live/2oy4973WGq8)

Cwits got all parts working and is able to record and playback audio 🙌

Leandro solved Project Euler problem 7 and showed that brute force goes a long way.

Fotis showed a sketch of the user interface for his new not-Juno synthesizer, and showed a bunch of other interesting things. His homework is to come up with sliders for a time vs musical divisions modification he wants to do to a JSFX.

Bo talked about his Revolver compressor, an RMS-based compressor with novel transfer curves. He also showed his implementation a really nerdy way of going about BPMs.

---

- https://www.youtube.com/watch?v=nUHEPmg0sPo
- https://keypleezer.com/sfz-to-hise-converter/
- https://www.airwindows.com/airwindows-nodal-tempo-guide/
- https://goyo.app/
- https://neutone.space/
- https://github.com/stars/fotisandstuff/lists/nap

# 2023-06-28

[**Meeting**](https://youtube.com/live/KucPvSp29ZA)

Cwits received some more components but is now having problems with the power supply.

Leandro solved Project Euler problem 6 in C++ and compared it to the ChatGPT solution. We also discussed best practices around numeric types in C++.

Fotis finished simplifying sai'ke’s Filther to make it use less CPU.

# 2023-06-14

[**Meeting**](https://youtube.com/live/Iux_JHtlaYo)

Bo brought us an RBJ all-pass for us to implement, which is part of a widener he’s working on. He also showed us a work-in-progress of a bus summing effect based on wave-shaping and a first-order low-pass filter.

Cwits developed an user interface for a DAW running in the Ableton Push.

Leandro solved Project Euler problem 5 in C++ and compared it to the ChatGPT solution.

# 2023-05-31

[**Meeting**](https://youtube.com/live/BQqloqIe51g)

Cwits got some new components to replace those that had been burned, but something is still wrong: for the time being the output is just white noise. Unfortunately right now he doesn’t have access to the test equipment he needs: an oscilloscope and a good multimeter.

Fotis released a synth: Wild 👏 He also showed some new plugins by Tale. And then together we adapted a fancy JSFX plugin to have a lightweight user interface.

Leandro live-coded the solution to Project Euler problem 4, and we compared to the solutions given by ChatGPT.

- https://github.com/fotisandstuff/wild
- https://en.wikipedia.org/wiki/PC_speaker
- https://www.metafunction.co.uk/post/all-about-digital-oscillators-part-1-aliasing-foldover
- https://www.metafunction.co.uk/post/all-about-digital-oscillators-part-2-blits-bleps
- https://www.taletn.com/reaper/mono_synth/

# 2023-05-18

[**Meeting**](https://youtube.com/live/RxiG2udBRbc)

Bo is learning about C# & Python for his day job.

Cwits had an issue with burning an expensive microcontroller, but bounced back and soldered a prototype together with a power supply for the Raspberry Pi and other components, and is now figuring out some quirks with the mute pins on some ICs on the damaged Audient audio interface he’s using for parts.

Fotis live-coded in JSFX an adaptation of an Airwindows effect to use a different type of distortion.

- https://www.jthorborg.com/index.html?ipage=signalizer
- https://forum.vegalab.ru/showthread.php?t=84035
- http://weavesilk.com/
- https://github.com/scrtwpns/mixbox
- https://stephaneginier.com/sculptgl/
- https://paveldogreat.github.io/WebGL-Fluid-Simulation/

# 2023-04-20

[**Meeting**](https://youtube.com/live/g5LqpdY2qP0)

Cwits has refactored his code so that it isn’t so deeply nested.

Fotis showed the following projects:

- https://forum.hise.audio/topic/7434/haha-the-easter-bunny-has-delivered/
- http://www.cerlsoundgroup.org/Loris/
- https://github.com/christophhart/loris-tools
- https://github.com/sfzinstruments
- https://github.com/sdatkinson/NeuralAmpModelerPlugin
- https://www.gpu.audio/
- https://forums.cockos.com/showthread.php?t=278176

Bo is considering JUCE again, given that iPlug2 didn’t work for him.

Leandro wrote a brute-force solution to Project Euler problem 3.

# 2023-03-29

[**Meeting**](https://youtube.com/live/xEjbbzcZ2nA)

Cwits got the microcontrollers he needed and refactored some of his code, but is now taking a bit of a break and considering how to get excited about the project again.

Fotis talked about Rhapsody (a sampler) and Libre Wave (a collection of virtual instruments).

- https://librewave.com/rhapsody/
- https://librewave.com/
- https://kotaku.com/the-exceptional-beauty-of-doom-3s-source-code-5975610
- https://www.youtube.com/watch?v=BHbYPbohorQ
- https://stash.reaper.fm/browse.php?q=user%3Aashcat_lt&cat=JS-Effects&v=th&o=nd&pp=24

Bo talked about an idea for an octaver that he’s developing with the help of ChatGPT. We developed a concept in JSFX together.

- https://www.kvraudio.com/product/octaver-oc-d2-by-chris-hooker
- https://en.wikipedia.org/wiki/Verlet_integration

Leandro solved a few Project Euler problems in C++.

- https://projecteuler.net

# 2023-03-15

[**Meeting**](https://youtube.com/live/AB9z53q7-fI)

Leandro is thinking of doing some Project Euler exercises in C++: https://projecteuler.net/

Bo worked on his compressor, widener, and novel equalizers.

Fotis compiled his Wild instrument, and we wrote some JSFX for slew rates together.

# 2023-02-22

[**Meeting**](https://youtube.com/live/AKFi1jfnIHQ)

Cwits is pondering whether to do a user interface in Qt in a monolithic way, or separate the backend from the frontend.

Fotis created a synthesizer with HISE that is reminiscent of a Game Boy.

- https://github.com/edkashinsky/reaper-reableton-scripts/blob/master/reaper-vkbmap.txt
- https://keypleezer.com/sfz-to-hise-converter/

Bo created a stereo widener and showed us how it works in a goniometer.

- https://www.kvraudio.com/product/true-mid-side---mid-side-channel-extractor-by-raising-jake-studios

Leandro watched some videos by The Cherno and read “YIN, a fundamental frequency estimator for speech and music”.

- https://thecherno.com
- http://audition.ens.fr/adc/pdf/2002_JASA_YIN.pdf

# 2023-02-08

[**Meeting**](https://youtube.com/live/9LDCPr40XQI)

- Fotis worked on some scripts for using ffmpeg from REAPER to manage dialog normalization in AC3 files.

- Cwits is waiting for a microcontroller to manage the clock on his project (the first one burned 😬) and playing with Qt for the user interface on a display separate from the Ableton Push display.

# 2023-01-25

[**Meeting**](https://youtube.com/live/xoO6zE2lQ34)

Bo is working on his compressor, split distortion, and playing with ChatGPT.

Fotis tweaked a script to explode media streams.

Leandro setup Visual Studio Code for C++ and played around with a library to do HTTP servers in C++.

# 2022-12-07

[**Meeting**](https://youtube.com/live/t_Oyd8kNG9M)

Bo showed us two of his JSFX projects: An extreme clipper to win the loudness war, and a compressor. We talked about look-up tables and fixed an issue that was causing differences between the left and right channels.

Leandro is getting his feet wet in iPlug. In particular, he’s interested in using a web view to do the user interface of a plugin in HTML/CSS/JavaScript.

Fotis showed a couple effects using FAUST in HISE. And his New Year’s resolution is to migrate a bunch of synthesizers from FlowStone to C++.

We’ll be back 2023-01-04.

# 2022-11-23

[**Meeting**](https://youtube.com/live/40RMsFvtwg4)

Leandro learned more about the noise issues in his oscilloscope. He also learned a thing or two about the anti-aliasing filters in the digital-to-analog converters of his iPad & Thinkpad.

Fotis learned that his HISE plugin was actually working to begin with. And he dove deeper into FAUST.

And here’s the link of Fotis collaborating with Ian Shepherd: https://www.youtube.com/watch?v=n1Yfl6KGRk8

Cwits is pondering what to work on next.

Bo worked on his compressor & some waveshaping distortions.

# 2022-11-09

[**Meeting**](https://youtube.com/live/eQsPan7T9y8)

Leandro opened Xcode and closed it back down 🤷

- https://www.youtube.com/watch?v=vvBl3YUBUyY
- https://www.youtube.com/watch?v=p60y3Y3dE3M
- https://www.arturia.com/products/software-instruments/dx7-v/overview

Fotis looked into HISE & Faust integration.

- https://resonant-bytes.de/blog/gsoc-final-submission/

Bo did some distortion & filters in JSFX.

Cwits did some light effects in Ableton Push and showed us Ableton’s MIDI documentation.

# 2022-10-26

[**Meeting**](https://youtube.com/live/P9YqR8BSWEQ)

Fotis wrote some code in HISE to do a XY pad.

Leandro is still procrastinating 😅

Cwits worked on fade-in/fade-out curves, routing between samplers, and ran into an issue with playback rates below 1.

# 2022-10-12

[**Meeting**](https://youtube.com/live/lpF3DHCvmTc)

**Fotis** talked about doing a hybrid synth (sample + synth) in HISE.

- https://kimurataro.gumroad.com/l/freewt?layout=profile
- https://github.com/sgossner/VCSL
- https://forum.hise.audio/topic/5747/wavetable-synth-tutorial-how-i-do-it
- https://forum.hise.audio/topic/5714/wavetable-export-issue
- https://github.com/topics/hise

**Leandro** found that 1x probes don’t help with noise all that much. And he fixed his microwave oven with his newly acquired knowledge in electronics.

- https://github.com/elkayem/midi2cv

**Cwits** mentioned that using the microcontroller like discussed last meeting didn’t work. He’s now waiting for parts for an ADC.

- https://www.schiit.com/home
- https://www.hifiberry.com

**Bo** wrote a exponential-moving-average filter in JSFX using functions.

- https://www.youtube.com/watch?v=AIOAiDCWHUI

# 2022-09-28

[**Meeting**](https://youtube.com/live/1DvZ1KsFqfE)

**Leandro:** Still working on the Automixer in JSFX. Learning about electronics with a new oscilloscope. Wondering what amount of noise one is supposed to expect from an oscilloscope, and if 1x probes may help…

**Bo:** Still running into issues trying to build plugins with iPlug.

- https://github.com/iPlug2/iPlug2/discussions/872
- https://www.youtube.com/watch?v=Mo0Oco3Vimo&t=2231s

**Fotis:** Developed a Rompler with controls for attack, release, reverb, and so forth.

- https://github.com/SlavaCat118/Vinetics

**Cwits:** Refactored the code to represent menus with data structures instead of blocks of code. Started experimenting with a microcontroller attached to the Raspberry Pi.

# 2022-09-14

[**Meeting**](https://youtube.com/live/ajlzmauNYDc)

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

[**Meeting**](https://youtube.com/live/V55b8sfSY2k)

**Cwits:** Implemented a step sequencer and is considering turning the project into a product.

**Fotis:** Using the development version of HISE to build an interface. Finishing his first commercial sample pack.

- https://www.youtube.com/watch?v=2C4psWqleRs
- https://www.youtube.com/watch?v=cIQ9IXSUzuM

**Bo:** Implemented a new concept for a filter with a combination of averaging. Running into issue with the build system perhaps caused by having updated Visual Studio.

**Leandro:** Working on Automixer for Video, which is JSFX-only. Learning about simple circuits such as the Atari Punk Console & an analog VU meter.

# 2022-08-17

[**Meeting**](https://youtube.com/live/Pwbs9yiZHXo)

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

[**Meeting**](https://youtube.com/live/NtdsA5x5-Xc)

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

[**Meeting**](https://youtube.com/live/y23owjOtT70)

Cwits talked about adding audio inputs to his Raspberry Pi project by getting an Analog-to-Digital Converter (ADC). We also discussed the issues he’s been having with timing events.

Fotis talked about a C++ book he’s reading: **Absolute C++**, by Walter Savitch. We also discussed some issue he had trying to compile a JUCE port of an Airwindows plugin.

Leandro talked about communication between plugin instances using global variables, which is necessary for the Automixer. We also looked at Room EQ Wizard to measure & analyze electronics circuits.

---

- <https://github.com/deadlab-plugins/bluelab-plugins>
- <https://github.com/MeijisIrlnd/airwindows>

# 2022-07-07

[**Meeting**](https://youtube.com/live/h-7Wm30yShM)

Leandro talked about his first experiences with electronics: from basic components and what they do up to an overdrive pedal. Shout out to https://www.youtube.com/user/aritosuzuki !

Alessandro is working on software for transcribing music. In particular, he’s implementing an algorithm to slow playback and help you transcribe fast parts. See more at <https://github.com/Thronplunder/transcriber>.

Fotis talked about spatial audio and showed us his drums plugin from the past.

---

- <https://github.com/essej/paulxstretch>
- **A Review of Time-Scale Modification of Music Signals**, by Jonathan Driedger, and Meinard Müller.

# 2022-06-22

[**Meeting**](https://youtube.com/live/i5Oe4cN6Rzc)

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

[**Meeting**](https://youtube.com/live/Jgv-xCjKJOI)

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

[**Meeting**](https://youtube.com/live/iVcsnzVHzlg)

- Cwits: Implemented the timing of MIDI events using a combination of precise sleep with `nanosleep()` & a bit of busy wait. For next meeting will try to fix a crash that’s probably caused by a race condition.
- Fotis: <https://github.com/DISTRHO/Cardinal> & <https://aria.dog/barks/why-i-will-never-create-modules-for-vcv-rack-anymore/>. For next meeting will study about sound engines combining sampling & synthesis.
- Leandro: Reading **A Tour of C++**, by Bjarne Stroustrup. Recommended for experienced programmers with a foot in programming-language theory who want to get up to speed in C++ relatively fast. For next meeting will finish reading the book and start applying the knowledge to the Automixer.
- Bo: Following along The Audio Programmer’s JUCE tutorials. Got stuck because of a couple syntax issues & a misnamed class, but back on track now. We talked about classes, inheritance, and namespaces. For next meeting will continue with the tutorials.

# 2022-05-11

[**Meeting**](https://youtube.com/live/flgKOgGaDtQ)

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

[**Meeting**](https://youtube.com/live/p1D43DKp1ns)

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

[**Meeting**](https://youtube.com/live/ISaeg_YJ4R4)

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

[**Meeting**](https://youtube.com/live/D3OMyljNh8o)

- Unusual meeting because some people were busy and we wanted to catch https://www.youtube.com/watch?v=gnbSMmTiDxk
- Leandro’s progress:
  - Ergonomics: Having to close and reopen REAPER to load a new version of a VST.
    - Tale told me a probable reason for this: REAPER keeps the VST loaded in memory; on Windows one isn’t even able to overwrite the VST file while a DAW has it open.
    - Tried to get the plugin to load in Live, just to check. But Live doesn’t pick it up. Probably because Xcode puts it under `~/Library/Audio/Plug-ins/`, instead of `/Library/Audio/Plug-ins/` 🤷
  - Plugin still crashes REAPER from time to time.
  - Using Tale’s trick of outputting RMS as audio, it turns out that RMS computation is wrong! 🤷
  - Plugin delays on different automixed tracks could be an issue!

# 2022-03-15

[**Meeting**](https://youtube.com/live/Sq_XXdnNV8c)

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

[**Meeting**](https://youtube.com/live/xagHKQTdMd4)

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

[**Meeting**](https://youtube.com/live/v4YRmSR6VC8)

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

[**Meeting**](https://youtube.com/live/FutGtjbElBA)

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
