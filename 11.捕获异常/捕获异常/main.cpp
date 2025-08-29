#include <iostream>
#include <climits>
unsigned long getfactorial(int num) throw(const char*);

int main()
{
	int num = 0;
	std::cout <<"求阶乘\nm " << "输入一个整数：";
	std::cin >> num;
	try
	{
		unsigned long factorial = getfactorial(num);
		std::cout << num << "的阶乘是：" << factorial << '\n';
	}
	catch (const char*error)
	{
		std::cout << error;
	}
	return 0;
}

unsigned long getfactorial(int num) throw(const char*)
{
	unsigned long sum= 1;
	unsigned long max = ULONG_MAX;
	for (int i = 1; i <= num; i++)
	{
		sum *= i;
		max /= i;
	}

	if (max > 1)
	{
		return sum;
	}
	else throw "此阶乘超出 unsigned long 范围";

}