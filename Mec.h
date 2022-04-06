#ifndef _MEC_H_
#include "Par.h"
class Mec
{
	Par<int, int> parPoena;
	enum Ishod
	{
		POBEDA_DOMACIN = 0,
		NERESENO,
		POBEDA_GOST
	};
	Ishod ish;
	bool odigran = false;
	int poeniDom=0, poeniGost=0;

public:
	Par<Tim, Tim> parTimova;
	Mec(Tim t1, Tim t2) { parTimova.setP1(t1); parTimova.setP2(t2); };
	Tim* getTim1() { return parTimova.getP1(); };
	Tim* getTim2() { return parTimova.getP2(); };
	bool DaLiJeMecOdigran() const { return odigran; };
	Ishod getIshod() const { return ish; };
	inline void OdigrajMec()
	{
		if (getTim1()->DohvatiVrednostTima() > getTim2()->DohvatiVrednostTima())
		{
			ish = POBEDA_DOMACIN;
			for (int i = 0; i < getTim1()->DohvatiBrIgraca(); i++)
			{
				getTim1()->DohvatiIgracaSaPoz(i).PromenaVrednosti(getTim1()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() + getTim1()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() * 0.1);
				poeniDom += getTim1()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() * 0.1;
			}
			for (int i = 0; i < getTim2()->DohvatiBrIgraca(); i++)
			{
				getTim2()->DohvatiIgracaSaPoz(i).PromenaVrednosti(getTim2()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() - getTim2()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() * 0.1);
				poeniGost += getTim2()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() * 0.1;
			}
			getTim1()->addTimVrednost(3);
		}
		else if(getTim1()->DohvatiVrednostTima() < getTim2()->DohvatiVrednostTima())
		{
			ish = POBEDA_GOST;
			for (int i = 0; i < getTim1()->DohvatiBrIgraca(); i++)
			{
				getTim1()->DohvatiIgracaSaPoz(i).PromenaVrednosti(getTim1()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() - getTim1()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() * 0.1);
				poeniDom += getTim1()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() * 0.1;
			}
			for (int i = 0; i < getTim2()->DohvatiBrIgraca(); i++)
			{
				getTim2()->DohvatiIgracaSaPoz(i).PromenaVrednosti(getTim2()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() + getTim2()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() * 0.1);
				poeniGost += getTim2()->DohvatiIgracaSaPoz(i).DohvatiVrednostIg() * 0.1;
			}
			getTim2()->addTimVrednost(3);
		}
		else
		{
			ish = NERESENO;
			getTim1()->addTimVrednost(1);
			getTim2()->addTimVrednost(1);
		}
		parPoena.setP1(poeniDom);
		parPoena.setP2(poeniGost);
		odigran = 1;
		return;
	}
	friend ostream& operator<<(ostream& it, Mec& m)
	{
		cout << m.parTimova << " ";
		if (m.DaLiJeMecOdigran())
			cout << " : " << m.getIshod();
		return it;
	}
};



#endif // !_MEC_H_
