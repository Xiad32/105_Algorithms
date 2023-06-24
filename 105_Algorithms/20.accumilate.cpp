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
#include <utility>
#include <execution>


typedef struct product {
	std::string name;
	int score;

	int operator+(const int score) const
	{
		return this->score + score;
	}

	int operator+(const product second) const
	{
		return this->score + second.score;
	}

} score_card;

int operator+(const int acc, const product second) {
	return second.score + acc;
}


void accumilate_score();

void accumilate_score()
{
	std::vector<product> data{
		{"Bob", 2},
		{"Mallory", 1},
		{"Alice", 2},
		{"carol", 0}
	};

	std::cout << "average score is: " << (double)std::accumulate(data.begin(), data.end(), 0) / (double)data.size() << "\n";

	std::cout << "average score (using reduce) is: " << (double)std::reduce(data.begin(), data.end(), 0) / (double)data.size() << "\n";

	auto get_score = [](product element) { return element.score; };
	std::cout << "average score (using transform_reduce) is: " << (double)std::transform_reduce(data.begin(), data.end(), 0, std::plus(), get_score) / (double)data.size() << "\n";

}
