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

void is__();

void is__()
{
	std::vector<score_card> data{
		{"Bob", 2},
		{"Mallory", 1},
		{"Alice", 2},
		{"carol", 0}
	};

	auto comparotor_lamnbda = [](score_card first, score_card second) {return first.score < second.score; };

	std::cout << "before sorting: is_sorted? " << ( std::is_sorted(data.begin(), data.end(), comparotor_lamnbda) ? "Yes\n" : "No\n" );
	
	std::stable_sort(data.begin(), data.end(), comparotor_lamnbda);

	std::cout << "after sorting: is_sorted? " << ( std::is_sorted(data.begin(), data.end(), comparotor_lamnbda) ? "Yes\n" : "No\n" );

}