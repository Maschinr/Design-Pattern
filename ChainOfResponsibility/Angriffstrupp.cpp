#include "Angriffstrupp.h"
#include <stdio.h>

Angriffstrupp::Angriffstrupp() : Feuerwehrtrupp() {

}

bool Angriffstrupp::erledigeJob(BefehlsTyp bt) {
	printf("Angriffstrupp\n");
	if (bt == BefehlsTyp::Angriff) {
		return true;
	}
	return false;
}