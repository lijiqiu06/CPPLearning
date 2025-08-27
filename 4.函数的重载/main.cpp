////摄氏度华氏度转换
//#include <iostream>
//#include <sstream>
//
//double ConvertTemperture(double value, char unit);
//int ConvertTemperture(int value, char unit);
//
//int main()
//{
//	std::cout << "按【xx.xC】【xx.xF】格式输入温度:";
//
//	double valueDouble;
//	char unit;
//
//	std::cin >> valueDouble >> unit;
//	double retDouble = ConvertTemperture(valueDouble, unit);
//	if (unit == 'C')
//	{
//		std::cout << "华氏度为：" << retDouble << 'F' << std::endl;
//	}
//	else if (unit == 'F')
//	{
//		std::cout << "摄氏度为：" << retDouble << 'C' << std::endl;
//	}
//	else
//	{
//		std::cout << "格式错误:" << unit << std::endl;
//	}
//
//	
//	std::cout << "按【xx.xC】【xx.xF】格式输入温度:";
//	double valueInt;
//	std::cin >> valueInt >> unit;
//	int retInt = ConvertTemperture(valueInt, unit);
//	if (unit == 'C')
//	{
//		std::cout << "华氏度为：" << retInt << 'F' << std::endl;
//	}
//	else if (unit == 'F')
//	{
//		std::cout << "摄氏度为：" << retInt << 'C' << std::endl;
//	}
//	else
//	{
//		std::cout << "格式错误:" << unit << std::endl;
//	}
//
//	std::cout << "按任意键结束" << std::endl;
//	std::cin.get();
//	return 0;
//}
//
//double ConvertTemperture(double value, char unit)
//{
//	double ret=0;
//	if (unit == 'C')
//	{
//		ret = value * 1.8 + 32;
//	
//	}
//	else if (unit == 'F')
//	{
//		ret = (value - 32) / 1.8;
//		
//	}
//	return ret;
//}
//
//int ConvertTemperture(int value, char unit)
//{
//	int ret = 0;
//	if (unit == 'C')
//	{
//		ret = value * 1.8 + 32;
//
//	}
//	else if (unit == 'F')
//	{
//		ret = (value - 32) / 1.8;
//
//	}
//	return ret;
//}



////	函数calc()计算并返回结果
////	当传入一个参数时，计算其平方
////	当传入两个参数时，计算积
////	当传入三个参数时，计算和
//#include <iostream>
//double calc(double a);
//double calc(double a, double b);
//double calc(double a, double b, double c);
//int main()
//{
//	double a, b, c;
//	std::cout << "输入a,b,c:";
//	std::cin >> a >> b >> c;
//
//	std::cout << calc(a) << std::endl;
//	std::cout << calc(a,b) << std::endl;
//	std::cout << calc(a,b,c) << std::endl;
//	return 0;
//}
//
//double calc(double a)
//{
//	return a * a;
//}
//
//double calc(double a,double b)
//{
//	return a * b;
//}
//
//double calc(double a,double b,double c)
//{
//	return a + b + c;
//}








