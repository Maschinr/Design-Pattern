#pragma once
#include "Command.h"
class CommandUndo : public Command {

public:
	virtual void execute() = 0;
	virtual void undo() = 0;
};

