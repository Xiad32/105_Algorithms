
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

void equal();

void equal()
{
	std::cout << "equal: \n";

	std::vector<int> data1 {
		1,
		2,
		3,
		4,
		5,
		6,
	};

	std::vector<int> data2 {
		1,
		2,
		3,
		4,
		5,
		6,
	};

	auto result = std::equal(data1.begin(), data1.end(), data2.begin());
	if (result) {
		std::cout << "Collections are equal\n";
	} else {
		std::cout << "Collections are not equal\n";
	}
	
	data2[2] = 100;

	result = std::equal(data1.begin(), data1.end(), data2.begin());

	if (result) {
		std::cout << "Collections are equal\n";
	} else {
		std::cout << "Collections are not equal\n";
	}

	
}

