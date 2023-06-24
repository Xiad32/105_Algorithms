
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

void find_end();

void find_end()
{
	std::cout << "find_end: \n";

	std::vector<int> data { 
		1, 2, 3, 4, 5, 6, 3, 4, 5
	};

	std::vector<int> search_vector {
		3, 4, 5
	};

	auto found_vector_it = std::find_end(data.begin(), data.end(), search_vector.begin(), search_vector.end());

	if (found_vector_it == data.end()) {
		std::cout << "Couldn't find search vector\n";
	} 
	else {
		std::cout << "End of search vector found at index " << std::distance(data.begin(), found_vector_it) << '\n';
	}
	
}

