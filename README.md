# PdCBioEvol

### Projet De Conception Biologie Evolution

## Artificial Evolution Simulator

**Design Project: Parallel Computing and Performance Evaluation: Application to an Artificial Evolution Simulator**

*From a scientific project by Jonathan Rouzaud-Cornabas.*


#### How to install (Linux)

`sudo apt-get install libsfml-dev`

`sudo apt-get install zlib1g-dev`

`sudo apt-get install cmake`

If you want to use Intel Parallel Studio:

`echo 'source /opt/intel/compilers_and_libraries/linux/bin/compilervars.sh intel64' >> ~/.bashrc`

`echo 'PATH=$PATH:/opt/intel/compilers_and_libraries/linux/bin/intel64/' >> ~/.bashrc`


#### How to run (Linux)

Command line: `cmake -DWITH_GRAPHICS_CONTEXT=0 .`

or

Graphical interface: `cmake -DWITH_GRAPHICS_CONTEXT=1 .`

`make`

`./pdc_evol_model`


Intel Parallel Studio :
- ICC (equivalent GCC/G++)
- Advisor (code profiling)
- VTune (parallel executions)