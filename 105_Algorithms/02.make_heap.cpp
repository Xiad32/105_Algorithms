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
	std::vector<float> scores{};
	const auto data = GradesGenerator::getScores();

	std::for_each(
		data.begin(),
		data.end(),
		[&scores](const StudentGrades student)
		{
			std::for_each(student.scores.begin(),
				student.scores.end(),
				[&scores](const CourseStudentScore course_grade) {
					course_grade.print();
					std::cout << "Score: " << course_grade.score << std::endl;
					scores.push_back(course_grade.score);
				});
		}
	);


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