/*
 * Algorithm: make_heap
 * 
 * Example: make a heap from a vector of ints from 0 to 9
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include "datastructures.hpp"

std::vector<float> push_heap_of_floats(std::vector<float> data);

/*
Algorithm 03/105:
-----------------

The teacher realized that one student scores were omitted
from the data set. She wanted to include these in her analytics.
Having a head already built, she used push_heap to add the scores
while maintaining the heap order.
*/


std::vector<float> push_heap_of_floats(std::vector<float> data)
{

	const StudentGrades john_doe_scores = {
		"John", "Doe",
		{
			{"Math", 65.0f, 100},
			{"Physics", 70.0f, 100},
			{"Chemistry", 80.0f, 100},
			{"Biology", 75.0f, 100},
			{"English", 72.0f, 100}
		}
	};

	const auto scores = StudentGrades::getFlatScores({ john_doe_scores });

	for (const auto score : scores)
	{
		data.push_back(score);
	}
	
	std::push_heap(
		data.begin(),
		data.end());

	std::cout << "Adding John Doe's Scores in the heap:\n";

	std::for_each(
		data.begin(),
		data.end(),
		[](float datum)
	{
		std::cout << datum << ",";
	}
	);

	return data;
}