#include "Controller.h"

int main() {
	std::map<GeraeteTypen, std::shared_ptr<AudioGeraet>> devices;
	devices[GeraeteTypen::CD_PLAYER] = std::make_shared<CDPlayer>();
	devices[GeraeteTypen::KASSETENDECK] = std::make_shared<KassettenDeck>();
	devices[GeraeteTypen::RADIO] = std::make_shared<Radio>();

	Controller c(Lautsprecher(), devices);
	c.setAktivesAudioGeraet(GeraeteTypen::CD_PLAYER);
	c.next();
	c.playPause();
	c.stop();
	c.previous();
	c.setAktivesAudioGeraet(GeraeteTypen::KASSETENDECK);
	c.next();
	c.playPause();
	c.stop();
	c.previous();
	c.setAktivesAudioGeraet(GeraeteTypen::RADIO);
	c.next();
	c.playPause();
	c.stop();
	c.previous();
}