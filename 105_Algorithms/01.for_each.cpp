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

void for_each_print()
{
	const auto data = GradesGenerator::getScores();

	std::for_each(
		std::begin(data),
		std::end(data),
		[](auto datum) { datum.print();}
		);
}