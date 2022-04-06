#include"Privilegovani.h"
Privilegovani::Privilegovani(string n, int maxbr, int minVr)
{
	naziv = naziv + n;
	MaxBrojIgraca = maxbr;
	MinVrednost = minVr;
	playersP = new Igrac[MaxBrojIgraca];
}

void Privilegovani::PrikljuciIgraca(int i, Igrac& ig)
{
	if (i < MaxBrojIgraca && ig.DohvatiVrednostIg()>=MinVrednost) {
		playersP[i] = ig;
		counter++;
	}
	else {
		throw "Greska!! Igrac nema dovoljno visoku vrednost!!";
	}
}

ostream& operator<<(ostream& it, Privilegovani& p)
{
	int check = 0;
	cout << p.naziv <<"("<<p.MinVrednost<< ")[";
	for (int i = 0; i < p.MaxBrojIgraca; i++) {
		if (i == p.MaxBrojIgraca - 1) {
			if (p.playersP[i].DohvatiIme() != "") {
				if (check == 1) {
					cout << ",";
				}
				cout << p.playersP[i];
				check = 1;
			}
		}
		else {
			if (p.playersP[i].DohvatiIme() != "") {
				if (check == 1) {
					cout << ",";
				}
				cout << p.playersP[i];
				check = 1;
			}
		}
	}
	cout << "]"<<endl;

	return it;
	// TODO: insert return statement here
}
