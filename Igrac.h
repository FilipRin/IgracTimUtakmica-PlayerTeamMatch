#include<string>
#include<iostream>
using namespace std;
#pragma once
#ifndef _IGRAC_H_
#define _IGRAC_H_

class Igrac {
	string ime="";
	int vrednost;
public:
	Igrac(int v=1000);
	Igrac(string i,int v=1000 );
	const int& DohvatiVrednostIg()const { return vrednost; }
	void PromenaVrednosti(int x);
	const string& DohvatiIme()const { return ime; }
	bool operator==(Igrac& i);
	friend ostream& operator<<(ostream& it, Igrac& i);
};
#endif // !_IGRAC_H_
