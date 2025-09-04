//#include <iostream>
//#include <string>
//
//int main()
//{
//	//比较相关操作
//	std::string str1 = "Hello";
//	std::string str2 = "hello";
//	//1.==
//	std::cout << std::boolalpha << (str1 == str2) << '\n';
//	std::cout << '\n';
//	//2.compare() str1=str2返回0  str1<str2返回-1  str1>str2返回1
//	std::cout << std::boolalpha << str1.compare(str2) << '\n';
//	std::cout << '\n';
//	//3.starts_with() ends_with() 判断字符串是否以某些字符开头/结尾
//	std::cout << str1.starts_with("He")<<'\n';
//	std::cout << str2.ends_with("He") << '\n';
//
//	std::cout << '\n';
//	//4.contains() 判断字符串判断字符是否包括某些字符
//	std::cout << str1.contains("He") << '\n';
//	std::cout << str2.contains("He") << '\n';
//	std::cout << '\n';
//	return 0;
//}