#pragma once
#include "Feuerwehrtrupp.h"

class Angriffstrupp : public Feuerwehrtrupp {
public:
	Angriffstrupp();
	virtual bool erledigeJob(BefehlsTyp bt) override;
};