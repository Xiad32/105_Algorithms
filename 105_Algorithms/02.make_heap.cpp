/*
 * Algorithm: make_heap
 * 
 * Example: make a heap from a vector of ints from 0 to 9
 */

#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> make_heap_from_ints();

std::vector<int> make_heap_from_ints()
{
	// Data:
	std::vector<int> data{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::make_heap(
		data.begin(),
		data.end());

	std::for_each(
		data.begin(),
		data.end(),
		[](int datum)
	{
		std::cout << datum << ",";
	}
	);

	return data;
}