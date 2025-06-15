/*
 * Algorithm: make_heap
 * 
 * Example: make a heap from a vector of ints from 0 to 9
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include "datastructures.hpp"

std::vector<float> make_heap_from_floats();

/*
Algorithm 02/105:
-----------------

The teacher was interested in using a heap for her analysis.
In order build a heap data structure (in the form of a std::vectore),
shes used make_heap to order the scores in a heap structure.
But first, she needed to get all socres for the all the students,
from all the courses. Luckily, that was provided using
SudentGrades::getFlatScores()
*/

std::vector<float> make_heap_from_floats()
{
	const auto data = GradesGenerator::getScores();
	auto scores = StudentGrades::getFlatScores(data);

	std::make_heap(
		scores.begin(),
		scores.end());

	std::cout << "Data in heap format:\n";

	std::for_each(
		scores.begin(),
		scores.end(),
		[](float datum)
	{
		std::cout << datum << ",";
	}
	);

	return scores;
}