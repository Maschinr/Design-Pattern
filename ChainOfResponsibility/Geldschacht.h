#pragma once
#include "Chainlink.h"
#include "Geld.h"
#include <vector>

class Geldschacht : public Chainlink<int&, std::vector<Geld>&> {
public:
	Geldschacht() : Chainlink([=](int& betrag, std::vector<Geld>& geldscheine) { return this->liefereGeldscheine(betrag, geldscheine); }) {};
private:
	virtual bool liefereGeldscheine(int& betrag, std::vector<Geld>& geldscheine) = 0;
};