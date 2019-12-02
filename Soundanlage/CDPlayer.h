#pragma once
#include "AudioGeraet.h"

class CDPlayer : public AudioGeraet {
private:
	void wiedergabePause() { printf("%s\n", __FUNCTION__); }
	void stopp() { printf("%s\n", __FUNCTION__); }
	void spieleNaechstenTitel() { printf("%s\n", __FUNCTION__); }
	void spieleVorherigenTitel() { printf("%s\n", __FUNCTION__); }
public:
	virtual void playPause() { this->wiedergabePause(); }
	virtual void stop() { this->stopp(); }
	virtual void next() { this->spieleNaechstenTitel(); }
	virtual void previous() { this->spieleVorherigenTitel(); }
};