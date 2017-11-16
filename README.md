# PdCBioEvol

### Projet De Conception Biologie Evolution

## Artificial Evolution Simulator

**Design Project: Parallel Computing and Performance Evaluation: Application to an Artificial Evolution Simulator**

*From a scientific project by Jonathan Rouzaud-Cornabas.*


#### How to install on Linux

 - SFML `sudo apt-get install libsfml-dev`
 - zlib `sudo apt-get install zlib1g-dev`
 - CMake `sudo apt-get install cmake`

If you want to use Intel Parallel Studio:

- `echo 'source /opt/intel/compilers_and_libraries/linux/bin/compilervars.sh intel64' >> ~/.bashrc`
- `echo 'PATH=$PATH:/opt/intel/compilers_and_libraries/linux/bin/intel64/' >> ~/.bashrc`


#### How to debug on Linux

Command line: `cmake -DCMAKE_BUILD_TYPE=Debug -DWITH_GRAPHICS_CONTEXT=0 .`

or

Graphical interface: `cmake -DCMAKE_BUILD_TYPE=Debug -DWITH_GRAPHICS_CONTEXT=1 .`

`make`

`./pdc_evol_model`


Intel Parallel Studio :
- ICC (equivalent GCC/G++)
- Advisor (code profiling)
- VTune (parallel executions)