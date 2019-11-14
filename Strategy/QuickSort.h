#pragma once
#include "Sort.h"

template <typename T>
class QuickSort : public Sort<T> {
public:
	std::vector<T> sort(std::vector<T> list, SortDirection dir) {
		std::vector<T> result;

		if (list.size() > 1) {
			T val = list.at(0);

			std::vector<T> list_1;
			std::vector<T> list_2;

			for (size_t i = 1; i < list.size(); i++) {
				if (dir == SortDirection::ASCENDING) {
					if (list.at(i) > val) {
						list_1.push_back(list.at(i));
					}
					else if (list.at(i) <= val) {
						list_2.push_back(list.at(i));
					}
				}
				else if (dir == SortDirection::DESCENDING) {
					if (list.at(i) <= val) {
						list_1.push_back(list.at(i));
					}
					else if (list.at(i) > val) {
						list_2.push_back(list.at(i));
					}
				}
			}

			auto list_2Sorted = this->sort(list_2, dir);
			auto list_1Sorted = this->sort(list_1, dir);

			result = list_2Sorted;
			result.push_back(val);
			result.insert(result.end(), list_1Sorted.begin(), list_1Sorted.end());
		}
		else {
			result = list;
		}

		return result;
	}
};

