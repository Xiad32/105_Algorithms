
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


void partial_sum_score ();

void partial_sum_score ()
{
	std::vector<int> data{
		2, 1, 2, 0
	};

	std::cout << "partal sum: \n";

	std::vector<int> result = {};
	
	std::partial_sum(data.begin(), data.end(), std::back_inserter(result), std::multiplies{});

	std::for_each(result.begin(), result.end(), [] (int score) {std::cout << score << std::endl;});
}