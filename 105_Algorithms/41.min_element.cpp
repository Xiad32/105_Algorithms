
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

void min_element();

void min_element()
{
	std::cout << "find_end: \n";

	std::vector<int> data { 
		1, 2, 3, 4, 5, 6, 3, 4, 5
	};

	auto min_element_it = std::min_element(data.begin(), data.end());

	if (min_element_it == data.end()) {
		std::cout << "Data is empty\n";
	} 
	else {
		std::cout << "Smallest element in the array is " << *min_element_it << '\n';
	}
	
}