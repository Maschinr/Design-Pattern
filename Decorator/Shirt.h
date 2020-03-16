#pragma once
#include "InGameItem.h"
#include <stdio.h>

class Shirt : public IngameItem {
public:
	Shirt(std::shared_ptr<Dresser> person) : IngameItem(person) {}
	virtual void dressUp() {
		printf("Shirt put on\n");
		this->getPerson()->dressUp();
	}
};