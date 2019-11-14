#pragma once
#include "Zustand.h"
class Zustand;

class Spielfigur {
public:
	std::shared_ptr<Zustand> getZustand() { return this->zustand; }
	void setZustand(std::shared_ptr<Zustand> zustand) { this->zustand = zustand; }
	void heilen() {
		this->zustand->heilen();
	};

	void verletzenLeicht() {
		this->zustand->verletzenLeicht();
	};

	void verletzenSchwer() {
		this->zustand->verletzenSchwer();
	};
private:
	std::shared_ptr<Zustand> zustand;
};