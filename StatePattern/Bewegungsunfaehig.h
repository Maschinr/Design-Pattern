#pragma once
#include "Zustand.h"
#include "Verwundet.h"

class Bewegungsunfaehig : public Zustand {
public:
	Bewegungsunfaehig(std::shared_ptr<Spielfigur> spielfigur) : Zustand(spielfigur) {}
	virtual void heilen() override {

	};

	virtual void verletzenLeicht() override {
		this->spielfigur->setZustand(std::make_shared<Verwundet>());
	};

	virtual void verletzenSchwer() override {
		this->spielfigur->setZustand(std::make_shared<Bewegungsunfaehig>());
	};
};