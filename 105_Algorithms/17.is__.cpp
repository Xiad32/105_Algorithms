/*
 * Algorithm: sort_heap
 *
 * Example: place the nth element at its right location if the collection
 *          was sorted. Everything before it is less than the nth element (not sorted)
 *          everything after it is more than the nth element (not sorted)
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

typedef struct {
	std::string name;
	int score;
} score_card;

void is__until();

void is__until()
{
	std::vector<score_card> data{
		{"Bob", 1},
		{"Mallory", 1},
		{"Alice", 2},
		{"carol", 0}
	};

	auto comparotor_lamnbda = [](score_card first, score_card second) {return first.score < second.score; };

	auto sorted_until = std::is_sorted_until(data.begin(), data.end(), comparotor_lamnbda);
	std::cout << "before sorting: is_sorted_until? " << (sorted_until != data.end() ?
		(*sorted_until).name + ":" + std::to_string((*sorted_until).score) + "\n" : "All the way\n");
	
	std::stable_sort(data.begin(), data.end(), comparotor_lamnbda);

	sorted_until = std::is_sorted_until(data.begin(), data.end(), comparotor_lamnbda);
	std::cout << "after sorting: is_sorted_until? " << (sorted_until != data.end() ?
		(*sorted_until).name + ":" + std::to_string((*sorted_until).score) + "\n" : "All the way\n");
}