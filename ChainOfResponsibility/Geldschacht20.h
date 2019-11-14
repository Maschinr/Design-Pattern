#pragma once
#pragma once
#include "Geldschacht.h"
#include "Geld20.h"

class Geldschacht20 : public Geldschacht {
public:
	Geldschacht20() : Geldschacht() {};
private:
	virtual bool liefereGeldscheine(int& betrag, std::vector<Geld>& geldscheine) override {
		while (betrag >= 20) {
			geldscheine.push_back(Geld20());
			betrag -= 20;
		}
		return false;
	}
};