#include"Privilegovani.h"
#include "Greska.h"
ostream& operator<<(ostream& it, Privilegovani& p)
{
	int counter = 0;
	it << p.naziv <<"("<<p.minVrednost<<")[";
	for (int i = 0; i < p.maxBrojIgraca; i++) {
		if (p.nizIgraca[i] != nullptr) {
			it << *p.nizIgraca[i];
			counter++;
			if (counter < p.brIgraca) it << ",";
		}
	}
	it << "]";
	return it;
}

Igrac*& Privilegovani::operator[](const int poz)
{
	try
	{
		if (poz < maxBrojIgraca) return nizIgraca[poz];
		else {
			throw GVanOpsega();
		}
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}

double Privilegovani::getVrednostTima() const
{
	double suma = 0;
	for (int i = 0; i < maxBrojIgraca; i++) {
		if (nizIgraca[i] != nullptr) {
			suma += nizIgraca[i]->getVrednost();
		}
	}
	if (suma == 0)return 0;
	suma /= this->brIgraca;
	return suma;
}

void Privilegovani::dodajIgraca(int poz, Igrac& i)
{
	try
	{
		if (i.getVrednost() < this->minVrednost) throw GManjaVrednost();
		if (poz >= this->maxBrojIgraca) throw GVanOpsega();
		this->nizIgraca[poz] = &i;
		this->brIgraca++;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
	
}

/*bool Privilegovani::operator==(Tim& t2)
{
	int counter = 0;
	if (this->naziv == t2.getNaziv() && this->maxBrojIgraca == t2.getBrojMaxIgracaUTimu()) {
		for (int i = 0; i < maxBrojIgraca; i++) {
			if ((this->nizIgraca[i] == t2[i]) or (this->nizIgraca[i] == nullptr && t2[i] == nullptr)) {
				counter++;
			}
			else { break; }
		}
		if (counter == this->maxBrojIgraca) return true;
	}
	return false;
}*/

bool Privilegovani::operator==(Privilegovani& t2)
{
	int counter = 0;
	if (this->naziv == t2.getNaziv() && this->maxBrojIgraca == t2.getBrojMaxIgracaUTimu()) {
		for (int i = 0; i < maxBrojIgraca; i++) {
			if ((this->nizIgraca[i] == t2[i]) or (this->nizIgraca[i] == nullptr && t2[i] == nullptr)) {
				counter++;
			}
			else { break; }
		}
		if (counter == this->maxBrojIgraca) return true;
	}
	return false;
}
