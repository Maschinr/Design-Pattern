#pragma once

#include <vector>

enum SortDirection {
	ASCENDING,
	DESCENDING
};

template <typename T>
class Sort {
public:
	virtual std::vector<T> sort(std::vector<T> list, SortDirection dir) = 0;
};