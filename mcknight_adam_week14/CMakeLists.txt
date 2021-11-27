# CMakeList.txt : CMake project for mcknight_adam_week14, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("mcknight_adam_week14")

# Add source to this project's executable.
add_executable (mcknight_adam_week14 "mcknight_adam_week14.cpp" "mcknight_adam_week14.h" "Vehicle.cpp" "Car.h" "Car.cpp" "Truck.h" "Truck.cpp")

# TODO: Add tests and install targets if needed.
