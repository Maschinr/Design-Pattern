#pragma once
#include "Command.h"

class Observer {
public:
	virtual void notify(Command& cmd) = 0;
};