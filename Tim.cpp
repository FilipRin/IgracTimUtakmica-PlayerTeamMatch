#include"Tim.h"
#include "Greska.h"
void Tim::dodajIgraca(int poz, Igrac& i)
{
	try
	{
		if (poz < this->maxBrojIgraca) {
			if ((*this)[poz] == nullptr) brIgraca++;
			(*this)[poz] = &i;
		}
		else {
			cout << "Pozicija izlazi van opsega. Igrac nije dodat!" << endl;
		}
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
	
}

Igrac*& Tim::operator[](const int poz)
{
	try
	{
		if (poz < maxBrojIgraca) { 	return nizIgraca[poz];}
		else {
			throw GVanOpsega();
		}
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
	
}

double Tim::getVrednostTima() const
{
	double suma = 0;
	
	for (int i = 0; i < maxBrojIgraca; i++) {
		if (nizIgraca[i] != nullptr) {
			suma += nizIgraca[i]->getVrednost();
		}
	}
	if (suma == 0) return 0;
	suma /= this->brIgraca;
	return suma;
}

bool Tim::operator==(Tim& t2)
{
	int counter = 0;
	if (this->naziv == t2.naziv && this->maxBrojIgraca == t2.maxBrojIgraca) {
		for (int i = 0; i < maxBrojIgraca; i++) {
			if ((this->nizIgraca[i] == t2.nizIgraca[i]) or (this->nizIgraca[i]==nullptr && t2.nizIgraca[i]==nullptr)) {
				counter++;
			}
			else { break; }
		}
		if (counter == this->maxBrojIgraca) return true;
	}

	return false;
}

/*bool Tim::operator==(Privilegovani& t2)
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

ostream& operator<<(ostream& it, Tim& t)
{
	int counter = 0;
	it << t.naziv << "[";
	for (int i = 0; i < t.maxBrojIgraca; i++) {
		if (t.nizIgraca[i] != nullptr) {
			it << *t.nizIgraca[i];
			counter++;
			if (counter < t.brIgraca) it << ",";
		}
	}
	it << "]";
	return it;
}
