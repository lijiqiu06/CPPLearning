#include <iostream>
#include <string>

template <class T>

void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 1;
	int b = 2;
	std::cout << "交换前a=" << a << ",b=" << b << "\n";
	swap(a, b);
	std::cout << "交换后a=" << a << ",b=" << b << "\n";

	std::string str1 = "abcde";
	std::string str2 = "fghig";
	std::cout << "交换前str1=" << str1 << ",str2=" << str2 << "\n";
	swap(str1, str2);
	std::cout << "交换后str1=" << str1 << ",str2=" << str2 << "\n";
	return 0;
}