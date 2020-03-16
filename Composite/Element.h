#pragma once
#include <string>
#include <memory>
class Element {
	std::string name;
	std::shared_ptr<Element> parent;
public:
	Element(std::string name) {
		name = name;
		parent = nullptr;
	}

	std::string getName() {
		return this->name;
	}

	void setName(std::string name) {
		this->name = name;
	}

	std::shared_ptr<Element> getParent() {
		return this->parent;
	}

	void setParent(std::shared_ptr<Element> parent) {
		this->parent = parent;
	}

	virtual double getMemorySize() = 0;
};

