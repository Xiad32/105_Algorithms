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

void reverse_alphabet();

void reverse_alphabet()
{
	std::vector<char> data{};
	for (unsigned char i = 'a'; i < 'z' + 1; i++)
		data.push_back(i);

	// This algorithm requires a seed since it's permutations are random
	std::reverse(data.begin(), data.end());

	std::for_each(
		data.begin(),
		data.end(),
		[](char datum)
		{
			std::cout << datum << ",";
		}
	);


}