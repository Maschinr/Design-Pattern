#pragma once
#include "AudioStream.h"

class Lautsprecher {
private:
	AudioStream audioStream;
	bool aktiv;
public:
	void setAudioStream(AudioStream audioStream);
	void setAktiv(bool aktiv);
};