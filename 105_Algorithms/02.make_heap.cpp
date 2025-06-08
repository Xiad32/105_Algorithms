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

std::vector<float> make_heap_from_floats()
{
	const auto data = GradesGenerator::getScores();
	auto scores = StudentGrades::getFlatScores(data);

	std::make_heap(
		scores.begin(),
		scores.end());

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