#include "CommandHandler.h"

void CommandHandler::addCommand(std::shared_ptr<Command> c) {
	this->commands.push(c);
}

void CommandHandler::doWork() {

	if (this->commands.size() > 0 && this->commands.top() != nullptr) {
		std::shared_ptr<Command> cmd = this->commands.top();
		std::shared_ptr<CommandUndo> un_cmd = std::dynamic_pointer_cast<CommandUndo>(cmd);

		if (un_cmd) {
			this->previous.push(un_cmd);
		}

		cmd->execute();
		this->commands.pop();
	} else {
		printf("Nothing to do\n");
	}
}

void CommandHandler::undoLast() {
	if (this->previous.size() > 0 && this->previous.top() != nullptr) {
		this->previous.top()->undo();
		this->previous.pop();
	} else {
		printf("Nothing to undo\n");
	}
}
