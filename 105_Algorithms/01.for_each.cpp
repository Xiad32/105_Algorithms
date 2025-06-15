/*
 * Algorithm: for_each
 * https://en.cppreference.com/w/cpp/algorithm/for_each
 * Example: print all elements.
 */

void for_each_print();

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "datastructures.hpp"


/*
A Teacher wanted to do analytical analysis on the scores of students on tests from
different exams from different courses.
The data she received was in the form of an array (std::vector) of StudentGrades
The function GradesGenerator::getScores() is the data provider.

Algorithm 01/105:
-----------------

In order to get started, the teacher wanted to print all the scores to confirm
that the data is correct. For this task she used for_each to iterate overall
SudentGrades objects and run the print() funciton.

*/

void for_each_print()
{
	const auto data = GradesGenerator::getScores();

	std::cout << "All Data:\n";

	std::for_each(
		std::begin(data),
		std::end(data),
		[](auto datum) { datum.print();}
		);
}