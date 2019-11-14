#pragma once
#include "Geldschacht.h"
#include "Geld100.h"

class Geldschacht100 : public Geldschacht {
public:
	Geldschacht100() : Geldschacht() {};
private:
	virtual bool liefereGeldscheine(int& betrag, std::vector<Geld>& geldscheine) override {
		while (betrag >= 100) {
			geldscheine.push_back(Geld100());
			betrag -= 100;
		}
		return false;
	}
};