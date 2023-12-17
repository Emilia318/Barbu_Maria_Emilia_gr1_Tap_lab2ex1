#include "Fractia.h"
#include <iostream>
using namespace std;


Fractia::Fractia() : numaratorul(0), numitorul(1) { }

Fractia::Fractia(int numaratorul) : numaratorul(numaratorul), numitorul(1) { }

Fractia::Fractia(int numaratorul, int numitorul) : numaratorul(numaratorul), numitorul(numitorul) { }

Fractia::Fractia(const Fractia& other) : numaratorul(other.numaratorul), numitorul(other.numitorul) { }


Fractia Fractia::adunare(const Fractia& other) const
{
	int rez_numaratorul = numaratorul * other.numitorul + other.numaratorul * numitorul;
	int rez_numitorul = numitorul * other.numitorul;

	return Fractia(rez_numaratorul, rez_numitorul).simplifica();
}

Fractia Fractia::scadere(const Fractia& other) const
{
	int rez_numaratorul = numaratorul * other.numitorul - other.numaratorul * numitorul;
	int rez_numitorul = numitorul * other.numitorul;
	return Fractia(rez_numaratorul, rez_numitorul).simplifica();
}

Fractia Fractia::inmultire(const Fractia& other) const
{
	int rez_numaratorul = numaratorul * other.numaratorul;
	int rez_numitorul = numitorul * other.numitorul;
	return Fractia(rez_numaratorul, rez_numitorul).simplifica();
}

Fractia Fractia::impartire(const Fractia& other) const
{
	int rez_numaratorul = numaratorul * other.numitorul;
	int rez_numitorul = numitorul * other.numaratorul;
	return Fractia(rez_numaratorul, rez_numitorul).simplifica();
}

int Fractia::cmmdc(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	else {
		return(y, x % y);
	}
}

Fractia Fractia::simplifica() const
{
	int div_comun = cmmdc(numaratorul, numitorul);
	int rez_numaratorul = numaratorul / div_comun;
	int rez_numitorul = numitorul / div_comun;
	return Fractia(rez_numaratorul, rez_numitorul);
}

Fractia Fractia::reciproc() const
{
	return Fractia(numitorul, numaratorul);
}

bool Fractia::egal(const Fractia& other) const
{
	Fractia fr1 = this->simplifica();
	Fractia fr2 = other.simplifica();
	return (fr1.numaratorul == fr2.numaratorul) && (fr1.numitorul == fr2.numitorul);
}

void Fractia::print() const
{
	cout << numaratorul << "/" << numitorul;
}
