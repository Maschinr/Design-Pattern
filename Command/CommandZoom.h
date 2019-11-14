#pragma once
#include "CommandUndo.h"
#include "Camera.h"
#include <memory>

class CommandZoom :	public CommandUndo {
public:
	CommandZoom(std::shared_ptr<Camera> cam, int zoom);
	virtual void execute() override;
	virtual void undo() override;
private:
	std::shared_ptr<Camera> cam;
	int zoom;
};

