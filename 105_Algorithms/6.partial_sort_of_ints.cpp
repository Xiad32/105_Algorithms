/*
 * Algorithm: sort
 * 
 * Example: sort a container
 */

#include <iostream>
#include <algorithm>
#include <vector>

void partial_sort_of_ints(std::vector<int> data);

void partial_sort_of_ints(std::vector<int> data)
{
	const auto middle_iter = data.begin() + 4;
	
	std::partial_sort(
		data.begin(),
		middle_iter,
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