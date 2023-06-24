
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

void find();

void find()
{
	std::cout << "find: \n";

	std::vector<int> data { 
		1, 2, 3, 4, 5, 6 
	};
	const int four = 4;

	auto first_4 = std::find(data.begin(), data.end(), four);

	if (first_4 == data.end()) {
		std::cout << "No value above 4.";
	} 
	else {
		std::cout << "First value 4 at index " << std::distance(data.begin(), first_4) << '\n';	
	}

	auto first_value_7 = std::find(data.begin(), data.end(), 7);

	if (first_value_7 == data.end()) {
		std::cout << "No value above 7.\n";
	} 
	else {
		std::cout << "First value 4 at index " << std::distance(data.begin(), first_4) << '\n';
	}
	
}