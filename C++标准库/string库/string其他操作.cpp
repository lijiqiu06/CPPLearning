#include <iostream>
#include <string>

int main()
{
	//其他操作
	std::string str = "12.94AD32";
	int num = 311232;
	//1.to_string()
	std::string str2 = std::to_string(num);	
	std::cout << str2 << '\n';
	std::cout << '\n';
	//2.stoi() stof() string to int/string to float
	size_t n = 0;
	int num2 = std::stod(str,&n);
	std::cout << num2 <<"  " << n <<'\n';
	std::cout << '\n';
	//3.hash() 计算string对应地hash值
	std::hash<std::string> hs;
	std::cout << hs(str) << '\n';
	std::cout << '\n';
	return 0;
}