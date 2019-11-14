#pragma once
#include "Sort.h"

template <typename T>
class InsertionSort : public Sort<T> {
public:
	std::vector<T> sort(std::vector<T> list, SortDirection dir) {
		std::vector<T> result;

		if (list.size() > 0) {
			result.push_back(list.at(0));
			list.erase(list.begin());
		}

		while (list.size() > 0) {
			T val = list.at(0);
			list.erase(list.begin());

			bool inserted = false;
			for (size_t i = 0; i < result.size(); i++) {
				if (dir == SortDirection::DESCENDING) {
					if (val > result.at(i)) {
						result.insert(result.begin() + i, val);
						inserted = true;
						break;
					}
				}
				else if (dir == SortDirection::ASCENDING) {
					if (val < result.at(i)) {
						result.insert(result.begin() + i, val);
						inserted = true;
						break;
					}
				}
			}
			if (inserted == false) {
				result.push_back(val);
			}
		}

		return result;
	}
};

