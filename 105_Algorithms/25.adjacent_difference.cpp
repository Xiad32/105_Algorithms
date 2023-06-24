
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


void adjacent_difference();

void adjacent_difference()
{
	std::cout << "adjacent difference: \n";

	std::vector<int> data {
		1,
		2,
		3,
		4,
		5,
		6,
	};

	std::vector<int> data_partial_sum{};

	std::adjacent_difference(data.begin(), data.end(), std::back_inserter(data_partial_sum));

	std::for_each(data_partial_sum.begin(), data_partial_sum.end(), [] (int score) {std::cout << score << std::endl;});
}