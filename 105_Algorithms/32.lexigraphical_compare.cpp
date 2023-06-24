
/*
 * Algorithm: sort_heap
 *
 * Example: place the nth element at its right location if the collection
 *          was sorted. Everything before it is less than the nth element (not sorted)
 *          everything after it is more than the nth element (not sorted)
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <execution>
#include <random>

void lexicographical_compare();

void lexicographical_compare()
{
	std::cout << "lexicographical_compare: \n";

	std::string data1 { "Smith, John" };

	std::string data2 { "Smith, Jane" };

	auto result = std::lexicographical_compare(data1.begin(), data1.end(), data2.begin(), data2.end());
	std::cout << data1 << " ";
	if (result) {
		std::cout << "would show up before ";
	} else {
		std::cout << "would show up after ";
	}
	std::cout << data2 << '\n';
}