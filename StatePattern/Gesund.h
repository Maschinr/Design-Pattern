#pragma once
#include "Zustand.h"

class Gesund : public Zustand {
public: 
	Gesund(std::shared_ptr<Spielfigur> spielfigur) : Zustand(spielfigur) {}
	virtual void heilen() override {
		
	};

	virtual void verletzenLeicht() override {
		this->spielfigur->setZustand(std::make_shared<Verwundet>());
	};

	virtual void verletzenSchwer() override {
		this->spielfigur->setZustand(std::make_shared<Bewegungsunfaehig>());
	};
};