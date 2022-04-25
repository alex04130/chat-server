#!bin/bash
# Program
#   build a c++ project
# History

test -e build/ || mkdir build
echo "mkdir build/"

test -e bin/ || mkdir bin
echo "mkdir bin/"

cd build/
cmake ..
make
