/**********************************************
*class: cs 3305/04
*term: spring 2019
*Name: Parker Browne
*instructor: Monisha Verma
*assignment: homework 2 rational.cpp
*********************************************/
#include <cassert>
#include <cmath>
#include <iostream>
#include "rational.h"

using namespace std;

rational::rational(int n, int d)
{
	assert (d != 0);
	numer = n;
	denom = d;
}//end rational constructor

int rational::get_numer() const {
	return numer;
}//end get_numer

int rational::get_denom() const {
	return denom;
}//end get_denom


bool operator == (const rational& r1, const rational& r2) {
	int x = r1.get_numer();
	int y = r1.get_denom();
	int a = r2.get_numer();
	int b = r2.get_denom();
	
	return ( (x * b) == (a * y) );	
}//end ==

bool operator != (const rational& r1, const rational& r2) {
	return !(r1 == r2);
}//end !=

rational operator + (const rational& r1, const rational& r2) {
	assert( r1.get_denom() == r2.get_denom() );
	
	int x = ( r1.get_numer() + r2.get_numer() );
	int y = r1.get_denom();
	return rational(x, y);
}//end overloaded +

rational operator - (const rational& r1, const rational& r2) {
	assert( r1.get_denom() == r2.get_denom() );
	
	int x = (r1.get_numer() - r2.get_numer() );
	int y = r1.get_denom();
	
	return rational(x, y);
}// end overloaded -

rational operator * (const rational& r1, const rational& r2) {
	int x = ( r1.get_numer() * r2.get_numer() );
	int y = ( r1.get_denom() * r2.get_denom() );
	assert(y != 0);
	
	return rational(x, y);
}//end overloaded *

rational operator / (const rational& r1, const rational& r2) {
	int x = (r1.get_numer() * r2.get_denom() );
	int y = (r1.get_denom() * r2.get_numer() );
	assert(y != 0);
	
	return rational(x, y);
}//end overloaded /

ostream& operator << (ostream& outs, const rational& r) {
	outs << r.get_numer() << "/" << r.get_denom() << endl;
	return outs;
}//end overloaded <<

rational reduce (const rational& r) {
	int x = r.get_numer();
	int y = r.get_denom();
	for (int i = x * y; i >= 1; i--) {
		if ((x % i == 0) && (y % i == 0)) {
			x /= i;
			y /= i;
			
			return rational(x, y);
		}//end if
	}//end for
}//end reduce
