#pragma once
#include "InGameItem.h"
#include <stdio.h>

class Shoe : public IngameItem {
public:
	Shoe(std::shared_ptr<Dresser> person) : IngameItem(person) {}
	virtual void dressUp() {
		printf("Shoes put on\n");
		this->getPerson()->dressUp();
	}
};