//������ + - * / ���� <<����
#include <iostream>
#include <math.h>
#include "rational.h"

namespace MyMath
{
	Rational::Rational()
	{
		numerator = 0;
		denominator = 1;
	}

	Rational::Rational(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;

		reduce();
	}

	Rational Rational::operator+(Rational& r)
	{

		return Rational(numerator * r.denominator + r.numerator * denominator, denominator * r.denominator);
	}

	Rational Rational::operator-(Rational& r)
	{
		return Rational(numerator * r.denominator - r.numerator * denominator, denominator * r.denominator);
	}

	Rational Rational::operator*(Rational& r)
	{
		return Rational(numerator * r.numerator, denominator * r.denominator);
	}

	Rational Rational::operator/(Rational& r)
	{
		Rational t(r.denominator, r.numerator);

		return Rational(numerator * t.numerator, denominator * t.denominator);
	}

	// �����Լ��������Լ�֣�
	int gcd(int a, int b)
	{
		return b == 0 ? a : gcd(b, a % b);
	}

	// �ڹ��캯������������Լ��
	void Rational::reduce()
	{
		int common = gcd(abs(numerator), abs(denominator));
		numerator /= common;
		denominator /= common;
		// ȷ����ĸΪ����
		if (denominator < 0) {
			numerator *= -1;
			denominator *= -1;
		}
	}

	void Rational::print()
	{
		if (numerator % denominator != 0) std::cout << numerator << "/" << denominator << '\n';
		else std::cout << numerator / denominator << '\n';
	}

	// <<���أ�����Rational::print()
	std::ostream& operator<<(std::ostream& os, Rational r)
	{
		if (r.numerator % r.denominator != 0) os << r.numerator << "/" << r.denominator;
		else os << r.numerator / r.denominator;

		return os;
	}

}
