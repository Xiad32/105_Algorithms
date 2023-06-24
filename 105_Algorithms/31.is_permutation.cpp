
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

void is_permutation();

void is_permutation()
{
	std::cout << "equal: \n";

	std::vector<int> data1 {
		1,
		6,
		3,
		4,
		5,
		2,
	};

	std::vector<int> data2 {
		1,
		2,
		3,
		4,
		5,
		6,
	};

	auto result = std::is_permutation(data1.begin(), data1.end(), data2.begin());
	if (result) {
		std::cout << "Collections are a permutation of one another\n";
	} else {
		std::cout << "Collections are not a permutation of one another\n";
	}
	
}