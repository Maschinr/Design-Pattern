#include "CommandZoom.h"
#include <stdio.h>

CommandZoom::CommandZoom(std::shared_ptr<Camera> cam, int zoom) : cam(cam), zoom(zoom) {
}

void CommandZoom::execute() {
	this->cam->setZoom(this->cam->getZoom() + this->zoom);
	printf("Zoom executed now: %i\n", this->cam->getZoom());
}

void CommandZoom::undo() {
	this->cam->setZoom(this->cam->getZoom() - this->zoom);
	printf("Zoom undone now: %i\n", this->cam->getZoom());
}
