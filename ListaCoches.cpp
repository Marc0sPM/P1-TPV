#include "ListaCoches.h"
#include <Windows.h>
#include <fstream>
#include <iostream>

using namespace std;


bool ListaCoches::leerModelos(ListaCoches& listaCoches)
{
	//apertura de txt
	ifstream entrada;
	entrada.open("coches.txt");

	//si no se ha abierto, retorna false, si no, guarda los datos de entrada
	if (!entrada.is_open()) return false;
	else {
		
		entrada >> contador;
		listaCoches.Coche = tam;

		int i = 0;
		while (!entrada.eof() && i < listaCoches.tam)
		{
			entrada >> listaCoches.Coche[i].GetC�digo();
			entrada >> listaCoches.Coche[i].GetPrecio();
			getline(entrada, listaCoches.Coche[i].GetNombre();
			//debug
			/*cout << listaCoches.Coche[i].c�digo << " " << listaCoches.Coche[i].precio << " " << listaCoches.Coche[i].nombre << "\n";*/
			i++;
		}

	}
	return true;
}

int ListaCoches::buscarCoche(int c�digo) {
	int centro;
	int abajo = 0;
	int arriba = tam;
	//busqueda binaria de elementos con 2 auxiliares
	while (abajo <= arriba)
	{
		centro = (arriba + abajo) / 2;
		if (Coche[centro].GetC�digo() == c�digo)
		{
			return centro;
		}
		else if (c�digo < Coche[centro].GetC�digo())
		{
			arriba = centro - 1;
		}
		else abajo = centro + 1;
	}
	return -1;
}
