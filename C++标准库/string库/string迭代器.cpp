//#include <iostream>
//#include <string>
//
//int main()
//{
//	//��������Ϊ�������ṩͳһ�ĳ���ӿڣ����ù������ײ��ڴ����ʽ
//	std::string str = "Hello";
//	std::cout << str << "\n\n";
//	//1.(����)������ iterator
//	std::string::iterator it1 = str.begin();// str.begin() ʹit��λ��str��һλ
//	*it1 = 'h';
//	for (; it1 != str.end(); it1++)// str.end() ʹit��λ��str���һλ����һλ
//	{
//		std::cout << *it1 << '\n';
//	}
//	std::cout << '\n';
//	//2.(����)ֻ�������� const_iterator ���ɸ�
//	std::string::const_iterator it2 = str.begin();
//	for (; it2 != str.end(); it2++)//
//	{
//		std::cout << *it2 << '\n';
//	}
//	
//	std::cout << '\n';
//	//3.��������� reverse_iterator
//	std::string::reverse_iterator it3 = str.rbegin();// str.rbegin() ʹit��λ��str���һλ
//	*it3 = 'O';
//	for (; it3 != str.rend(); it3++)// str.rend() ʹit��λ��str��һλ��ǰһλ
//	{
//		std::cout << *it3 << '\n';
//	}
//
//	std::cout << '\n';
//	//4.����ֻ�������� const_reverse iterator
//	std::string::const_reverse_iterator it4 = str.rbegin();
//	for (; it4 != str.rend(); it4++)// 
//	{
//		std::cout << *it4 << '\n';
//	}
//
//	std::cout << '\n'; 
//	return 0;
//}