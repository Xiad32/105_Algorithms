/*
 * Algorithm: sort
 * 
 * Example: sort a container
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include "datastructures.hpp"

/*
The teacher decided that the lowest 15% of the scores needs to be 
thoroughly inspected. Given that she already had a vector of float scores,
she deceided to soret the lowest 15% and print them. To accomplish that,
she used partial_sort..
*/

void partial_sort_of_floats();

void partial_sort_of_floats()
{

	auto data = StudentGrades::getFlatScores(GradesGenerator::getScores());
	const auto middle_iter = data.begin() + (int)(data.size() * 0.15) ;
	
	std::partial_sort(
		data.begin(),
		middle_iter,
		data.end());

	std::cout << "Lowest 15% of scores:\n";

	std::for_each(
		data.begin(),
		middle_iter,
		[](float datum)
	{
		std::cout << datum << ",";
	}
	);
}