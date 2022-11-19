/*
 * Algorithm: for_each
 * https://en.cppreference.com/w/cpp/algorithm/for_each
 * Example: print all elements.
 */

void for_each_print();

#include <iostream>
#include <vector>
#include <algorithm>

struct Custom_struct
{
	std::string name;
	int value;

	void print()
	{
		std::cout << "Name: " << this->name << " ,Value: " << this->value << "\n";
	}
};

void for_each_print()
{
	// Data:
	std::vector<Custom_struct> data {
		{"Alice", 10},
		{"Bob", 20},
		{"Carol", 30},
		{"Dave", 40},
		{"Eve", 50}
	};

	std::for_each(
		std::begin(data),
		std::end(data),
		[](Custom_struct datum) { datum.print();}
		);
}