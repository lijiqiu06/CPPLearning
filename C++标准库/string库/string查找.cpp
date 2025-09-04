//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string str = "AABBCCDDCCDDEAAEFBBF";
//	//1.find() 查找子串，若找到返回子串首元素下标，找不到则返回npos
//	int index = str.find("A");
//	if (index == std::string::npos) std::cout << "找不到\n";
//	else std::cout << index << '\n';
//	std::cout << '\n';
//	//2.rfind() 从后往前找
//	int index2 = str.rfind("A");
//	if (index2 == std::string::npos) std::cout << "找不到\n";
//	else std::cout << index2 << '\n';
//	std::cout << '\n';
//	std::cout << '\n';
//	//3.find_first_of()
//	std::cout << str.find_first_of("CBW")<<'\n';// 返回第一个与CBW某一元素相同的元素下标
//	std::cout << '\n';
//	//4.find_first_not_of()
//	std::cout << str.find_first_not_of("CBW") << '\n';// 返回第一个不在CBW中的元素下标
//	std::cout << '\n';
//	//5.find_last_of() 从后往前找
//	std::cout << str.find_last_of("CBW") << '\n';// 返回最后一个与CBW某一元素相同的元素下标
//	std::cout << '\n';
//	//6.find_last_not_of()
//	std::cout << str.find_last_not_of("CBW") << '\n';// 返回最后一个不在CBW中的元素下标
//	std::cout << '\n';
//	return 0;
//}