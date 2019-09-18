# MSCL_Inertial_3DM-GX4-25
Readingdata from the IMU using the MSCL library

Before compiling and running the files in this repository, install the dependencies using the [MSCL library](https://github.com/LORD-MicroStrain/MSCL).

Use the following command in the terminal to compile the cpp files: 

`g++ -I/usr/share/c++-mscl/source -I/usr/share/c++-mscl/Boost/include main.cpp -o main -L/usr/share/c++-mscl -lmscl -lstdc++ -std=c++11 -pthread`
