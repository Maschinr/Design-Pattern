#pragma once
#include "Geldschacht.h"
#include "Geld50.h"

class Geldschacht50 : public Geldschacht {
public:
	Geldschacht50() : Geldschacht() {};
private:
	virtual bool liefereGeldscheine(int& betrag, std::vector<Geld>& geldscheine) override {
		while (betrag >= 50) {
			geldscheine.push_back(Geld50());
			betrag -= 50;
		}
		return false;
	}
};