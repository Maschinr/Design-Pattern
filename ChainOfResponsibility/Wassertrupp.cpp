#include "Wassertrupp.h"

Wassertrupp::Wassertrupp() : Feuerwehrtrupp() {

}

bool Wassertrupp::erledigeJob(BefehlsTyp bt) {
	printf("Wassertrupp\n");
	if (bt == BefehlsTyp::Wasser) {
		return true;
	}
	return false;
}