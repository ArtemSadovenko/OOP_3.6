#pragma once
#include "D1.h"
#include "D2.h"
class D3:
	public D1, protected D2
{
private:
	int d3;
public:
	D3() :d3(0), D1(), D2() {}
	D3(int a,int b, int c, int d, int e) :d3(a), D1(b,c) , D2(d,c, e){}
	~D3() {};

	void show_D3() { cout << "Class D3" << endl; show_D1();show_D2() ; cout << "show_d3()" << endl << "D3::d3 = " << d3 << "\n\n"; }
};

