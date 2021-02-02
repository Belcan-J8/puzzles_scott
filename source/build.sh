#print out the compiler version number | mostly for automated build systems to see if the compiler changed when something went wrong
x86_64-w64-mingw32-g++ --version

#remove old build
rm -r build_final
rm -r build_intermediates

# create build directories
mkdir -p build_final
mkdir -p build_intermediates

#compile the static libraries
OLD_CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH
CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH:$PWD/utility:$PWD/vehicle
export CPLUS_INCLUDE_PATH

x86_64-w64-mingw32-g++ -Wpedantic -std=c++17 -o build_intermediates/Logger.a -c utility/Logger.cpp
x86_64-w64-mingw32-g++ -Wpedantic -std=c++17 -o build_intermediates/Car.a -c vehicle/Car.cpp
x86_64-w64-mingw32-g++ -Wpedantic -std=c++17 -o build_intermediates/FuelGauge.a -c vehicle/FuelGauge.cpp
x86_64-w64-mingw32-g++ -Wpedantic -std=c++17 -o build_intermediates/main.a -c main/main.cpp

CPLUS_INCLUDE_PATH=OLD_CPLUS_INCLUDE_PATH
export CPLUS_INCLUDE_PATH



OLD_LIBRARY_PATH=$LIBRARY_PATH
LIBRARY_PATH=$LIBRARY_PATH:$PWD/build_intermediates
x86_64-w64-mingw32-g++ -Wpedantic -std=c++17 -o build_final/puzzle_car.exe build_intermediates/*
