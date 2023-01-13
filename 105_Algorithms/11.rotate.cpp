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

void rotate_int();

void rotate_int()
{
	std::vector<int> data {
		0, 2, 4, 5, 6, 1, 3, 5, 7
	};

	std::rotate(data.begin(), data.end() - 1, data.end());

	std::for_each(
		data.begin(),
		data.end(),
		[](int datum)
	{
		std::cout << datum << ",";
	}
	);

	// Can also be used to swap mid array
	std::cout << "\n";

	// get the second from last and place it at the second location
	std::rotate(data.begin()+1, data.end()-2, data.end());

	std::for_each(
		data.begin(),
		data.end(),
		[](int datum)
	{
		std::cout << datum << ",";
	}
	);

}