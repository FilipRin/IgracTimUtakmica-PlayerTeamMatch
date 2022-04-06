#include "Igrac.h"

Igrac::Igrac(string i, int v)
{
	ime = ime + i;
	vrednost = v;
}

Igrac::Igrac(int v)
{
	vrednost = v;
}

bool Igrac::operator==(Igrac& i)
{

	if (vrednost == i.vrednost && ime == i.ime) {
		cout << "Igraci su isti!!" << endl;
		return true;
	}
	cout << "Igraci nisu isti!!" << endl;
	return false;
}

void Igrac::PromenaVrednosti(int x)
{
	double sum;
	sum = x / 100;
	vrednost = vrednost * sum;
}

ostream& operator<<(ostream& it, Igrac& i)
{
	cout << i.ime << "#" << i.vrednost ;
	return it;
	// TODO: insert return statement here
}
