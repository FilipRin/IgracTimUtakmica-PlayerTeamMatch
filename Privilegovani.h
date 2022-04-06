#pragma once
#include"Igrac.h"
#include<vector>
#pragma once
#ifndef _PRIVILEGOVANI_H_
#define _PRIVILEGOVANI_H_
class Privilegovani{
	string naziv = "";
	int MaxBrojIgraca;
	int MinVrednost;

	Igrac* playersP;
	int counter = 0;
public:
	Privilegovani(string n, int maxbr, int minVr);
	void PrikljuciIgraca(int i, Igrac& ig);

	friend ostream& operator<<(ostream& it, Privilegovani& p);
};

#endif//!_PRIVILEGOVANI_H_
