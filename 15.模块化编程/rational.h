#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

namespace MyMath
{
	class Rational
	{
	public:
		Rational();
		Rational(int numerator, int denominator);
		Rational operator+(Rational& r);
		Rational operator-(Rational& r);
		Rational operator*(Rational& r);
		Rational operator/(Rational& r);
		void reduce();
		void print();
	private:
		int numerator;
		int denominator;
		friend std::ostream& operator<<(std::ostream& os, Rational r);
	};
}
#endif
