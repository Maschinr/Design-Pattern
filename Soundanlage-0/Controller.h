#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Geraetetypen.h"

class Controller {
public:
	Controller();
	void setAktivesAudioGeraet(GeraeteTypen aktivesAudioGeraet) { this->aktivesAudioGeraet = aktivesAudioGeraet;  }
	void playPause();
	void stop();
	void next();
	void previous();

private:
	GeraeteTypen aktivesAudioGeraet;
	GeraeteTypen audioStreamQuelle;
	bool lautsprecherAktiv;
	bool radioUebertragungAktiv;

	void wiedergabePause();
	void stopCD();
	void spieleNaechstenTitel();
	void spieleVorherigenTitel();
	void abspielenAnhalten();
	void stopKassette();
	void spuleVorwaerts();
	void spuleRueckwaerts();
	void setUebertragungAktiv(bool uebertragungAktiv) { this->radioUebertragungAktiv = uebertragungAktiv;  }
	void sucheNaechstenSender();
	void sucheVorherigenSender();
};
#endif
