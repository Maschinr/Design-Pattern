#pragma once
#include "InGameItem.h"
#include <stdio.h>

class Basecap : public IngameItem {
public:
	Basecap(std::shared_ptr<Dresser> person) : IngameItem(person) {}
	virtual void dressUp() {
		printf("Basecap put on\n");
		this->getPerson()->dressUp();
	}
};