﻿# CMakeList.txt : CMake project for 105_Algorithms, include source and define
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
	"10.partition_point.cpp" 
	"11.rotate.cpp" 
	"12.shuffle.cpp" 
	"13.14. next_prev_perm.cpp" 
	"15.reverse.cpp" 
	"16.stable__.cpp" 
	"17.is__.cpp" 
	"18.is__until.cpp" 
	"19.count.cpp" 
	"20.accumilate.cpp" 
	"21.partial_sum.cpp" 
	"24.transform_inclusive_scan.cpp" 
	"23.transform_exclusive_scan.cpp" 
	"22.inner_product.cpp" 
	"25.adjacent_difference.cpp" 
	"26.sample.cpp" 
	"27.all_of.cpp" 
	"29.none_of.cpp" 
	"28.any_of.cpp" 
	"30.equal.cpp" 
	"31.is_permutation.cpp" 
	"32.lexigraphical_compare.cpp" 
	"33.mismatch.cpp" 
	"34.find.cpp" 
	"35.adjacent_find.cpp" 
	"36.equal_range.cpp" 
	"37.search.cpp" 
	"38.find_end.cpp" 
	"39.find_first_of.cpp" 
	"40.max_element.cpp" 
	"41.min_element.cpp" 
	"42.max_min_element.cpp")

# TODO: Add tests and install targets if needed.
