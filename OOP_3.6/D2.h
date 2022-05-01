#pragma once
#include "B1.h"
#include "B2.h"
class D2:
	protected B1, public B2
{
private:
	int d2;
public:
	D2() :d2(0), B1(), B2() {}
	D2(int a, int b, int c) :d2(a), B1(b), B2(c) {}
	~D2() {};

	void show_D2() { cout << "Class D2" << endl; show_B1(); show_B2(); cout << "show_d2()" << endl << "D2::d2 = " << d2 << "\n\n"; }
};

