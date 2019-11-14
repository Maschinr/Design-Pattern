#include "Observable.h"

void Observable::addObserver(std::shared_ptr<Observer> observer) {
	this->observers.push_back(observer);
}

void Observable::removeObserver(std::shared_ptr<Observer> observer) {
	this->observers.erase(std::find(this->observers.begin(), this->observers.end(), observer));
}

void Observable::notifyObservers(Command& cmd) {
	for (auto obs : this->observers) {
		obs->notify(cmd);
	}
}
