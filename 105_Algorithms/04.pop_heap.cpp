/*
 * Algorithm: make_heap
 * 
 * Example: removes the heap max value and reorganizes the rest of the heap
 */

#include <iostream>
#include <algorithm>
#include <vector>

std::pair<std::vector<float>, float> pop_from_floats_heap(std::vector<float> data);

/*
Algorithm 04/105:
-----------------

The teacher wanted to remove, what she preceived as, an outlier. The highest score
of all the exams froms all the score of all students of all courses.
Having already built a heap, she uses pop_heap to accomplish this.

*/

std::pair<std::vector<float>, float> pop_from_floats_heap(std::vector<float> data)
{
	
	std::pop_heap(
		data.begin(),
		data.end());

	std::cout << "Removing the highest score from the heap:\n";

	std::for_each(
		data.begin(),
		data.end(),
		[](float datum)
	{
		std::cout << datum << ",";
	}
	);

	auto max = data.back();

	data.pop_back();

	return std::pair<std::vector<float>, float> {data, max};
}