#pragma once
#include "Coche.h"
#include <Windows.h>
#include <fstream>
#include <iostream>

using namespace std;

class ListaCoches
{
private:
	size_t numElems;
	size_t capacidad = numElems + 10;
	Coche* elems;

public:
	ListaCoches();
	ListaCoches(size_t numElems, size_t capacidad, Coche* elems);
	bool buscaCoche(int num) const;
	void insertaCoche(const Coche& coche);
	friend ostream& operator<<(ostream& os, const ListaCoches& listaCoches);
	friend istream& operator>>(istream& in, ListaCoches& listaCoches);

};

