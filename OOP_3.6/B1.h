#pragma once
#include <iostream>

using namespace std;

class B1
{
private:
	int b1;
public:
	B1():b1(0){}
	B1(int a) :b1(a) {}
	~B1(){};

	void show_B1() { cout << "Class B1" << endl << "show_B1()" << endl << "B1::b1 = " << b1 << "\n\n"; }
};

