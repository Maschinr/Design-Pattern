#include <stdio.h>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "QuickSort.h"


int main() {
	SelectionSort<float> s;
	std::vector<float> test{
		10.0f,
		12.0f,
		1.0f,
		1.3f
	};

	auto res = s.sort(test, SortDirection::DESCENDING);

	for (size_t i = 0; i < res.size(); i++) {
		printf("%i: %f\n", i, res.at(i));
	}

	return 0;
}