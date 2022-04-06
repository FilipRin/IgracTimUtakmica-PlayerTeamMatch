#include "Tim.h"
#pragma once
#ifndef _PAR_H_
#define _PAR_H_
template <typename T, typename P>
class Par {
	T* p1;
	P* p2;

public:
	void setP1(T v) { p1 = &v; };
	void setP2(P h) { p2 = &h; };
	T* getP1()const { return p1; };
	P* getP2()const { return p2; };
	bool operator==(Par& par2);
};

template <typename T, typename P>
ostream& operator<<(ostream& it, Par<T, P>& p)
{
	it << *(p.getP1()) << " - " << *(p.getP2());
	return it;
}

template<typename T, typename P>
inline bool Par<T, P>::operator==(Par& par2)
{
	if ((getP1() == par2.getP1()) && (getP2() == par2.getP2()))
		return true;
	return false;
}

#endif//!_PAR_H_