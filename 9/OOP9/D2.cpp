#include "D2.h"

D2::D2( int d2, int d1, int b2, int b1) :  D1(d1,b1,b2)
{
	this->d2 = d2;
}

void D2::show_D2()
{
	cout << "class D2:" << endl;
	show_D1();
	
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}
