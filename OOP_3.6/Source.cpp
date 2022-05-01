#include "D3.h"

int main() {
	B1 o0(777);
	cout << "B1 o0(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Hierarchy of class B1: " << endl;
	o0.show_B1();

	B2 o1(111);
	cout << "B2 o1(111);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "Hierarchy of class B2: " << endl;
	o1.show_B2();

	D1 o2(222, 333);
	cout << "D1 o3(222, 333);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Hierarchy of class D1: " << endl;
	o2.show_D1();

	D2 o3(11, 22, 33);
	cout << "D2 o3(11, 22, 33);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Hierarchy of class D2: " << endl;
	o3.show_D2();

	D3 o4(1, 2, 3, 4, 5);
	cout << "D3 o4(1, 2, 3, 4, 5);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Hierarchy of class D3: " << endl;
	o4.show_D3();

}