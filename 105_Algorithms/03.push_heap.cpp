/*
 * Algorithm: make_heap
 * 
 * Example: make a heap from a vector of ints from 0 to 9
 */

#include <iostream>
#include <algorithm>
#include <vector>

std::vector<float> push_heap_of_floats(std::vector<float> data);

std::vector<float> push_heap_of_floats(std::vector<float> data)
{
	data.push_back(8);
	
	std::push_heap(
		data.begin(),
		data.end());

	std::for_each(
		data.begin(),
		data.end(),
		[](float datum)
	{
		std::cout << datum << ",";
	}
	);

	return data;
}