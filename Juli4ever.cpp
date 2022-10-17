#include "Functions.h"
Julieta Juli("1", "2", "3");

void Opciones(int selec)
{
	switch (selec)
	{
	case 1: system("cls"),Hablar(); break;
	case 2: cout << "Jugar\n"; break;
	case 3: system("cls"), Musica(); break;
	case 4: cout << "Cuidate espero verte pronto, Siempre estare aqui :3\n"; break;
	default: "Lo siento no comprendi lo que deseas, puedes ingresarlo nuevamente\n";
		break;
	}
}

int main()
{
	try {

		if (!check())
		{
			Act();
			cout << "Hola " << Datos["Nombre"] << " Mi nombre es Juli espero que pasemos un buen rato juntos\n";
			cout << "Podemos hacer lo que desees elige algo que te interese hacer\n";
		}
		else
		{
			cout << Bienvenida() << "\n";
		}
	}
	catch (...)
	{
		cout << "Hubo un error al conseguir los datos"; return 0;
	}
	try {	
		
			Juli.ActNombre("Julieta");
	}
	catch(...) {
		cout << "Hubo un error al crear a Juli, revise el archivo Juli.h";
	}
	int selec;
	do
	{
		thread hilo{ musica };
		hilo.detach();
		cout << "Que te gustaria hacer ?\n";
		cout << "1. Hablar\n";
		cout << "2. Jugar\n";
		cout << "3. Musica\n";
		cout << "4. Salir\n";
		cin >> selec;
		system("cls");
		Opciones(selec);
	} while (selec!=4);


	return 0;
}
