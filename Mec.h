#pragma once
#include"Par.h"
#include"Tim.h"
#include"Privilegovani.h"
#include "Greska.h"
#ifndef _MEC_H_
#define _MEC_H_

class Mec {
	Par<Tim,Tim> *timovi=nullptr;
	Par<Tim, Privilegovani>* timPriv = nullptr;
	Par<Privilegovani, Tim>* privTim = nullptr;
	Par<Privilegovani, Privilegovani>* privilegovani = nullptr;

	Par<int, int>* parPoena;
	enum Ishod { POBEDA_DOMACIN, NERESENO, POBEDA_GOST };
	Ishod rezultat;
	bool odigranMec = false;
public:
	Mec(Par<Tim, Tim>* p) { timovi = p; }
	Mec(Par<Tim, Privilegovani>* p) { timPriv = p; }
	Mec(Par<Privilegovani, Privilegovani>* p) { privilegovani = p; }
	Mec(Par<Privilegovani, Tim>* p) { privTim = p; }

	Par<Tim, Tim>* getParTimova(){ return timovi; }
	Par<Tim, Privilegovani>* getParTimPriv() { return timPriv; }
	Par<Privilegovani, Tim>* getParPrivTim() { return privTim; }
	Par<Privilegovani, Privilegovani>* getParPrivilegovanihTimova() { return privilegovani; }
	Par<int, int>* getParOsvojenihPoenaTimova();
	void OdigrajMec();
	bool jelOdigranMec()const { return odigranMec; }
	friend ostream& operator<<(ostream& it, Mec& m);
};
#endif // !_MEC_H_
