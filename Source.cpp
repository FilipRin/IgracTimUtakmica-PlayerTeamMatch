#include "Tim.h"
#include "Par.h"
#include "Mec.h"

int main() {
	//Timovi
	Tim t1("newY", 10);
	Tim t2("oldW", 12);

	//Igraci
	Igrac ig1("Jare", 1200);
	Igrac ig2("Roki", 2200);
	Igrac ig3("Pog", 1900);
	Igrac ig4("Emi", 2300);

	//Dodavanje Timova
	t1.PrikljuciIgraca(1, ig1);
	cout << t1.DohvatiVrednostTima() << "," << t1.DohvatiBrIgraca() << endl;
	t1.PrikljuciIgraca(0, ig2);
	cout << t1;
	t2.PrikljuciIgraca(0, ig3);
	t2.PrikljuciIgraca(1, ig4);

	//Ilustracija Parova za igrace
	Par<Igrac, Igrac> igraci;
	igraci.setP1(ig1);
	igraci.setP2(ig2);
	cout << igraci << endl;
	Par<Igrac, Igrac> igraci2;
	igraci2.setP1(ig3);
	igraci2.setP1(ig4);
	bool AreTheyTheSame = igraci2 == igraci2;
	if (AreTheyTheSame)
		cout << "True" << endl << endl;
	else
		cout << "False" << endl << endl;

	//Ilustracija Meca
	cout << t1;
	Mec m1(t1, t2);
	
	//cout << m1 << endl;
	//m1.OdigrajMec();
	//cout << m1 << endl;


	return 0;
}