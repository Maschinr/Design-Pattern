#pragma once
#include <map>
#include <memory>
#include "CDPlayer.h"
#include "KassettenDeck.h"
#include "Radio.h"
#include "InjectorComponent.h"

class Controller : public InjectorComponent {
public:
	Controller(Lautsprecher sprecher, std::map<GeraeteTypen, std::shared_ptr<AudioGeraet>> geraete);
	void setAktivesAudioGeraet(GeraeteTypen aktivesAudioGeraet);
	void playPause();
	void stop();
	void next();
	void previous();
	virtual void injectGeraete(std::map<GeraeteTypen, std::shared_ptr<AudioGeraet>> geraete) override;
	virtual void injectLautsprecher(Lautsprecher sprecher) override;
private:
	GeraeteTypen aktivesAudioGeraet;
	std::map<GeraeteTypen, std::shared_ptr<AudioGeraet>> geraete;
	Lautsprecher lautSprecher;
};
