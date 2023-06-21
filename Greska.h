#pragma once
#include<exception>

using namespace std;

class GVanOpsega :public exception {

public:
	GVanOpsega() :exception("Izvan opsega!") {}

};

class GManjaVrednost :public exception {

public:
	GManjaVrednost() :exception("Igrac nema dovoljnu vrednost!") {}

};

class GNeodigranMec :public exception {

public:
	GNeodigranMec() :exception("Mec nije odigran!") {}

};
class GNepostojiIgracNaPoziciji :public exception {

public:
	GNepostojiIgracNaPoziciji() :exception("Ne postoji igrac na ovoj poziciji!") {}

};