#pragma once
#include "Element.h"
#include <string>

class File : public Element {
	double memory_size;
public:
	File(std::string name, double memory_size) : Element(name) {
		this->setMemorySize(memory_size);
	}

	void setMemorySize(double memory_size) {
		this->memory_size = memory_size;
	}

	virtual double getMemorySize() override {
		return this->memory_size;
	}
};

