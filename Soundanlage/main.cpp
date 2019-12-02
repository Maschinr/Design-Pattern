#include "Controller.h"

int main() {
	Controller c;
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