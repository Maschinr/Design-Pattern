#pragma once
#include "Observer.h"
#include "Command.h"

#include <vector>
#include <memory>

class Observable {
public:
	void addObserver(std::shared_ptr<Observer> observer);
	void removeObserver(std::shared_ptr<Observer> observer);

protected:
	void notifyObservers(Command& cmd);

private:
	std::vector<std::shared_ptr<Observer>> observers;
};