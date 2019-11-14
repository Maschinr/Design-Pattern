#pragma once
#include <map>
#include <memory>
#include "Geraetetypen.h"
#include "Lautsprecher.h"
#include "CDPlayer.h"
#include "KassettenDeck.h"
#include "Radio.h"

class Controller {
public:
	Controller();
	void setAktivesAudioGeraet(GeraeteTypen aktivesAudioGeraet);
	void playPause();
	void stop();
	void next();
	void previous();

private:
	GeraeteTypen aktivesAudioGeraet;
	std::map<GeraeteTypen, std::shared_ptr<AudioGeraet>> geraete;
	Lautsprecher lautSprecher;
};
