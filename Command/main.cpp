#include <stdio.h>
#include "CommandHandler.h"
#include "CommandSave.h"
#include "CommandZoom.h"

int main() {
	CommandHandler ch;
	std::shared_ptr<Camera> cam = std::make_shared<Camera>();
	
	ch.addCommand(std::make_shared<CommandSave>());
	ch.addCommand(std::make_shared<CommandZoom>(cam, 10));
	ch.addCommand(std::make_shared<CommandZoom>(cam, 10));
	ch.addCommand(std::make_shared<CommandSave>());
	ch.addCommand(std::make_shared<CommandZoom>(cam, 10));


	for (unsigned int i = 0; i < 7; i++) {
		ch.doWork();
	}

	for (unsigned int i = 0; i < 7; i++) {
		ch.undoLast();
	}

	return 0;
}