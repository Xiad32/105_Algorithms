/*
 * Algorithm: make_heap
 * 
 * Example: removes the heap max value and reorganizes the rest of the heap
 */

#include <iostream>
#include <algorithm>
#include <vector>

std::pair<std::vector<int>, int> pop_from_ints_heap(std::vector<int> data);

std::pair<std::vector<int>, int> pop_from_ints_heap(std::vector<int> data)
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

	return std::pair<std::vector<int>, int> {data, max};
}