//#include <iostream>
//#include <string>
//
//int main()
//{
//	//迭代器：为容器类提供统一的程序接口，不用管容器底层内存管理方式
//	std::string str = "Hello";
//	std::cout << str << "\n\n";
//	//1.(正向)迭代器 iterator
//	std::string::iterator it1 = str.begin();// str.begin() 使it定位到str第一位
//	*it1 = 'h';
//	for (; it1 != str.end(); it1++)// str.end() 使it定位到str最后一位的下一位
//	{
//		std::cout << *it1 << '\n';
//	}
//	std::cout << '\n';
//	//2.(正向)只读迭代器 const_iterator 不可改
//	std::string::const_iterator it2 = str.begin();
//	for (; it2 != str.end(); it2++)//
//	{
//		std::cout << *it2 << '\n';
//	}
//	
//	std::cout << '\n';
//	//3.反向迭代器 reverse_iterator
//	std::string::reverse_iterator it3 = str.rbegin();// str.rbegin() 使it定位到str最后一位
//	*it3 = 'O';
//	for (; it3 != str.rend(); it3++)// str.rend() 使it定位到str第一位的前一位
//	{
//		std::cout << *it3 << '\n';
//	}
//
//	std::cout << '\n';
//	//4.反向只读迭代器 const_reverse iterator
//	std::string::const_reverse_iterator it4 = str.rbegin();
//	for (; it4 != str.rend(); it4++)// 
//	{
//		std::cout << *it4 << '\n';
//	}
//
//	std::cout << '\n'; 
//	return 0;
//}