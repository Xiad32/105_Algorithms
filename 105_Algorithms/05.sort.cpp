/*
 * Algorithm: sort
 * 
 * Example: sort a container
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include "datastructures.hpp"

void sort_of_floats(std::vector<float> data);

/*
Algorithm 05/105:
-----------------

The teacher wanted to perform a different analyis. She needed the flat
scores list ordered ascendingly. 
For this, she gave up on the heap structure and ran a sort algorithm
on the data structure to sort in ascendingly
*/

void sort_of_floats(std::vector<float> data)
{

	std::sort(
		data.begin(),
		data.end());

	std::cout << "All scores sorted:\n";

	std::for_each(
		data.begin(),
		data.end(),
		[](float datum)
	{
		std::cout << datum << ",";
	}
	);
}