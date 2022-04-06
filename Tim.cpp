#include"Tim.h"
Tim::Tim(string n, int mbi)
{
	int i = 0;
	naziv = naziv + n;
	MaxBrIgr = mbi;
	players = new Igrac[MaxBrIgr];
	//Igraci.push_back(Igrac());
}

/*const int& Tim::DohvatiBrIgraca() const
{
	int br = 0;
	for (int i = 0; i < MaxBrIgr; i++) {
		if (players[i].DohvatiIme() != "") {
			br++;
		}
	}
	return br;
	// TODO: insert return statement here
}*/

Igrac& Tim::DohvatiIgracaSaPoz(int i)
{
	int j;
	for ( j = 0; j < MaxBrIgr; j++) {
		if (j == i) {
			return players[j];
		}
	}
	cout << "Nevalidna pozicija" << endl;
	return players[j];
	// TODO: insert return statement here
}

void Tim::PrikljuciIgraca(int i,Igrac& ig)
{
	if (i < MaxBrIgr) {
		players[i] = ig;
		counter++;
	}
	else {
		cout << "Ne moze se dodati Igrac na nevalidnu poziciju" << endl;
	}
}

double& Tim::DohvatiVrednostTima()
{
	double sum=0;
	int counter2 = 0;
	for (int j = 0; j < MaxBrIgr; j++) {
		if (players[j].DohvatiIme()!="") {
			sum = sum + players[j].DohvatiVrednostIg();
			counter2++;
		}
	}
	sum = sum / counter2;
	return sum;
	// TODO: insert return statement here
}

bool Tim::operator==(Tim& t)
{
	int i = 0;
	if (naziv == t.naziv && MaxBrIgr == t.MaxBrIgr) {
		while (i < MaxBrIgr) {
			if (players[i] == t.players[i]) {
				i++;
			}
			else { break; }
		}
		if (i == MaxBrIgr) {
			return true;
		}
	}
	return false;
}

ostream& operator<<(ostream& it, Tim& t)
{
	int check = 0;
	cout << t.naziv<<"[";
	for (int i = 0; i < t.MaxBrIgr; i++) {
		if (i == t.MaxBrIgr - 1) {
			if (t.players[i].DohvatiIme() != "") {
				cout << t.players[i];
			}
		}
		else{ 
			if (t.players[i].DohvatiIme() != "") {
				if (check == 1) {
					cout << ",";
				}
				cout << t.players[i];
				check = 1;
			}
		}
		
	}
	cout << "]" << endl;
	return it;
}
