#include "Functions.h"

void Hablar()
{
	int selec;
	if (Juli.Afecto() >= 4){
		do
		{
			Act();
			cout << "De que te gustaria hablar ahora ?\n";
			cout << "1. Preguntar\n";
			cout << "2. Quiero que me conozcas\n";
			cout << "3. Me siento...\n";
			cout << "4. Te quiero decir...\n";
			cout << "5. Me gustas\n";
			cout << "6. Volver\n";
			cin >> selec;
			system("cls");
			Hablar_Op(selec);
		} while (selec != 6);
	}
	else {
		do
		{
			Act();
			cout << "De que te gustaria hablar ahora ?\n";
			cout << "1. Quien eres?\n";
			cout << "2. Quiero que me conozcas\n";
			cout << "3. Otros\n";
			cout << "4. Cambie en algo\n";
			cout << "5. Volver\n";
			cin >> selec;
			system("cls");
			Hablar_Op(selec);
		} while (selec != 5);
	}

}
void Hablar_Op(int selec)
{
	if (Juli.Afecto() >= 4)
	{
		switch (selec)
		{
			//case 1: system("cls"),Mi(); break;
		case 2: system("cls"), Conocer(); break;
			//case 3: system("cls"), Otros; break;
		case 4: system("cls"), Cambio(); break;
		case 5: system("cls"), Gustar(); break;
		default: "Lo siento no comprendi lo que deseas, puedes ingresarlo nuevamente\n"; break;
		}
	}
	else
	{
		switch (selec)
		{
			//case 1: system("cls"),Mi(); break;
		case 2: system("cls"), Conocer(); break;
			//case 3: system("cls"), Otros; break;
		case 4: system("cls"), Cambio(); break;
		default: "Lo siento no comprendi lo que deseas, puedes ingresarlo nuevamente\n"; break;
		}

	}
}
