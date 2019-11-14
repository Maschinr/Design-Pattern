#include "Geldautomat.h"

Geldautomat::Geldautomat() {
	this->gs5 = std::make_shared<Geldschacht5>();
	this->gs10 = std::make_shared<Geldschacht10>();
	this->gs20 = std::make_shared<Geldschacht20>();
	this->gs50 = std::make_shared<Geldschacht50>();
	this->gs100 = std::make_shared<Geldschacht100>();

	this->gs100->setNext(gs50);
	this->gs50->setNext(gs20);
	this->gs20->setNext(gs10);
	this->gs10->setNext(gs5);
}

std::vector<Geld> Geldautomat::auszahlen(int betrag) {
	std::vector<Geld> res;

	this->gs100->execute(betrag, res);

	return res;
}
