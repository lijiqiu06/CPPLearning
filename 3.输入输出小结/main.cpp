////判断Y/N
//#include <iostream>
//
//int main()
//{
//	std::cout << "Y/N:";
//	char ch;
//	char anwser;
//	std::cin >> ch;
//	if (ch == 'Y' || ch == 'y')
//	{
//		std::cout << "yes" << std::endl;
//		anwser = ch;
//	}
//	else if (ch == 'N' || ch == 'n')
//	{
//		std::cout << "no" << std::endl;
//		anwser = ch;
//	}
//	else
//	{
//		std::cout << "command error" << std::endl;
//	}
//	std::cin.ignore(100, '\n');
//	std::cout << "按任意键结束" << std::endl;
//	std::cin.get();
//	return 0;
//}

//摄氏度华氏度转换
#include <iostream>
#include <sstream>
int main()
{
	std::cout << "按【xx.xC】【xx.xF】格式输入温度:";
	
	double value;
	char unit;

	std::cin >> value >> unit;
	
	if (unit == 'C')
	{
		double ret = value * 1.8 + 32;
		std::cout << "华氏度为：" << ret << 'F' << std::endl;
	}
	else if(unit == 'F')
	{
		double ret = (value - 32) / 1.8;
		std::cout << "摄氏度为：" << ret << 'C' << std::endl;
	}
	else
	{
		std::cout << "格式错误:"<< unit << std::endl;
	}
	
	std::cout << "按任意键结束" << std::endl;
	std::cin.get();
	return 0;
}