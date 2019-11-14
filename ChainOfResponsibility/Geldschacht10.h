#pragma once
#include "Geldschacht.h"
#include "Geld10.h"

class Geldschacht10 : public Geldschacht {
public:
	Geldschacht10() : Geldschacht() {};
private:
	virtual bool liefereGeldscheine(int& betrag, std::vector<Geld>& geldscheine) override {
		while (betrag >= 10) {
			geldscheine.push_back(Geld10());
			betrag -= 10;
		}
		return false;
	}
};