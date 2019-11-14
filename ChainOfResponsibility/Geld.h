#pragma once
#include <string>
class Geld
{
public:
	Geld(double wert) {
		this->wert = wert;
	};
	double getWert() { return this->wert; };
	std::string toString() { return std::to_string(this->wert); };
private:
	double wert;
};

