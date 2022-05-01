#pragma once
#include <iostream>

using namespace std;

class B2
{
private:
	int b2;
public:
	B2() :b2(0) {}
	B2(int a) :b2(a) {}
	~B2() {};

	void show_B2() { cout << "Class B2" << endl << "show_B2()" << endl << "B2::b2 = " << b2 << "\n\n"; }
};

