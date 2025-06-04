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

void inplace_merge_of_ints();

void inplace_merge_of_ints()
{
	std::vector<int> data {
		// First sorted collection
		0, 2, 4, 5, 6,
		// Second sort collection
		1, 3, 5, 7
	};
	
	std::inplace_merge(
		data.begin(),
		data.begin() + 5,
		data.end());

	std::for_each(
		data.begin(),
		data.end(),
		[](int datum)
	{
		std::cout << datum << ",";
	}
	);
}