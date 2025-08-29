#include <iostream>

int* getnum(int num);

int main()
{
	int* num = getnum(20);
	std::cout << "num = " << *num << std::endl;
	delete num;
	num = nullptr;
	return 0;
}

int* getnum(int num)
{
	int* p = new int;
	*p = num;
	return p;
}