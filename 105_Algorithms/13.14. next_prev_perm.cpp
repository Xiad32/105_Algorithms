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

void next_prev_permutation();

void next_prev_permutation()
{
	std::vector<std::string> data{
		"00", "01", "10", "11"
	};

	// Next Perm
	for (unsigned int i = 0; i < 24; i++) {
		std::next_permutation(data.begin(), data.end());

		std::for_each(
			data.begin(),
			data.end(),
			[](std::string datum)
			{
				std::cout << datum << ",";
			}
		);
	std::cout << "\n";
	}

	std::cout << "\n";

	// Going backwards: prev_permutation
	for (unsigned int i = 0; i < 24; i++) {
		std::prev_permutation(data.begin(), data.end());

		std::for_each(
			data.begin(),
			data.end(),
			[](std::string datum)
			{
				std::cout << datum << ",";
			}
		);
		std::cout << "\n";
	}

}