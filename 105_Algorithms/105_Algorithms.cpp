// 105_Algorithms.cpp : Defines the entry point for the application.
//

#include "105_Algorithms.h"

extern void for_each_print();
extern std::vector<int> make_heap_from_doubles();
extern std::vector<int> push_heap_of_doubles(std::vector<int> data);

int main()
{
	std::cout << "1. for_each:\n"; 
	for_each_print();

	std::cout << "2. make_heap:\n";
	auto data = make_heap_from_doubles();

	std::cout << "3. push_heap:\n";
	data = push_heap_of_doubles(data);
	
	return 0;
}
