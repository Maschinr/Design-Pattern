#pragma once
#include "AudioStream.h"
#include <stdio.h>

class AudioGeraet {
public:
	AudioStream getAudioStream() { return this->audioStream; }
	virtual void playPause()= 0;
	virtual void stop() = 0;
	virtual void next() = 0;
	virtual void previous() = 0;
private:
	AudioStream audioStream;
};