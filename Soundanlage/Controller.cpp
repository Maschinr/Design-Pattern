#include "Controller.h"

Controller::Controller(Lautsprecher sprecher, std::map<GeraeteTypen, std::shared_ptr<AudioGeraet>> geraete) : aktivesAudioGeraet(GeraeteTypen::KEIN) {
	this->injectLautsprecher(sprecher);
	this->injectGeraete(geraete);
}

void Controller::injectGeraete(std::map<GeraeteTypen, std::shared_ptr<AudioGeraet>> geraete) {
	this->geraete = geraete;
}

void Controller::injectLautsprecher(Lautsprecher sprecher) {
	this->lautSprecher = sprecher;
}

void Controller::setAktivesAudioGeraet(GeraeteTypen aktivesAudioGeraet) {
	this->aktivesAudioGeraet = aktivesAudioGeraet;
}

void Controller::playPause() {
	std::shared_ptr<AudioGeraet> g = this->geraete[this->aktivesAudioGeraet];
	if (g != nullptr) {
		g->playPause();
	} else {
		printf("Invalid Device\n");
	}
}

void Controller::stop() {
	std::shared_ptr<AudioGeraet> g = this->geraete[this->aktivesAudioGeraet];
	if (g != nullptr) {
		g->stop();
	} else {
		printf("Invalid Device\n");
	}
}

void Controller::next() {
	std::shared_ptr<AudioGeraet> g = this->geraete[this->aktivesAudioGeraet];
	if (g != nullptr) {
		g->next();
	} else {
		printf("Invalid Device\n");
	}
}

void Controller::previous() {
	std::shared_ptr<AudioGeraet> g = this->geraete[this->aktivesAudioGeraet];
	if (g != nullptr) {
		g->previous();
	} else {
		printf("Invalid Device\n");
	}
}