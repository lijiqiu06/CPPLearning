////���϶Ȼ��϶�ת��
//#include <iostream>
//#include <sstream>
//
//double ConvertTemperture(double value, char unit);
//int ConvertTemperture(int value, char unit);
//
//int main()
//{
//	std::cout << "����xx.xC����xx.xF����ʽ�����¶�:";
//
//	double valueDouble;
//	char unit;
//
//	std::cin >> valueDouble >> unit;
//	double retDouble = ConvertTemperture(valueDouble, unit);
//	if (unit == 'C')
//	{
//		std::cout << "���϶�Ϊ��" << retDouble << 'F' << std::endl;
//	}
//	else if (unit == 'F')
//	{
//		std::cout << "���϶�Ϊ��" << retDouble << 'C' << std::endl;
//	}
//	else
//	{
//		std::cout << "��ʽ����:" << unit << std::endl;
//	}
//
//	
//	std::cout << "����xx.xC����xx.xF����ʽ�����¶�:";
//	double valueInt;
//	std::cin >> valueInt >> unit;
//	int retInt = ConvertTemperture(valueInt, unit);
//	if (unit == 'C')
//	{
//		std::cout << "���϶�Ϊ��" << retInt << 'F' << std::endl;
//	}
//	else if (unit == 'F')
//	{
//		std::cout << "���϶�Ϊ��" << retInt << 'C' << std::endl;
//	}
//	else
//	{
//		std::cout << "��ʽ����:" << unit << std::endl;
//	}
//
//	std::cout << "�����������" << std::endl;
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



////	����calc()���㲢���ؽ��
////	������һ������ʱ��������ƽ��
////	��������������ʱ�������
////	��������������ʱ�������
//#include <iostream>
//double calc(double a);
//double calc(double a, double b);
//double calc(double a, double b, double c);
//int main()
//{
//	double a, b, c;
//	std::cout << "����a,b,c:";
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








