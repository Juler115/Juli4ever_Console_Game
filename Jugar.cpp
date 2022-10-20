#include "Functions.h"

void Jugar()
{
	int selec;
	do
	{
		cout << "Que quieres jugar ahora ?\n";
		cout << "1.Snake\n";
		cout << "2.Regresar\n";
		cin >> selec;
		JugarOp(selec);
		system("cls");

	} while (selec !=2);
	system("cls");



}
void JugarOp(int selec)
{
	switch (selec)
	{
		case 1: system("snake.exe"); system("color F"); break;
	}
}