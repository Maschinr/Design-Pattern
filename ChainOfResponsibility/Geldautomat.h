#pragma once
#include <vector>
#include "Geld.h"
#include "Geldschacht5.h"
#include "Geldschacht10.h"
#include "Geldschacht20.h"
#include "Geldschacht50.h"
#include "Geldschacht100.h"

class Geldautomat
{
public:
	Geldautomat();
	std::vector<Geld> auszahlen(int betrag);
private:
	std::shared_ptr<Geldschacht5> gs5;
	std::shared_ptr<Geldschacht10> gs10;
	std::shared_ptr<Geldschacht20> gs20;
	std::shared_ptr<Geldschacht50> gs50;
	std::shared_ptr<Geldschacht100> gs100;
};

