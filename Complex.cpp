#include "Complex.h"

Complex::Complex(double a= 0 , double b = 0 ){
	realPart = a;
	imaginaryPart = b;

}

void Complex::printNum() const{
	std::cout<<" ( " << realPart << " , " << imaginaryPart << " ) " << std::endl;

}

Complex sum(Complex const &a, Complex const &b){

	Complex c;
	c.realPart = a.realPart + b.realPart;
	c.imaginaryPart = a.imaginaryPart + b.imaginaryPart;
	return c;


}

Complex sub(Complex const &a, Complex const &b){

	Complex c;
        c.realPart = a.realPart -  b.realPart;
        c.imaginaryPart = a.imaginaryPart - b.imaginaryPart;
        return c;


}




