#pragma once
#include "Sort.h"

template <typename T>
class BubbleSort : public Sort<T> {
public:
	std::vector<T> sort(std::vector<T> list, SortDirection dir) {
		size_t unsortedArea = list.size();

		while (unsortedArea > 0) {

			for (size_t i = 0; i + 1 < unsortedArea; i++) {
				if (dir == SortDirection::DESCENDING) {
					if (list.at(i) < list.at(i + 1)) {
						std::iter_swap(list.begin() + i, list.begin() + i + 1);
					}
				}
				else if (dir == SortDirection::ASCENDING) {
					if (list.at(i) > list.at(i + 1)) {
						std::iter_swap(list.begin() + i, list.begin() + i + 1);
					}
				}
			}
			unsortedArea--;
		}

		return list;
	}
};

