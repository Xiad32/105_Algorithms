
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

void equal_range();

void equal_range()
{
	std::cout << "equal_range: \n";

	std::vector<int> data { 
		1, 2, 3, 3, 3, 3, 4, 5, 6 
	};

	auto equal_range_it_pair = std::equal_range(data.begin(), data.end(), 3);

	if (equal_range_it_pair.second == data.end()) {
		std::cout << "No adjacent values";
	} 
	else {
		std::cout << "The range equal to 3 starts at index " << std::distance(data.begin(), equal_range_it_pair.first) << 
			" and ends at index: " << std::distance(data.begin(), equal_range_it_pair.second)<< " with value: " << *equal_range_it_pair.second<< '\n';	
	}
	
}