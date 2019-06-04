#include <cmath>
#include <iostream>
#include <cstdlib>
#include <cassert>
#include "rational.h"

using namespace std;

int main()
{
rational r1(4, 7);
rational r2(2, 7);
cout << "r1 " << r1 << endl;
cout << "r2 " << r2 << endl;
cout << "+ operator r1 + r2 " << r1 + r2 << endl;
cout << "* operator r1 * r2 " << r1 * r2 << endl;
cout << "- operator r2 - r1 " << r2 - r1 << endl;
cout << "/ operator r1 / r2 " << r1 / r2 << endl;

if(r1 != r2) {
	cout << "r1 is not equal to r2, this test both the == and !=" << endl;
}//end if

cout << endl;

rational r3 (4, 8);
cout << "r3 before being reduced " << r3 << endl;

cout << "r3 after being reduced " << reduce(r3) << endl;
return EXIT_SUCCESS;
}//end main
