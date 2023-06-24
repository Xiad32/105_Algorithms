
/*
 * Algorithm: sort_heap
 *
 * Example: place the nth element at its right location if the collection
 *          was sorted. Everything before it is less than the nth element (not sorted)
 *          everything after it is more than the nth element (not sorted)
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <execution>
#include <random>

void adjacent_find();

void adjacent_find()
{
	std::cout << "adjacent_find: \n";

	std::vector<int> data { 
		1, 2, 3, 4, 5, 6 
	};

	auto adjacent_equals = std::adjacent_find(data.begin(), data.end());

	if (adjacent_equals == data.end()) {
		std::cout << "No adjacent values";
	} 
	else {
		std::cout << "Adjacent values found at " << std::distance(data.begin(), adjacent_equals) << 
			" equal to: " << *adjacent_equals << '\n';	
	}

	// make adjacent
	data[4] = 4;

	adjacent_equals = std::adjacent_find(data.begin(), data.end());

	if (adjacent_equals == data.end()) {
		std::cout << "No adjacent values";
	} 
	else {
		std::cout << "Adjacent values found at index " << std::distance(data.begin(), adjacent_equals) << 
			" equal to: " << *adjacent_equals << '\n';	
	}
	
}