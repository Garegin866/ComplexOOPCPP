#ifndef __COMPLEX_H__
#define __cOMPLEX_H__

#include <iostream>

class Complex{
public:
	Complex(double, double);


	friend Complex sum(Complex const &, Complex const &);
	friend Complex sub(Complex const &, Complex const &);
	void printNum() const;

private:
	double realPart;
	double imaginaryPart;



};






#endif 
