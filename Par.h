#pragma once
#include<iostream>
using namespace std;
#ifndef _PAR_H_
#define _PAR_H_

template<typename D,typename G>
class Par {
	D* domacin;
	G* gost;
public:
	Par(D* d, G* g) { domacin = d; gost = g; }
	Par(D d, G g) { domacin = &d; gost = &g; }
	D& getDomaciTim()  { return *domacin; }
	G& getGostujuciTim() { return *gost; }
	void setDomaciTim( D* d) { domacin = d; }
	void setGostujuciTim( G* g) { gost = g; }
	bool operator==(Par& p2);
	//ostream& operator<<(ostream& it, Par& p2);
	//friend ostream& operator<<(ostream& it, Par& p);
};

#endif // !_PAR_H_

template<typename D, typename G>
inline bool Par<D, G>::operator==(Par<D,G>& p2)
{
	if ((this->domacin == p2.domacin) && (this->gost == p2.gost)) return true;
	return false;
}
template<typename D, typename G>
ostream& operator<<(ostream& it,Par<D,G>& p)
{
	it << "[" << p.getDomaciTim() << "-" << p.getGostujuciTim() << "]";
	return it;
}
