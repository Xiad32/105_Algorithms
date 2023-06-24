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

struct product {
	std::string name;
	float price;

	float operator * (float discount) { return this->price * discount;}
};
void discounted_total();

void discounted_total()
{
	std::vector<product> products{
		{"Milk", 2},
		{"Cheese", 2},
		{"Water", 1},
		{"Coffee", 0.5}
	};

	std::vector<float> discount{
		1,
		0.5,
		0.25,
		0.125
	};


	std::cout << "Total cost after dicount: " << std::inner_product(products.begin(), products.end(), 
		discount.begin(), 0, std::plus(), std::multiplies()) << "\n";

}	