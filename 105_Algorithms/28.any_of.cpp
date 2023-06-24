
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

void any_of();

void any_of()
{
	std::cout << "any_of: \n";

	std::vector<int> data {
		1,
		2,
		3,
		4,
		5,
		6,
	};

	auto result = std::any_of(data.begin(), data.end(), [](int i){return (i % 3) == 0;});
	if (result) {
		std::cout << "At least one is divisible by 3\n";
	}
	else {
		std::cout << "None are divisible by 3\n";
	}

	result = std::any_of(data.begin(), data.end(), [](int i){return (i % 10) == 0;});
	if (result) {
		std::cout << "At least one is divisible by 10\n";
	}
	else {
		std::cout << "None are divisible by 10\n";
	}
}