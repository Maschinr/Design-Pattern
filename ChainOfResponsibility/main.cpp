#include "Angriffstrupp.h"
#include "Wassertrupp.h"
#include "Geldautomat.h"

int main() {
	auto t = std::make_shared<Angriffstrupp>();
	auto w = std::make_shared<Wassertrupp>();
	t->setNext(w);
	t->execute(BefehlsTyp::Wasser);

	Geldautomat gt;

	auto g = gt.auszahlen(195);

	for (auto ga : g) {
		printf("%s ", ga.toString().c_str());
	}
	printf("\n");

	return 0;
}