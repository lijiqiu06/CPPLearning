////�ж�Y/N
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
//	std::cout << "�����������" << std::endl;
//	std::cin.get();
//	return 0;
//}

//���϶Ȼ��϶�ת��
#include <iostream>
#include <sstream>
int main()
{
	std::cout << "����xx.xC����xx.xF����ʽ�����¶�:";
	
	double value;
	char unit;

	std::cin >> value >> unit;
	
	if (unit == 'C')
	{
		double ret = value * 1.8 + 32;
		std::cout << "���϶�Ϊ��" << ret << 'F' << std::endl;
	}
	else if(unit == 'F')
	{
		double ret = (value - 32) / 1.8;
		std::cout << "���϶�Ϊ��" << ret << 'C' << std::endl;
	}
	else
	{
		std::cout << "��ʽ����:"<< unit << std::endl;
	}
	
	std::cout << "�����������" << std::endl;
	std::cin.get();
	return 0;
}