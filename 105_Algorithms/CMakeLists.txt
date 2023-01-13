# CMakeList.txt : CMake project for 105_Algorithms, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (105_Algorithms "105_Algorithms.cpp" "105_Algorithms.h" 
    "1.for_each.cpp" 
	"2.make_heap.cpp"
	"3.push_heap.cpp" 
	"4.pop_heap.cpp" 
	"5.sort_of_ints.cpp"
	"6.partial_sort_of_ints.cpp"
	"7.nth_element.cpp"
	"8.sort_heap.cpp"  
	"9.inplace_merge.cpp"
	"10.partition_point.cpp" "11.rotate.cpp" "12.shuffle.cpp" "13.14. next_prev_perm.cpp" "15.reverse.cpp" "16.stable__.cpp" "17.is__.cpp" "17.is__until.cpp")

# TODO: Add tests and install targets if needed.
