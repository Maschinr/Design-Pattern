#pragma once
#include "Dresser.h"
#include <stdio.h>

class Player : public Dresser {
	virtual void dressUp() override {
		printf("finished dressing\n");
	}
};