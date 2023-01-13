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
#include <random>

void shuffle_int();

void shuffle_int()
{
	std::vector<int> data{
		0, 1, 2, 3, 4, 5, 6, 7, 8
	};

	// This algorithm requires a seed since it's permutations are random
	std::shuffle(data.begin(), data.end(), std::default_random_engine(0));

	std::for_each(
		data.begin(),
		data.end(),
		[](int datum)
		{
			std::cout << datum << ",";
		}
	);


}