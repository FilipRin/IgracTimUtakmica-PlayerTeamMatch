#include"Igrac.h"
#include<vector>
#pragma once
#ifndef _TIM_H_
#define _TIM_H_
class Tim {
	string naziv = "";
	int MaxBrIgr;
	Igrac* players;
	
	//vector<Igrac> Igraci;
	Igrac* igr[100];
	//fill(Igraci.begin(), Igraci.end(), 0);
	int counter = 0;
	int vrednost = 0;
public:
	Tim(string n, int mbi);
	const int& DohvatiBrIgraca()const { return counter; };
	Igrac& DohvatiIgracaSaPoz(int i);
	void PrikljuciIgraca(int i,Igrac& ig);
	double& DohvatiVrednostTima();
	bool operator == (Tim & t);
	friend ostream& operator<<(ostream& it, Tim& t);
	void addTimVrednost(int x) { vrednost += x; };
	int getTimVrednost() const { return vrednost; };
};

#endif//!_TIM_H_
