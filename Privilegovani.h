#pragma once
#include<iostream>
#include "Igrac.h"
#include"Tim.h"
using namespace std;
#ifndef _PRIVILEGOVANI_H_
#define _PRIVILEGOVANI_H_

class Privilegovani {
	string naziv;
	int maxBrojIgraca;
	int minVrednost;
	int brIgraca;
	Igrac* nizIgraca[50];
public:
	Privilegovani(string n, int br, int minVrednost) :naziv(n), maxBrojIgraca(br), minVrednost(minVrednost) { 
		brIgraca = 0;
		for (int i = 0; i < maxBrojIgraca; i++) { nizIgraca[i] = nullptr; }
	}
	const int getBrojIgracaUTimu() const { return brIgraca; }
	const int getBrojMaxIgracaUTimu() const { return maxBrojIgraca; }
	const string getNaziv() const { return naziv; }
	Igrac*& operator[](const int poz);
	double getVrednostTima()const;
	void dodajIgraca(int poz,Igrac& i);
	//bool operator==(Tim& t2);
	bool operator==(Privilegovani& pt2);
	friend ostream& operator<<(ostream& it, Privilegovani& p);
};

#endif _PRIVILEGOVANI_H_