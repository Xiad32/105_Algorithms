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

void partition_point_of_ints();

void partition_point_of_ints()
{
	std::vector<int> data {
		0, 2, 4, 5, 6, 1, 3, 5, 7
	};

	auto less_than_4 = [](int i) {return i < 4;};

	// Required fir partition_point
	std::partition(data.begin(), data.end(), less_than_4);
	
	const auto partition_pnt =  std::partition_point(
		data.begin(),
		data.end(),
		less_than_4);

	std::for_each(
		data.begin(),
		data.end(),
		[](int datum)
	{
		std::cout << datum << ",";
	}
	);
	std::cout << "\nPartition is at " << std::distance(data.begin(), partition_pnt) << "\n";
}