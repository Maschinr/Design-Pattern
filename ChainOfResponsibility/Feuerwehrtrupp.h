#pragma once
#include "Befehlstyp.h"
#include "Chainlink.h"

class Feuerwehrtrupp : public Chainlink<BefehlsTyp> {
public:
	Feuerwehrtrupp() : Chainlink([=](BefehlsTyp bt) { return this->erledigeJob(bt); }) {};
private:
	virtual bool erledigeJob(BefehlsTyp bt) = 0;
};