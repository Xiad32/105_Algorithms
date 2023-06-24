
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


struct score_card {
	std::string name;
	int score;

} ;


void transform_inclusive_scan();

void transform_inclusive_scan()
{
	std::vector<score_card> data{
		{"Bob", 2},
		{"Mallory", 1},
		{"Alice", 2},
		{"carol", 0}
	};

	std::cout << "partal sum: \n";

	std::vector<int> data_partial_sum{};

	//auto accumilate_scores = [](int score_accum, int second) {return score_accum + second; };
	auto transform_score = [] (score_card card) {return card.score; };

	std::transform_inclusive_scan(data.begin(), data.end(), std::back_inserter(data_partial_sum), std::plus{}, transform_score);

	std::for_each(data_partial_sum.begin(), data_partial_sum.end(), [] (int score) {std::cout << score << std::endl;});
}