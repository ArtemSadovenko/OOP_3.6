#pragma once
#include "B1.h"
class D1:
	public B1
{
private:
	int d1;
public:
	D1() :d1(0), B1() {}
	D1(int a, int b) :d1(a), B1(b) {}
	~D1() {};

	void show_D1() {
		cout << "Class D1" << endl;
		show_B1();
		cout << endl << "show_d1()" << endl 
		<< "D1::d1 = " << d1 << "\n\n"; }
};

