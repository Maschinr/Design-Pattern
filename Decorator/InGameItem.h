#pragma once
#include "Dresser.h"
#include <memory>

class IngameItem : public Dresser {
	std::shared_ptr<Dresser> person;

protected:
	std::shared_ptr<Dresser> getPerson() {
		return this->person;
	}

public:
	IngameItem(std::shared_ptr<Dresser> person) {
		this->person = person;
	}
};