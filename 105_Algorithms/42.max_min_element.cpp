
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

void max_min_element();

void max_min_element()
{
	std::cout << "max_min_element: \n";

	std::vector<int> data { 
		1, 2, 3, 4, 5, 6, 3, 4, 5
	};


	auto min_max_elements_pair = std::minmax_element(data.begin(), data.end());

	if (min_max_elements_pair.first == min_max_elements_pair.second && min_max_elements_pair.second == data.begin()) {
		std::cout << "Search data is empty\n";
	} 
	else {
		std::cout << "Largest element is " << *(min_max_elements_pair.second) << ", the smallest element is " << *(min_max_elements_pair.first) << '\n';
	}
	
}