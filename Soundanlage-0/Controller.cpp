#include "Controller.h"
#include <stdio.h>

Controller::Controller() : 
	aktivesAudioGeraet(GeraeteTypen::KEIN), 
	audioStreamQuelle(GeraeteTypen::KEIN), 
	lautsprecherAktiv(false), 
	radioUebertragungAktiv(false)  {

}

void Controller::playPause() {
	switch (this->aktivesAudioGeraet) {
	case GeraeteTypen::CD_PLAYER:
		this->wiedergabePause();
		break;
	case GeraeteTypen::KASSETENDECK:
		this->abspielenAnhalten();
		break;
	case GeraeteTypen::RADIO:
		this->setUebertragungAktiv(!this->radioUebertragungAktiv);
		break;
	default:
		printf("Play/Pause Invalid Device\n");
		break;
	}
}

void Controller::stop() {
	switch (this->aktivesAudioGeraet) {
	case GeraeteTypen::CD_PLAYER:
		this->stopCD();
		break;
	case GeraeteTypen::KASSETENDECK:
		this->stopKassette();
		break;
	case GeraeteTypen::RADIO:
		this->setUebertragungAktiv(false);
		break;
	default:
		printf("Stop Invalid Device\n");
		break;
	}
}

void Controller::next() {
	switch (this->aktivesAudioGeraet) {
	case GeraeteTypen::CD_PLAYER:
		this->spieleNaechstenTitel();
		break;
	case GeraeteTypen::KASSETENDECK:
		this->spuleVorwaerts();
		break;
	case GeraeteTypen::RADIO:
		this->sucheNaechstenSender();
		break;
	default:
		printf("Next Invalid Device\n");
		break;
	}
}

void Controller::previous() {
	switch (this->aktivesAudioGeraet) {
	case GeraeteTypen::CD_PLAYER:
		this->spieleVorherigenTitel();
		break;
	case GeraeteTypen::KASSETENDECK:
		this->spuleRueckwaerts();
		break;
	case GeraeteTypen::RADIO:
		this->sucheVorherigenSender();
		break;
	default:
		printf("Previous Invalid Device\n");
		break;
	}
}

void Controller::wiedergabePause() {
	printf("Wiedergabe Pause\n");
}

void Controller::stopCD() {
	printf("stopCD\n");
}

void Controller::spieleNaechstenTitel() {
	printf("spieleNaechstenTitel\n");
}

void Controller::spieleVorherigenTitel() {
	printf("spieleVorherigenTitel\n");
}

void Controller::abspielenAnhalten() {
	printf("abspielenAnhalten\n");
}

void Controller::stopKassette() {
	printf("stopKassette\n");
}

void Controller::spuleVorwaerts() {
	printf("spuleVorwaerts\n");
}

void Controller::spuleRueckwaerts() {
	printf("spuleRueckwaerts\n");
}

void Controller::sucheNaechstenSender() {
	printf("sucheNaechstenSender\n");
}

void Controller::sucheVorherigenSender() {
	printf("sucherVorherigenSender\n");
}
