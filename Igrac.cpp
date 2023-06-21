#include "Igrac.h"
bool Igrac::operator==(Igrac& i2)
{
	if (this->ime == i2.ime && this->vrednost == i2.vrednost) return true;
	return false;
}

ostream& operator<<(ostream& it, Igrac& i)
{
	it << i.ime << "#" << i.vrednost;
	return it;
	// TODO: insert return statement here
}
