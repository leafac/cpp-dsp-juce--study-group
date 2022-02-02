# 2022-02-01

[**Meeting**](https://www.youtube.com/watch?v=FutGtjbElBA)

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
