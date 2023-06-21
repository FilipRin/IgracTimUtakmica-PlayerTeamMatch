#pragma once
#include<iostream>
using namespace std;
#ifndef _IGRAC_H_
#define _IGRAC_H_

class Igrac {
	string ime;
	double vrednost;
public:
	Igrac(string ime, double br = 1000) :ime(ime), vrednost(br) {};

	string getIme() const { return ime; }
	double getVrednost() const { return vrednost; }
	void PromeniVrednost(double procenat) { vrednost = vrednost * (1 + (procenat / 100)); }
	bool operator==(Igrac& i2);
	friend ostream& operator<<(ostream& it, Igrac& i);
};

#endif // !_IGRAC_H_
