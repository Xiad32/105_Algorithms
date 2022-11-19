// 105_Algorithms.cpp : Defines the entry point for the application.
//

#include "105_Algorithms.h"

extern void for_each_print();
extern std::vector<int> make_heap_from_ints();
extern std::vector<int> push_heap_of_ints(std::vector<int> data);
extern std::pair<std::vector<int>, int> pop_from_ints_heap(std::vector<int> data);
extern void sort_of_ints(std::vector<int> data);
extern void partial_sort_of_ints(std::vector<int> data);
extern void nth_element_of_ints(std::vector<int> data, int nth_position);
extern void sort_heap_of_ints(std::vector<int> data);
extern void inplace_merge_of_ints();

int main()
{
	std::cout << "Province of Heaps:\n==================\n";
	
	std::cout << "1. for_each:\n"; 
	for_each_print();
	std::cout << std::endl;

	std::cout << "2. make_heap:\n";
	auto data = make_heap_from_ints();
	std::cout << std::endl;

	std::cout << "3. push_heap:\n";
	data = push_heap_of_ints(data);
	std::cout << std::endl;

	std::cout << "4. pop_heap:\n";
	int max;
	auto res = pop_from_ints_heap(data);
	data = res.first;

	std::cout << "Shore of Sorting:\n=================\n";

	std::cout << "5. sort\n";
	sort_of_ints(data);
	std::cout << std::endl;

	std::cout << "6. partial_sort\n";
	partial_sort_of_ints(data);
	std::cout << std::endl;

	std::cout << "7. nth_element\n";
	nth_element_of_ints(data, 4);
	std::cout << std::endl;
	
	std::cout << "8. sort_heap\n";
	sort_heap_of_ints(data);
	std::cout << std::endl;

	std::cout << "9. inplace_merge\n";
	inplace_merge_of_ints();
	std::cout << std::endl;

	return 0;
}
