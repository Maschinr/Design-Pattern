#pragma once
#include <map>
#include "Lautsprecher.h"
#include "Geraetetypen.h"
#include "AudioGeraet.h"

class InjectorComponent {
public:
	virtual void injectLautsprecher(Lautsprecher sprecher) = 0;
	virtual void injectGeraete(std::map<GeraeteTypen, std::shared_ptr<AudioGeraet>> geraete) = 0;
};