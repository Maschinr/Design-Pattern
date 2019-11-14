#pragma once
#include "Geldschacht.h"
#include "Geld5.h"

class Geldschacht5 : public Geldschacht {
public:
	Geldschacht5() : Geldschacht() {};
private:
	virtual bool liefereGeldscheine(int& betrag, std::vector<Geld>& geldscheine) override {
		while (betrag >= 5) {
			geldscheine.push_back(Geld5());
			betrag -= 5;
		}
		return false;
	}
};