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

void sort_heap_of_ints(std::vector<int> data);

void sort_heap_of_ints(std::vector<int> data)
{
	std::sort_heap(
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
}