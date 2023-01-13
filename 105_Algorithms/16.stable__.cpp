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

typedef struct {
	std::string name;
	int score;
} score_card;

void stable__int();

void stable__int()
{
	std::vector<score_card> data{
		{"Bob", 2},
		{"Mallory", 1},
		{"Alice", 2},
		{"carol", 0}
	};
	
	// This algorithm sorts the elements by the score element of the struct
	// Notice that Bob's score is equal to Alice's but since Bob came fisrt
	// the stable version of the algorithm ensures it shows first in the sorted
	// vectore
	auto comparotor_lamnbda = [](score_card first, score_card second) {return first.score < second.score;};
	std::stable_sort(data.begin(), data.end(), comparotor_lamnbda);

	std::for_each(
		data.begin(),
		data.end(),
		[](score_card datum)
		{
			std::cout << datum.name << ":" << datum.score << ",";
		}
	);


}