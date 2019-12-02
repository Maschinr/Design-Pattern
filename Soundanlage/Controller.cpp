#include "Controller.h"

Controller::Controller() : aktivesAudioGeraet(GeraeteTypen::KEIN) {
	this->geraete[GeraeteTypen::CD_PLAYER] = std::make_shared<CDPlayer>();
	this->geraete[GeraeteTypen::KASSETENDECK] = std::make_shared<KassettenDeck>();
	this->geraete[GeraeteTypen::RADIO] = std::make_shared<Radio>();
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