
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

void mismatch();

void mismatch()
{
	std::cout << "mismatch: \n";

	std::string data1 { "Smith, John" };

	std::string data2 { "Smith, Jane" };

	auto first_mismatch = std::mismatch(data1.begin(), data1.end(), data2.begin(), data2.end());

	std::cout << "Strings deviate at " << std::distance(data1.begin(), first_mismatch.first) << '\n';
	std::cout << "First string difference: " << std::string(first_mismatch.first, data1.end()) << '\n';
	std::cout << "Second string difference: " << std::string(first_mismatch.second, data2.end()) << '\n';

	auto same_mismatch = std::mismatch(data1.begin(), data1.end(), data1.begin(), data1.end());
	if (same_mismatch.first == data1.end()) {
		std::cout << "Strings match exactly.";
	} 
}