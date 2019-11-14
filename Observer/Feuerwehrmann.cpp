#include "Feuerwehrmann.h"
#include "stdio.h"

Feuerwehrmann::Feuerwehrmann(std::string vorname, std::string nachname) {
	this->vorname = vorname;
	this->nachname = nachname;
}

void Feuerwehrmann::notify(Command& cmd) {
	printf("%s, %s: ", this->vorname.c_str(), this->nachname.c_str());
	cmd.execute();
}
