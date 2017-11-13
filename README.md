# PdCBioEvol

### Projet De Conception Biologie Evolution

## Artificial Evolution Simulator

**Design Project: Parallel Computing and Performance Evaluation: Application to an Artificial Evolution Simulator**

*From a scientific project by Jonathan Rouzaud-Cornabas.*


#### How to install (Linux)

`sudo apt-get install libsfml-dev`

`sudo apt-get install zlib1g-dev`

`sudo apt-get install cmake`


#### How to run (Linux)

Command line: `cmake -DWITH_GRAPHICS_CONTEXT=0 CMakeLists.txt`

OR

Graphical interface: `cmake -DWITH_GRAPHICS_CONTEXT=1 CMakeLists.txt`

`make`

`./pdc_evol_model`


Intel Parallel Studio :
- ICC (equivalent GCC/G++)
- Advisor (code profiling)
- VTune (parallel executions)