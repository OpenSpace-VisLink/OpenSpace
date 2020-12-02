## OpenSpace-VisLink
Getting up and running from scratch:
#### Clone this repo
In Git Bash:
```
git clone --recursive https://github.com/OpenSpace-VisLink/OpenSpace.git
```
#### Set up with Cmake
In Git Bash:
```
cd OpenSpace; mkdir build; cd build; cmake-gui ..;
```
In the CMake window
- Click Configure 
- Select Visual Studio 2017 and x64 and confirm
- Click 'Grouped' at the top of the CMake window
- Check mark OPENSPACE --> OPENSPACE_MODULE_VISLINK
- Configure again
- Generate
- OpenProject
#### Comment out STB_IMAGE_IMPLEMENTATION @ OpenSpace/apps/OpenSpace/ext/sgct/src/sgct/image.cpp
#### Set the 'OpenSpace' module as your startup project and build
<br>
<br>
<br>
[OpenSpace](http://openspaceproject.com) is an open source, non-commercial, and freely available interactive data visualization software designed to visualize the entire known universe and portray our ongoing efforts to investigate the cosmos.  Bringing the latest techniques from data visualization research to the general public, OpenSpace supports interactive presentation of dynamic data from observations, simulations, and space mission planning and operations.  The software works on multiple operating systems (Windows, Linux, MacOS) with an extensible architecture powering high resolution tiled displays and planetarium domes, making use of the latest graphic card technologies for rapid data throughput.  In addition, OpenSpace enables simultaneous connections across the globe creating opportunity for shared experiences among audiences worldwide.

The project stems from the same academic collaboration between Sweden’s [Linköping University](https://www.liu.se) (LiU) and the [American Museum of Natural History](https://www.amnh.org) (AMNH) that led to the creation of Uniview and its parent company [SCISS](http://sciss.se).  Development of the software began several years ago through a close collaboration with NASA Goddard’s [Community Coordinated Modeling Center](https://ccmc.gsfc.nasa.gov) (CCMC) to model space weather forecasting and continued with visualizations of NASA’s New Horizons mission to Pluto and ESA’s Rosetta mission.  This promising set of preliminary work provided a foundation for recent NASA funding, which has extended the collaboration to include the University of Utah’s [Scientific Computing and Imaging](https://www.sci.utah.edu) (SCI) Institute, [New York University](https://www.nyu.edu)’s Tandon School of Engineering, multiple informal science institutions across the United States, and multiple, international vendors.  Current areas of focus within OpenSpace include:

- Visualization of dynamic simulations via interactive volumetric rendering, as a priority for communicating research in astrophysics.
- Utilization of NASA’s SPICE observational geometry system with its Planetary Data Service (PDS) to enable space mission visualization that reveal how missions are designed to gather science.
- Globe browsing techniques across spatial and temporal scales to examine scientific campaigns on multiple planets, including close up surface exploration.

OpenSpace requires graphics support for [OpenGL](https://www.opengl.org/) version 3.3.

This repository contains the source code and example scenes for OpenSpace, but does not contain any data.  To build and install the client, we refer to the [OpenSpace Wiki](http://wiki.openspaceproject.com/), specifically [building](http://wiki.openspaceproject.com/docs/developers/compiling/general) for [Windows](http://wiki.openspaceproject.com/docs/developers/compiling/windows), [Linux (Ubuntu)](http://wiki.openspaceproject.com/docs/developers/compiling/ubuntu), and [MacOS](http://wiki.openspaceproject.com/docs/developers/compiling/macos).  Required preexisting dependencies are: [Boost](http://www.boost.org/) and [Qt](http://www.qt.io/download).  Feel free to create issues for missing features, bug reports, or compile problems or contact us via [email](mailto:alexander.bock@me.com?subject=OpenSpace:).

Regarding any issues, you are very welcome on our [Slack support channel](https://openspacesupport.slack.com) to which you can freely [sign-up](https://join.slack.com/t/openspacesupport/shared_invite/enQtMjUxNzUyMTQ1ODQxLTI4YjNmMTY3ZDI1N2Q1NWM1ZjQ1NTQyNzAxM2YyMGQ5Y2NmYWJiNjI1NjU4YTkyNTc5ZDE5NzdhNGM2YmUzYTk).
