// 105_Algorithms.cpp : Defines the entry point for the application.
//

#include "105_Algorithms.h"

extern void for_each_print();
extern std::vector<float> make_heap_from_floats();
extern std::vector<float> push_heap_of_floats(std::vector<float> data);
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
	int algo_number = 01;

	std::cout << "Province of Heaps:\n==================\n";
	
	std::cout << algo_number++ <<". for_each:\n"; 
	for_each_print();
	std::cout << std::endl;

	std::cout << algo_number++ <<". make_heap:\n";
	auto data = make_heap_from_floats();
	std::cout << std::endl;

	std::cout << algo_number++ <<". push_heap:\n";
	data = push_heap_of_floats(data);
	std::cout << std::endl;

	//std::cout << algo_number++ <<". pop_heap:\n";
	//auto res = pop_from_ints_heap(data);
	//data = res.first;

	//std::cout << "\nShore of Sorting:\n=================\n";

	//std::cout << algo_number++ << ". sort\n";
	//sort_of_ints(data);
	//std::cout << std::endl;

	//std::cout << algo_number++ << ". partial_sort\n";
	//partial_sort_of_ints(data);
	//std::cout << std::endl;

	//std::cout << algo_number++ << ". nth_element\n";
	//nth_element_of_ints(data, 4);
	//std::cout << std::endl;
	//
	//std::cout << algo_number++ << ". sort_heap\n";
	//sort_heap_of_ints(data);
	//std::cout << std::endl;

	std::cout << algo_number++ <<". inplace_merge\n";
	inplace_merge_of_ints();
	std::cout << std::endl;

	std::cout << "Region of partitioning:\n======================\n";

	std::cout << algo_number++ <<". partition_point\n";
	partition_point_of_ints();
	std::cout << std::endl;

	std::cout << "Land of Permutations:\n====================\n";

	std::cout << algo_number++ <<". rotate\n";
	rotate_int();
	std::cout << std::endl;

	std::cout << algo_number++ <<". shuffle\n";
	shuffle_int();
	std::cout << std::endl;

	std::cout << algo_number++ <<"."<<algo_number++<<". next_perm, prev_perm \n";
	next_prev_permutation();
	std::cout << std::endl;

	std::cout << algo_number++ <<". reverse\n";
	reverse_alphabet();
	std::cout << std::endl;

	std::cout << "Secret Runes:\n============\n";

	std::cout << "16. stable_*\n";
	stable__int();
	std::cout << std::endl;

	std::cout << algo_number++ <<". is_*\n";
	is__();
	std::cout << std::endl;

	std::cout << algo_number++ <<". is_*_until\n";
	is__until();;
	std::cout << std::endl;

	std::cout << "Land of Queries:\n===============\n";

	//std::cout << counter++ <<". count\n";
	//count_by_score();;
	//std::cout << std::endl;

	std::cout << algo_number++ <<". accumilate\n";
	accumilate_score();
	std::cout << std::endl;

	std::cout << algo_number++ <<". partial_sum\n";
	partial_sum_score();
	std::cout << std::endl;

	std::cout << algo_number++ <<". accumilate\n";
	accumilate_score();
	std::cout << std::endl;

	std::cout << algo_number++ <<". transform_exclusive_scan\n";
	transform_exclusive_scan();
	std::cout << std::endl;

	std::cout << algo_number++ <<". discounted_sum\n";
	discounted_total();
	std::cout << std::endl;

	std::cout << algo_number++ <<". adjacent_difference\n";
	adjacent_difference();
	std::cout << std::endl;

	std::cout << algo_number++ <<". sample\n";
	sample();
	std::cout << std::endl;
	
	std::cout << algo_number++ <<". all_of\n";
	all_of();
	std::cout << std::endl;

	std::cout << algo_number++ <<". any_of\n";
	any_of();
	std::cout << std::endl;

	std::cout << algo_number++ <<". none_of\n";
	none_of();
	std::cout << std::endl;

	std::cout << algo_number++ <<". equal\n";
	equal();
	std::cout << std::endl;

	std::cout << algo_number++ <<". is_permuatation\n";
	is_permutation();
	std::cout << std::endl;

	std::cout << algo_number++ <<". lexicographical_compare\n";
	lexicographical_compare();
	std::cout << std::endl;

	std::cout << algo_number++ <<". mismatch\n";
	mismatch();
	std::cout << std::endl;

	std::cout << algo_number++ <<". find\n";
	find();
	std::cout << std::endl;

	std::cout << algo_number++ <<". adjacent_find\n";
	adjacent_find();
	std::cout << std::endl;

	std::cout << algo_number++ <<". equal_range\n";
	equal_range();
	std::cout << std::endl;

	std::cout << algo_number++ <<". search\n";
	search();
	std::cout << std::endl;

	std::cout << algo_number++ <<". find_end\n";
	find_end();
	std::cout << std::endl;

	std::cout << algo_number++ <<". find_first_of\n";
	find_first_of();
	std::cout << std::endl;

	std::cout << algo_number++ <<". max_element\n";
	max_element();
	std::cout << std::endl;

	std::cout << algo_number++ <<". min_element\n";
	min_element();
	std::cout << std::endl;

	std::cout << algo_number++ <<". max_min_element\n";
	max_min_element();
	std::cout << std::endl;


	return 0;
}
