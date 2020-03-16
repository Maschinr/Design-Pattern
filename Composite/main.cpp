#include "Directory.h"
#include "File.h"
#include <stdio.h>

int main(void) {

	auto d1 = std::make_shared<File>("Datei 1", 100.0);
	auto d2 = std::make_shared<File>("Datei 2", 200.0);
	auto d3 = std::make_shared<File>("Datei 3", 300.0);
	auto d4 = std::make_shared<File>("Datei 4", 400.0);
	auto d5 = std::make_shared<File>("Datei 5", 500.0);

	auto o1 = std::make_shared<Directory>("Dir 1");
	auto o2 = std::make_shared<Directory>("Dir 2");
	auto o3 = std::make_shared<Directory>("Dir 3");

	o1->addElement(d1);
	o1->addElement(d2);
	o1->addElement(d3);

	o2->addElement(d4);
	o2->addElement(d5);

	o3->addElement(o1);

	o3->addElement(o2);

	printf("Size Dir1: %g\nSize Dir2: %g\nSize Dir3: %g\n", o1->getMemorySize(), o2->getMemorySize(), o3->getMemorySize());
	
	return 0;
}