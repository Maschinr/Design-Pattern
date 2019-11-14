#pragma once

#include "Sort.h"

template <typename T>
class SelectionSort : public Sort<T> {
public:
	std::vector<T> sort(std::vector<T> list, SortDirection dir) {
		std::vector<T> result;

		while (list.size() > 0) {
			T val = list.at(0);
			size_t valPos = 0;
			for (size_t i = 0; i < list.size(); i++) {
				if (dir == SortDirection::ASCENDING) {
					if (list.at(i) < val) {
						val = list.at(i);
						valPos = i;
					}
				}
				else if (dir == SortDirection::DESCENDING) {
					if (list.at(i) > val) {
						val = list.at(i);
						valPos = i;
					}
				}
			}
			result.push_back(val);
			list.erase(list.begin() + valPos);
		}

		return result;
	}
};

