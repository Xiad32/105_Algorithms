/*
 * Algorithm: nth_element
 * 
 * Example: place the nth element at its right location if the collection
 *          was sorted. Everything before it is less than the nth element (not sorted)
 *          everything after it is more than the nth element (not sorted)
 */

#include <iostream>
#include <algorithm>
#include <vector>

void nth_element_of_ints(std::vector<int> data, int nth_position);

void nth_element_of_ints(std::vector<int> data, int nth_position)
{
	const auto middle_iter = data.begin() + nth_position;
	
	std::nth_element(
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