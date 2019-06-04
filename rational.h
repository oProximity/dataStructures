/***********************************************
*class: cs3305/04
*term: spring 2019
*name: Parker Browne
*Instructor: Monisha Verma
*assignment: homework 2 rational.h
***********************************************/
#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
#include <cmath>

class rational 
{ 
public:
	rational (int n, int d);
	//postcondition: rational number with given components has been created

	int get_numer() const;
	//returns numerator

	int get_denom() const;
	//returns denominator
private:
	int numer;
	int denom;
};//end class

bool operator == (const rational& r1, const rational& r2);
//returns true if r1 is equal to r2

bool operator != (const rational& r1, const rational& r2);
//returns true if r1 is not equal to r2

rational operator + (const rational& r1, const rational& r2);
//returned sum of r1 and r2

rational operator - (const rational& r1, const rational& r2);
//returns diffrance of r1 and r2

rational operator * (const rational& r1, const rational& r2);
//returns product of r1 and r2

rational operator / (const rational& r1, const rational& r2);
//precondition r2 is not zero
//returns the quotient of r1 and r2

rational reduce (const rational& r);
//reduces given ratinal

std::ostream& operator << (std::ostream& outs, const rational& r);
//postcondition r has been put in the output stream outs
//returned modified output stream outs

std::istream& operator >> (std::istream& ins, const rational& r);
//postcondition r is in the input stream ins
//returned: modified input stream ins


#endif // RATIONAL_H

