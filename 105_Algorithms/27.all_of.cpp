
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

void all_of();

void all_of()
{
	std::cout << "all_of: \n";

	std::vector<int> data {
		1,
		2,
		3,
		4,
		5,
		6,
	};

	auto result = std::all_of(data.begin(), data.end(), [](int i){return i > 0;});
	if (result) {
		std::cout << "All are more than 0\n";
	}
	else {
		std::cout << "Not all are more than 0\n";
	}

	result = std::all_of(data.begin(), data.end(), [](int i){return i > 2;});
	if (result) {
		std::cout << "All are more than 2\n";
	}
	else {
		std::cout << "Not all are more than 2\n";
	}
}