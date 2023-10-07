#pragma once
#include "Alquiler.h"
#include "ListaCoches.h"
#include <Windows.h>
#include <fstream>
#include <iostream>


using namespace std;

class ListaAlquileres
{
private:
	size_t numElems;
	size_t capacidad;
	Alquiler* elems;

public:

	ListaAlquileres();
	ListaAlquileres(size_t numElems, size_t capacidad, Alquiler* elems);
	void ordena();
	void insertaAlquiler(const Alquiler& alquiler);
	bool leeAlquileres(const ListaCoches& listaCoches);
	friend ostream& operator<<(ostream& os, const ListaAlquileres& listaAlquileres);

};

