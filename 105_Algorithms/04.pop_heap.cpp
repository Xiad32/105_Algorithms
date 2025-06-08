/*
 * Algorithm: make_heap
 * 
 * Example: removes the heap max value and reorganizes the rest of the heap
 */

#include <iostream>
#include <algorithm>
#include <vector>

std::pair<std::vector<float>, float> pop_from_floats_heap(std::vector<float> data);

std::pair<std::vector<float>, float> pop_from_floats_heap(std::vector<float> data)
{
	
	std::pop_heap(
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

	auto max = data.back();

	data.pop_back();

	return std::pair<std::vector<float>, float> {data, max};
}