#pragma once
#include "AudioGeraet.h"

class KassettenDeck : public AudioGeraet {
private:
	void abspielenAnhalten() { printf("%s\n", __FUNCTION__); }
	void stopp() { printf("%s\n", __FUNCTION__); }
	void spuleVorwaerts() { printf("%s\n", __FUNCTION__); }
	void spuleRueckwaerts() { printf("%s\n", __FUNCTION__); }
public:
	virtual void playPause() { this->abspielenAnhalten(); }
	virtual void stop() { this->stopp(); }
	virtual void next() { this->spuleVorwaerts(); }
	virtual void previous() { this->spuleRueckwaerts(); }
};