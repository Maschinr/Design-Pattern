#pragma once
#include "InGameItem.h"
#include <stdio.h>

class Pants : public IngameItem {
public:
	Pants(std::shared_ptr<Dresser> person) : IngameItem(person) {}
	virtual void dressUp() {
		printf("Pants put on\n");
		this->getPerson()->dressUp();
	}
};