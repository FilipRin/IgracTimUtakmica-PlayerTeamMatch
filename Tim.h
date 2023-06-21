#pragma once
#include<iostream>
#include "Igrac.h"
#include "Privilegovani.h"
using namespace std;
#ifndef _TIM_H_
#define _TIM_H_

class Tim {
	string naziv;
	int maxBrojIgraca;
	Igrac* nizIgraca[50];
	int brIgraca;
public:
	Tim(string n, int br) :naziv(n), maxBrojIgraca(br) {
		for (int i = 0; i < maxBrojIgraca; i++) { nizIgraca[i] = nullptr; }
		brIgraca = 0;
	}
	const string getNaziv() const { return naziv; }
	const int getBrojMaxIgracaUTimu() const { return maxBrojIgraca; }
	void dodajIgraca(int poz, Igrac& i);
	const int getBrojIgracaUTimu() const { return brIgraca; }
	Igrac*& operator[](const int poz);
	double getVrednostTima()const;
	bool operator==(Tim& t2);
	//bool operator==(Privilegovani& t2);
	friend ostream& operator<<(ostream& it, Tim& t);
};

#endif _TIM_H_