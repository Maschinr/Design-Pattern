#pragma once
#include "Observer.h"

#include <string>

class Feuerwehrmann : public Observer {
public:
	Feuerwehrmann(std::string vorname, std::string nachname);
	virtual void notify(Command& cmd) override;
	std::string getVorname() { return this->vorname; }
	std::string getNachname() { return this->nachname; }
	void setVorname(std::string vorname) { this->vorname = vorname; }
	void setNachname(std::string nachname) { this->nachname = nachname; }

private:
	std::string vorname;
	std::string nachname;
};

