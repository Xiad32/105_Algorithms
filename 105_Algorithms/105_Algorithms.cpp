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
extern void count_by_score();
extern void accumilate_score();
extern void partial_sum_score();
extern void transform_exclusive_scan();
extern void discounted_total();
extern void adjacent_difference();
extern void sample();
extern void any_of();
extern void none_of();
extern void all_of();
extern void equal();
extern void is_permutation();
extern void lexicographical_compare();
extern void mismatch();
extern void find();
extern void adjacent_find();
extern void equal_range();
extern void search();
extern void find_end();
extern void find_first_of();
extern void max_element();
extern void min_element();
extern void max_min_element();


int main()
{
	int counter = 01;

	std::cout << "Province of Heaps:\n==================\n";
	
	std::cout << counter++ <<". for_each:\n"; 
	for_each_print();
	std::cout << std::endl;

	std::cout << counter++ <<". make_heap:\n";
	auto data = make_heap_from_ints();
	std::cout << std::endl;

	std::cout << counter++ <<". push_heap:\n";
	data = push_heap_of_ints(data);
	std::cout << std::endl;

	std::cout << counter++ <<". pop_heap:\n";
	auto res = pop_from_ints_heap(data);
	data = res.first;

	std::cout << "\nShore of Sorting:\n=================\n";

	std::cout << counter++ << ". sort\n";
	sort_of_ints(data);
	std::cout << std::endl;

	std::cout << counter++ << ". partial_sort\n";
	partial_sort_of_ints(data);
	std::cout << std::endl;

	std::cout << counter++ << ". nth_element\n";
	nth_element_of_ints(data, 4);
	std::cout << std::endl;
	
	std::cout << counter++ << ". sort_heap\n";
	sort_heap_of_ints(data);
	std::cout << std::endl;

	std::cout << counter++ <<". inplace_merge\n";
	inplace_merge_of_ints();
	std::cout << std::endl;

	std::cout << "Region of partitioning:\n======================\n";

	std::cout << counter++ <<". partition_point\n";
	partition_point_of_ints();
	std::cout << std::endl;

	std::cout << "Land of Permutations:\n====================\n";

	std::cout << counter++ <<". rotate\n";
	rotate_int();
	std::cout << std::endl;

	std::cout << counter++ <<". shuffle\n";
	shuffle_int();
	std::cout << std::endl;

	std::cout << counter++ <<"."<<counter++<<". next_perm, prev_perm \n";
	next_prev_permutation();
	std::cout << std::endl;

	std::cout << counter++ <<". reverse\n";
	reverse_alphabet();
	std::cout << std::endl;

	std::cout << "Secret Runes:\n============\n";

	std::cout << "16. stable_*\n";
	stable__int();
	std::cout << std::endl;

	std::cout << counter++ <<". is_*\n";
	is__();
	std::cout << std::endl;

	std::cout << counter++ <<". is_*_until\n";
	is__until();;
	std::cout << std::endl;

	std::cout << "Land of Queries:\n===============\n";

	//std::cout << counter++ <<". count\n";
	//count_by_score();;
	//std::cout << std::endl;

	std::cout << counter++ <<". accumilate\n";
	accumilate_score();
	std::cout << std::endl;

	std::cout << counter++ <<". partial_sum\n";
	partial_sum_score();
	std::cout << std::endl;

	std::cout << counter++ <<". accumilate\n";
	accumilate_score();
	std::cout << std::endl;

	std::cout << counter++ <<". transform_exclusive_scan\n";
	transform_exclusive_scan();
	std::cout << std::endl;

	std::cout << counter++ <<". discounted_sum\n";
	discounted_total();
	std::cout << std::endl;

	std::cout << counter++ <<". adjacent_difference\n";
	adjacent_difference();
	std::cout << std::endl;

	std::cout << counter++ <<". sample\n";
	sample();
	std::cout << std::endl;
	
	std::cout << counter++ <<". all_of\n";
	all_of();
	std::cout << std::endl;

	std::cout << counter++ <<". any_of\n";
	any_of();
	std::cout << std::endl;

	std::cout << counter++ <<". none_of\n";
	none_of();
	std::cout << std::endl;

	std::cout << counter++ <<". equal\n";
	equal();
	std::cout << std::endl;

	std::cout << counter++ <<". is_permuatation\n";
	is_permutation();
	std::cout << std::endl;

	std::cout << counter++ <<". lexicographical_compare\n";
	lexicographical_compare();
	std::cout << std::endl;

	std::cout << counter++ <<". mismatch\n";
	mismatch();
	std::cout << std::endl;

	std::cout << counter++ <<". find\n";
	find();
	std::cout << std::endl;

	std::cout << counter++ <<". adjacent_find\n";
	adjacent_find();
	std::cout << std::endl;

	std::cout << counter++ <<". equal_range\n";
	equal_range();
	std::cout << std::endl;

	std::cout << counter++ <<". search\n";
	search();
	std::cout << std::endl;

	std::cout << counter++ <<". find_end\n";
	find_end();
	std::cout << std::endl;

	std::cout << counter++ <<". find_first_of\n";
	find_first_of();
	std::cout << std::endl;

	std::cout << counter++ <<". max_element\n";
	max_element();
	std::cout << std::endl;

	std::cout << counter++ <<". min_element\n";
	min_element();
	std::cout << std::endl;

	std::cout << counter++ <<". max_min_element\n";
	max_min_element();
	std::cout << std::endl;


	return 0;
}
