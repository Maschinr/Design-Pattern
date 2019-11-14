#include "Feuerwehrmann.h"
#include "Brandmeister.h"
#include <memory>

int main() {
	auto mann1 = std::make_shared<Feuerwehrmann>("Olaf1", "Baum");
	auto mann2 = std::make_shared<Feuerwehrmann>("Olaf2", "Baum");
	auto mann3 = std::make_shared<Feuerwehrmann>("Olaf3", "Baum");
	auto mann4 = std::make_shared<Feuerwehrmann>("Olaf4", "Baum");
	auto meister = std::make_shared<Brandmeister>();
	meister->addObserver(mann1);
	meister->addObserver(mann2);
	meister->addObserver(mann3);
	meister->addObserver(mann4);
	meister->work();
	meister->removeObserver(mann2);
	meister->work();
	return 0;
}