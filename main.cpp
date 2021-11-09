#include <iostream>
#include "Complex.h"

int main(){

	Complex a(5 , 6);
	Complex b(5, 15);

	Complex c = sum(a,b);

	c.printNum();



	return 0;
}
