
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

void find_first_of();

void find_first_of()
{
	std::cout << "find_end: \n";

	std::vector<int> data { 
		1, 2, 3, 4, 5, 6, 3, 4, 5
	};

	std::vector<int> search_vector {
		4, 8, 2
	};

	auto found_element_it = std::find_first_of(data.begin(), data.end(), search_vector.begin(), search_vector.end());

	if (found_element_it == data.end()) {
		std::cout << "Couldn't find any element of the search vector in data\n";
	} 
	else {
		std::cout << "Found element " << *found_element_it << " at location " << std::distance(data.begin(), found_element_it) << '\n';
	}
	
}