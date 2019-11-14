#pragma once
#include "Feuerwehrtrupp.h"

class Wassertrupp : public Feuerwehrtrupp {
public:
	Wassertrupp();
	virtual bool erledigeJob(BefehlsTyp bt) override;
};