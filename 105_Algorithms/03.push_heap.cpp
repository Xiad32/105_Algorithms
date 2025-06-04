/*
 * Algorithm: make_heap
 * 
 * Example: make a heap from a vector of ints from 0 to 9
 */

#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> push_heap_of_ints(std::vector<int> data);

std::vector<int> push_heap_of_ints(std::vector<int> data)
{
	data.push_back(8);
	
	std::push_heap(
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