/*
 * Algorithm: sort
 * 
 * Example: sort a container
 */

#include <iostream>
#include <algorithm>
#include <vector>

void sort_of_ints(std::vector<int> data);

void sort_of_ints(std::vector<int> data)
{
	
	std::sort(
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