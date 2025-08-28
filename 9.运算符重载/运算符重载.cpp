//复数加法重载
//#include <iostream>
//
//class Complex
//{
//public:
//	Complex();
//	Complex(double real, double image);
//	Complex operator+(Complex &a);
//	void print();
//
//private:
//	double real;
//	double image;
//};
//
//Complex::Complex()
//{
//	real = 0;
//	image = 0;
//}
//
//Complex::Complex(double real, double image)
//{
//	this->real = real;
//	this->image = image;
//}
//
//Complex Complex::operator+(Complex &a)
//{
//	return Complex(real + a.real, image + a.image);
//}
//
//void Complex::print()
//{
//	std::cout << real << " + " << image << " i\n";
//}
//int main()
//{
//	Complex c1(3, 4);
//	Complex c2(5, -10);
//	Complex c3;
//
//	c3 = c1 + c2;//实质是 c1.operator+(c2)
//	c1.print();
//	c2.print();
//	c3.print();
//	return 0;
//}



//有理数 + - * / 重载 <<重载
#include <iostream>
#include <math.h>
class Rational
{
public :
	Rational();
	Rational(int numerator,int denominator);
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

	return Rational(numerator* r.denominator + r.numerator* denominator, denominator * r.denominator);
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

// 求最大公约数（用于约分）
int gcd(int a, int b) 
{
	return b == 0 ? a : gcd(b, a % b);
}

// 在构造函数或运算后调用约分
void Rational::reduce() 
{
	int common = gcd(abs(numerator), abs(denominator));
	numerator /= common;
	denominator /= common;
	// 确保分母为正数
	if (denominator < 0) {
		numerator *= -1;
		denominator *= -1;
	}
}

void Rational::print()
{
	if(numerator%denominator!=0) std::cout << numerator << "/" << denominator<<'\n';
	else std::cout << numerator/denominator << '\n';
}

// <<重载，代替Rational::print()
std::ostream& operator<<(std::ostream& os, Rational r)
{
	if (r.numerator % r.denominator != 0) os << r.numerator << "/" << r.denominator;
	else os << r.numerator / r.denominator;
	
	return os;
}

int main()
{
	Rational r1(1, 8);
	Rational r2(7, 8);
	Rational r3,r4,r5,r6;

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
	//<<重载后
	std::cout << r1 << " + " << r2 << " = " << r1 + r2 << '\n';
	std::cout << r1 << " - " << r2 << " = " << r1 - r2 << '\n';
	std::cout << r1 << " * " << r2 << " = " << r1 * r2 << '\n';
	std::cout << r1 << " / " << r2 << " = " << r1 / r2 << '\n';
	return 0;
}