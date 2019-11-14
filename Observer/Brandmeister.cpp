#include "Brandmeister.h"
#include "CommandWasserMarsch.h"

void Brandmeister::work() {
	CommandWasserMarsch c = CommandWasserMarsch();
	this->notifyObservers(c);
}
