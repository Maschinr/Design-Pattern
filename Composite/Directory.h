#pragma once
#include "Element.h"
#include <forward_list>
#include <string>
#include <memory>

class Directory : public Element {
	std::forward_list<std::shared_ptr<Element>> children;
public:
	Directory(std::string name) : Element(name) {}

	void addElement(std::shared_ptr<Element> element) {
		this->children.push_front(element);
	}

	void removeElement(std::shared_ptr<Element> element) {
		this->children.remove_if([element](const std::shared_ptr<Element>& value){
			return element == value;
		});
	}

	virtual double getMemorySize() override {
		double result = 0.0;
		for (auto f : this->children) {
			result += f->getMemorySize();
		}
		return result;
	}
};

