#include "Functions.h"

void Decir()
{
	int selec;
	if (Juli.Afecto() >= 4)
	{
		do {
			cout << "1. Me gustas\n";
			cout << "2. Regresar\n";
			cin >> selec;
			DecirOp(selec);
		} while (selec != 2);
	}
	else
		cout << "1. Te quiero\n\n";

}
void DecirOp(int selec)
{
	switch (selec)
	{
	case 1: Gustar(); break;
	}
}