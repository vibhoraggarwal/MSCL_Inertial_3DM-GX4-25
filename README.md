# MSCL_Inertial_3DM-GX4-25
Readingdata from the IMU using the MSCL library

Before compiling and running the files in this repository, install the dependencies using the [MSCL library](https://github.com/LORD-MicroStrain/MSCL).

Use the following command in the terminal to compile the cpp files: 

% Replace main by your file name

`g++ -I/usr/share/c++-mscl/source -I/usr/share/c++-mscl/Boost/include main.cpp -o main -L/usr/share/c++-mscl -lmscl -lstdc++ -std=c++11 -pthread`

These files have been simplified from the [MSCL listed examples for C++](https://github.com/LORD-MicroStrain/MSCL/tree/master/MSCL_Examples/Inertial/C%2B%2B/MSCL_Inertial_Example_C%2B%2B/MSCL_Inertial_Example_C%2B%2B).
