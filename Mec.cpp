#include"Mec.h"
Par<int, int>* Mec::getParOsvojenihPoenaTimova()
{
	if (jelOdigranMec()) { 
		if (this->rezultat == this->POBEDA_DOMACIN) {
			this->parPoena = new Par<int, int>(3, 0);
		}
		else if (this->rezultat == this->POBEDA_GOST) {
			this->parPoena= new Par<int, int>(0, 3);
		}
		else {
			this->parPoena = new Par<int, int>(1, 1);
		}
	}
	else throw GNeodigranMec();
	//cout << "Poeni osvojeni na mecu: ";
	return this->parPoena;
}
void Mec::OdigrajMec()
{
	if (this->timovi != nullptr) {
		if (this->timovi->getDomaciTim().getVrednostTima() > this->timovi->getGostujuciTim().getVrednostTima()) {
			this->rezultat = this->POBEDA_DOMACIN;
			int i = 0, brojac = 0;
			while (i < this->timovi->getDomaciTim().getBrojIgracaUTimu())
			{
				if (this->timovi->getDomaciTim()[i] != nullptr) {
					this->timovi->getDomaciTim()[i]->PromeniVrednost(10);
					brojac++;
				}
				i++;
			}
			i = 0; brojac = 0;
			while (i < this->timovi->getGostujuciTim().getBrojIgracaUTimu())
			{
				if (this->timovi->getGostujuciTim()[i] != nullptr) {
					this->timovi->getGostujuciTim()[i]->PromeniVrednost(-10);
					brojac++;
				}
				i++;
			}
		}
		else if (this->timovi->getDomaciTim().getVrednostTima() < this->timovi->getGostujuciTim().getVrednostTima()) {
			this->rezultat = this->POBEDA_GOST;
			int i = 0, brojac = 0;
			while (brojac < this->timovi->getDomaciTim().getBrojIgracaUTimu())
			{
				if (this->timovi->getDomaciTim()[i] != nullptr) {
					this->timovi->getDomaciTim()[i]->PromeniVrednost(-10);
					brojac++;
				}
				i++;
			}
			i = 0; brojac = 0;
			while (brojac < this->timovi->getGostujuciTim().getBrojIgracaUTimu())
			{
				if (this->timovi->getGostujuciTim()[i] != nullptr) {
					this->timovi->getGostujuciTim()[i]->PromeniVrednost(10);
					brojac++;
				}
				i++;
			}
		}
		else {
			this->rezultat = this->NERESENO;
		}
	}
	else if (this->privTim != nullptr) {
		if (this->privTim->getDomaciTim().getVrednostTima() > this->privTim->getGostujuciTim().getVrednostTima()) {
			this->rezultat = this->POBEDA_DOMACIN;
			int i = 0, brojac = 0;
			while (i < this->privTim->getDomaciTim().getBrojIgracaUTimu())
			{
				if (this->privTim->getDomaciTim()[i] != nullptr) {
					this->privTim->getDomaciTim()[i]->PromeniVrednost(10);
					brojac++;
				}
				i++;
			}
			i = 0; brojac = 0;
			while (i < this->privTim->getGostujuciTim().getBrojIgracaUTimu())
			{
				if (this->privTim->getGostujuciTim()[i] != nullptr) {
					this->privTim->getGostujuciTim()[i]->PromeniVrednost(-10);
					brojac++;
				}
				i++;
			}
		}
		else if (this->privTim->getDomaciTim().getVrednostTima() < this->privTim->getGostujuciTim().getVrednostTima()) {
			this->rezultat = this->POBEDA_GOST;
			int i = 0, brojac = 0;
			while (brojac < this->privTim->getDomaciTim().getBrojIgracaUTimu())
			{
				if (this->privTim->getDomaciTim()[i] != nullptr) {
					this->privTim->getDomaciTim()[i]->PromeniVrednost(-10);
					brojac++;
				}
				i++;
			}
			i = 0; brojac = 0;
			while (brojac < this->privTim->getGostujuciTim().getBrojIgracaUTimu())
			{
				if (this->privTim->getGostujuciTim()[i] != nullptr) {
					this->privTim->getGostujuciTim()[i]->PromeniVrednost(10);
					brojac++;
				}
				i++;
			}
		}
		else {
			this->rezultat = this->NERESENO;
		}
	}
	else if (this->privilegovani != nullptr) {
		if (this->privilegovani->getDomaciTim().getVrednostTima() > this->privilegovani->getGostujuciTim().getVrednostTima()) {
			this->rezultat = this->POBEDA_DOMACIN;
			int i = 0, brojac = 0;
			while (i < this->privilegovani->getDomaciTim().getBrojIgracaUTimu())
			{
				if (this->privilegovani->getDomaciTim()[i] != nullptr) {
					this->privilegovani->getDomaciTim()[i]->PromeniVrednost(10);
					brojac++;
				}
				i++;
			}
			i = 0; brojac = 0;
			while (i < this->privilegovani->getGostujuciTim().getBrojIgracaUTimu())
			{
				if (this->privilegovani->getGostujuciTim()[i] != nullptr) {
					this->privilegovani->getGostujuciTim()[i]->PromeniVrednost(-10);
					brojac++;
				}
				i++;
			}
		}
		else if (this->privilegovani->getDomaciTim().getVrednostTima() < this->privilegovani->getGostujuciTim().getVrednostTima()) {
			this->rezultat = this->POBEDA_GOST;
			int i = 0, brojac = 0;
			while (brojac < this->privilegovani->getDomaciTim().getBrojIgracaUTimu())
			{
				if (this->privilegovani->getDomaciTim()[i] != nullptr) {
					this->privilegovani->getDomaciTim()[i]->PromeniVrednost(-10);
					brojac++;
				}
				i++;
			}
			i = 0; brojac = 0;
			while (brojac < this->privilegovani->getGostujuciTim().getBrojIgracaUTimu())
			{
				if (this->privilegovani->getGostujuciTim()[i] != nullptr) {
					this->privilegovani->getGostujuciTim()[i]->PromeniVrednost(10);
					brojac++;
				}
				i++;
			}
		}
		else {
			this->rezultat = this->NERESENO;
		}
	}
	else {
		if (this->timPriv->getDomaciTim().getVrednostTima() > this->timPriv->getGostujuciTim().getVrednostTima()) {
			this->rezultat = this->POBEDA_DOMACIN;
			int i = 0, brojac = 0;
			while (i < this->timPriv->getDomaciTim().getBrojIgracaUTimu())
			{
				if (this->timPriv->getDomaciTim()[i] != nullptr) {
					this->timPriv->getDomaciTim()[i]->PromeniVrednost(10);
					brojac++;
				}
				i++;
			}
			i = 0; brojac = 0;
			while (i < this->timPriv->getGostujuciTim().getBrojIgracaUTimu())
			{
				if (this->timPriv->getGostujuciTim()[i] != nullptr) {
					this->timPriv->getGostujuciTim()[i]->PromeniVrednost(-10);
					brojac++;
				}
				i++;
			}
		}
		else if (this->timPriv->getDomaciTim().getVrednostTima() < this->timPriv->getGostujuciTim().getVrednostTima()) {
			this->rezultat = this->POBEDA_GOST;
			int i = 0, brojac = 0;
			while (brojac < this->timPriv->getDomaciTim().getBrojIgracaUTimu())
			{
				if (this->timPriv->getDomaciTim()[i] != nullptr) {
					this->timPriv->getDomaciTim()[i]->PromeniVrednost(-10);
					brojac++;
				}
				i++;
			}
			i = 0; brojac = 0;
			while (brojac < this->timPriv->getGostujuciTim().getBrojIgracaUTimu())
			{
				if (this->timPriv->getGostujuciTim()[i] != nullptr) {
					this->timPriv->getGostujuciTim()[i]->PromeniVrednost(10);
					brojac++;
				}
				i++;
			}
		}
		else {
			this->rezultat = this->NERESENO;
		}
	}
	this->odigranMec = true;
}

ostream& operator<<(ostream& it, Mec& m)
{
	if(m.timovi!=nullptr) it << *(m.timovi) << endl;
	else if(m.privTim!=nullptr) it << *(m.privTim) << endl;
	else if(m.privilegovani!=nullptr) it << *(m.privilegovani) << endl;
	else { it << *(m.timPriv) << endl; }
	if (m.jelOdigranMec()) {
		if (m.rezultat == m.POBEDA_DOMACIN) { it << "POBEDA_DOMACIN" << endl; }
		else if (m.rezultat == m.POBEDA_GOST) { it << "POBEDA_GOST" << endl; }
		else { it << "NERESENO" << endl; }
	}
	return it;
}
