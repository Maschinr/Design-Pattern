#pragma once
#include "Spielfigur.h"
#include <memory>

class Zustand {
public:
	Zustand(std::shared_ptr<Spielfigur> spielfigur) {
		this->spielfigur = spielfigur;
	}
	virtual void heilen() = 0;
	virtual void verletzenLeicht() = 0;
	virtual void verletzenSchwer() = 0;
	 
protected:
	std::shared_ptr<Spielfigur> spielfigur;
};