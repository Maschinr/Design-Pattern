#include <stdio.h>
#include "Player.h"
#include "Shirt.h"
#include "Pants.h"
#include "Basecap.h"
#include "Shoe.h"

int main(void) {
	auto p = std::make_shared<Player>();

	auto s = std::make_shared<Shoe>(std::make_shared<Pants>(std::make_shared<Shirt>(std::make_shared<Basecap>(p))));

	s->dressUp();

	return 0;
}