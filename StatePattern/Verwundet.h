#pragma once
#include "Zustand.h"
#include "Gesund.h"
#include "Bewegungsunfaehig.h"

class Verwundet : public Zustand {
public:
	Verwundet(std::shared_ptr<Spielfigur> spielfigur) : Zustand(spielfigur) {}
	virtual void heilen() override {
		this->spielfigur->setZustand(std::make_shared<Gesund>());
	};

	virtual void verletzenLeicht() override {
		this->spielfigur->setZustand(std::make_shared<Bewegungsunfaehig>());
	};

	virtual void verletzenSchwer() override {
		this->spielfigur->setZustand(std::make_shared<Bewegungsunfaehig>());
	};
};