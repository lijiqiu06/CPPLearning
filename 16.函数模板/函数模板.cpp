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
	std::cout << "����ǰa=" << a << ",b=" << b << "\n";
	swap(a, b);
	std::cout << "������a=" << a << ",b=" << b << "\n";

	std::string str1 = "abcde";
	std::string str2 = "fghig";
	std::cout << "����ǰstr1=" << str1 << ",str2=" << str2 << "\n";
	swap(str1, str2);
	std::cout << "������str1=" << str1 << ",str2=" << str2 << "\n";
	return 0;
}