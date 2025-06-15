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
#include "datastructures.hpp"

void nth_element_of_floats();

/*
The teacher decided that the lowest 10 scores will be given an F score.
She wanted to find the 10th lowest score to be able to determine the pass threshold
*/

void nth_element_of_floats()
{
	const int nth_position = 10;
	auto data = StudentGrades::getFlatScores(GradesGenerator::getScores());
	const auto middle_iter = data.begin() + nth_position;
	
	std::nth_element(
		data.begin(),
		middle_iter,
		data.end());

	std::cout << "Failing Scores:\n";

	std::for_each(
		data.begin(),
		middle_iter,
		[](float datum)
	{
		std::cout << datum << ",";
	}
	);
}