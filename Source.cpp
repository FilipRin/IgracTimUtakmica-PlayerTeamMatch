#include<iostream>
#include"Igrac.h"
#include "Tim.h"
//#include "Privilegovani.h"
#include "Par.h"
#include "Mec.h"

using namespace std;

int main() {
	try
	{
		Igrac i1("Mike", 1200);
		Igrac i2("Cole");
		Igrac i3("Mike", 1200);
		Igrac i4("Mikey", 1500);

		/*cout << i1 << endl;
		cout << (i1 == i3) << endl;
		cout << (i1 == i4) << endl;

		i1.PromeniVrednost(50);
		cout << i1 << endl;
		cout << (i1 == i3) << endl;*/

		Tim t1("NYT", 10); Tim t3("NYT", 10);
		Tim t2("Jersey", 10);
		Privilegovani pt1("ime", 10, 1200);
		Privilegovani pt2("ime", 10, 1200);
		pt1.dodajIgraca(0,i2);
		//cout << (pt1 == pt2) << endl;
		i2.PromeniVrednost(20);
		pt1.dodajIgraca(0, i2);
		t1.dodajIgraca(2, i1);
		t1.dodajIgraca(1, i2);
		t1.dodajIgraca(3, i3);
		t1.dodajIgraca(1, i4);
		t1.dodajIgraca(0, i4);
		t2.dodajIgraca(0, i3);
		t2.dodajIgraca(1, i2);
		cout << pt1 << endl;
		cout << t1.getVrednostTima() << endl;
		cout << t2.getVrednostTima() << endl;
		cout << *t1[2] << endl;
		cout << *t2[0] << endl;
		//cout << *t1[5] << endl;

		t3.dodajIgraca(2, i1);
		t3.dodajIgraca(1, i2);
		t3.dodajIgraca(3, i4);

		//cout << (t1 == t3);
		cout << t1<<endl;
		cout << t2 << endl;
		cout << "---------------------" << endl;
		Par<Tim,Tim> p(&t1, &t2);
		Par<Tim, Tim> p2(&t1, &t2);
		Par<Tim, Privilegovani> ppom(&t1, &pt1);
		Par<Privilegovani, Tim> ppom2(&pt1, &t1);
		Par<Privilegovani, Privilegovani> ppom3(&pt1, &pt2);
		cout << p.getDomaciTim() << endl;
		cout << p.getGostujuciTim() << endl;
		cout << (p == p2) << endl;
		cout << p<<endl;

		cout << ppom3.getDomaciTim() << endl;
		cout << ppom3.getGostujuciTim() << endl;
		//cout << (&ppom3 == &p2) << endl;
		cout << ppom3 << endl;
		
		cout << "----------------------" << endl;
		/*Mec mpom(&ppom);
		Mec mpom2(&ppom2);
		Mec mpom3(&ppom3);
		cout << "Da li je mec odigran: " << mpom3.jelOdigranMec() << endl;
		cout << *mpom3.getParPrivilegovanihTimova() << endl;
		mpom3.OdigrajMec();
		try
		{
			cout << *mpom3.getParOsvojenihPoenaTimova() << endl;
		}
		catch (const std::exception& ee)
		{
			cout << ee.what() << endl;
		}
		cout << mpom3 << endl;
		cout << "---------------------------" << endl;
		cout << "Da li je mec odigran: " << mpom2.jelOdigranMec() << endl;
		cout << *mpom2.getParPrivTim() << endl;
		mpom2.OdigrajMec();
		try
		{
			cout << *mpom2.getParOsvojenihPoenaTimova() << endl;
		}
		catch (const std::exception& ee)
		{
			cout << ee.what() << endl;
		}
		cout << mpom2 << endl;
		cout << "---------------------------" << endl;
		cout << "Da li je mec odigran: " << mpom.jelOdigranMec() << endl;
		cout << *mpom.getParTimPriv() << endl;
		mpom.OdigrajMec();
		try
		{
			cout << *mpom.getParOsvojenihPoenaTimova() << endl;
		}
		catch (const std::exception& ee)
		{
			cout << ee.what() << endl;
		}
		cout << mpom << endl;
		cout << "-----------------------------eeee" << endl;
		p.setGostujuciTim(&t3);
		cout << p.getDomaciTim() << endl;
		cout << p.getGostujuciTim() << endl;
		cout << (p == p2) << endl;
		cout << p;
		cout << "--------------------------" << endl;*/
		Mec m1(&p);
		//Mec m2(&p2);
		cout << "Da li je mec odigran: " << m1.jelOdigranMec() << endl;
		cout << *m1.getParTimova() << endl;
		try
		{
			cout << *m1.getParOsvojenihPoenaTimova() << endl;
		}
		catch (const std::exception& ee)
		{
			cout << ee.what() << endl;
		}
		m1.OdigrajMec();
		cout << "Da li je mec odigran: " << m1.jelOdigranMec() << endl;
		try
		{	
			cout << *m1.getParOsvojenihPoenaTimova() << endl;	
		}
		catch (const std::exception& ee)
		{
			cout << ee.what() << endl;
		}
		cout << m1 << endl;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
	return 0;
}