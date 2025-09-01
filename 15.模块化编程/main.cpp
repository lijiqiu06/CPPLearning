#include <iostream>
#include "rational.h"

int main()
{
	MyMath::Rational r1(1, 8);
	MyMath::Rational r2(7, 8);
	MyMath::Rational r3, r4, r5, r6;

	r3 = r1 + r2;
	r4 = r1 - r2;
	r5 = r1 * r2;
	r6 = r1 / r2;

	r1.print();
	r2.print();
	r3.print();
	r4.print();
	r5.print();
	r6.print();
	//<<ÖØÔØºó
	std::cout << r1 << " + " << r2 << " = " << r1 + r2 << '\n';
	std::cout << r1 << " - " << r2 << " = " << r1 - r2 << '\n';
	std::cout << r1 << " * " << r2 << " = " << r1 * r2 << '\n';
	std::cout << r1 << " / " << r2 << " = " << r1 / r2 << '\n';
	return 0;
}