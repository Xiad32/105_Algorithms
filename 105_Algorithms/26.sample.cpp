
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

void sample();

void sample()
{
	std::cout << "sample: \n";

	std::vector<int> data {
		1,
		2,
		3,
		4,
		5,
		6,
	};

	std::vector<int> data_sample{};

	std::sample(data.begin(), data.end(), std::back_inserter(data_sample), 3,
		std::mt19937 {std::random_device{}()});

	std::for_each(data_sample.begin(), data_sample.end(), [] (int score) {std::cout << score << std::endl;});
}