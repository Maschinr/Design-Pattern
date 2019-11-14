#pragma once
#include "AudioGeraet.h"

class Radio : public AudioGeraet {
private:
	bool uebertragungAktiv;
	bool getUebertragungAktiv() { return this->uebertragungAktiv; }
	void setUebertragungAktiv(bool uebertragungAktiv) { this->uebertragungAktiv = uebertragungAktiv; printf("%s %d\n", __FUNCTION__, uebertragungAktiv); }
	void sucheNaechstenSender() { printf("%s\n", __FUNCTION__); }
	void sucheVorherigenSender() { printf("%s\n", __FUNCTION__); }
public:
	virtual void playPause() { this->setUebertragungAktiv(!this->getUebertragungAktiv()); }
	virtual void stop() { this->setUebertragungAktiv(false); }
	virtual void next() { this->sucheNaechstenSender(); }
	virtual void previous() { this->sucheVorherigenSender(); }
};