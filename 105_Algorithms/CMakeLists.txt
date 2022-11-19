# CMakeList.txt : CMake project for 105_Algorithms, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (105_Algorithms "105_Algorithms.cpp" "105_Algorithms.h" 
    "1.for_each.cpp" 
	"2.make_heap.cpp"
	"3.push_heap.cpp" 
	 "4.pop_heap.cpp" "5.sort_of_ints.cpp" "6.partial_sort_of_ints.cpp" "8.sort_heap.cpp" "7.nth_element (2).cpp" "9.inplace_merge.cpp")

# TODO: Add tests and install targets if needed.
