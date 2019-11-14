#pragma once
#include "Command.h"
#include "CommandUndo.h"
#include <stack>
#include <memory>

class CommandHandler {
public:
	void addCommand(std::shared_ptr<Command> c);
	void doWork();
	void undoLast();
private:
	std::stack<std::shared_ptr<Command>> commands;
	std::stack<std::shared_ptr<CommandUndo>> previous;
};

