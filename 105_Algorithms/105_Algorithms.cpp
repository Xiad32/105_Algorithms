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
extern void partition_point_of_ints();
extern void rotate_int();
extern void shuffle_int();
extern void next_prev_permutation();
extern void reverse_alphabet();
extern void stable__int();
extern void is__();
extern void is__until();

int main()
{
	std::cout << "Province of Heaps:\n==================\n";
	
	std::cout << "01. for_each:\n"; 
	for_each_print();
	std::cout << std::endl;

	std::cout << "02. make_heap:\n";
	auto data = make_heap_from_ints();
	std::cout << std::endl;

	std::cout << "03. push_heap:\n";
	data = push_heap_of_ints(data);
	std::cout << std::endl;

	std::cout << "04. pop_heap:\n";
	int max;
	auto res = pop_from_ints_heap(data);
	data = res.first;

	std::cout << "\nShore of Sorting:\n=================\n";

	std::cout << "05. sort\n";
	sort_of_ints(data);
	std::cout << std::endl;

	std::cout << "06. partial_sort\n";
	partial_sort_of_ints(data);
	std::cout << std::endl;

	std::cout << "07. nth_element\n";
	nth_element_of_ints(data, 4);
	std::cout << std::endl;
	
	std::cout << "08. sort_heap\n";
	sort_heap_of_ints(data);
	std::cout << std::endl;

	std::cout << "09. inplace_merge\n";
	inplace_merge_of_ints();
	std::cout << std::endl;

	std::cout << "Region of partitioning:\n======================\n";

	std::cout << "10. partition_point\n";
	partition_point_of_ints();
	std::cout << std::endl;

	std::cout << "Land of Permutations:\n====================\n";

	std::cout << "11. rotate\n";
	rotate_int();
	std::cout << std::endl;

	std::cout << "12. shuffle\n";
	shuffle_int();
	std::cout << std::endl;

	std::cout << "13./14. next_perm, prev_perm \n";
	next_prev_permutation();
	std::cout << std::endl;

	std::cout << "15. reverse\n";
	reverse_alphabet();
	std::cout << std::endl;

	std::cout << "Secret Runes:\n============\n";

	std::cout << "16. stable_*\n";
	stable__int();
	std::cout << std::endl;

	std::cout << "17. is_*\n";
	is__();
	std::cout << std::endl;

	std::cout << "18. is_*_until\n";
	is__until();;
	std::cout << std::endl;

	return 0;
}
