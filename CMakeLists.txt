# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.10)

project ("105_Algorithms")

# Include sub-projects.
add_subdirectory ("105_Algorithms")

#target_compile_features(${TARGET_NAME} cxx_std_17)
set_property(TARGET 105_Algorithms PROPERTY CXX_STANDARD 20)
set_property(TARGET 105_Algorithms PROPERTY CXX_STANDARD_REQUIRED ON)

