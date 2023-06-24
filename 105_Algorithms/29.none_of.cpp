
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

void none_of();

void none_of()
{
	std::cout << "none_of: \n";

	std::vector<int> data {
		1,
		2,
		3,
		4,
		5,
		6,
	};

	auto result = std::none_of(data.begin(), data.end(), [](int i){return i > 5;});
	if (result) {
		std::cout << "None are larger than 5\n";
	}
	else {
		std::cout << "At leaset one is larger than 5\n";
	}

	result = std::none_of(data.begin(), data.end(), [](int i){return i > 10;});
	if (result) {
		std::cout << "None are larger than 10\n";
	}
	else {
		std::cout << "At leaset one is larger than 10\n";
	}
}