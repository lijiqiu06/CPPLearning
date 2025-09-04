//#include <iostream>
//#include <string>
//
//int main()
//{
//	//容量操作
//	std::string str = "Hello World";
//	std::string str2 = "hello";
//	//1.empty() 判断是否为空
//	std::cout << str.empty() << '\n';
//	std::cout << '\n';
//	//2.size() length() 返回字节数
//	std::cout << str.size() << '\n';
//	std::cout << str.length() << '\n';
//	std::cout << '\n';
//	//3.max_size() 返回最大容量
//	std::cout << str.max_size() << '\n';
//	std::cout << '\n';
//	//4.resize(size_type count) resize(size_type count,CharT ch); 更改大小
//	str2.resize(3);
//	std::cout << str2 << '\n';
//	std::cout << str2.size() << '\n';
//	str2.resize(20, 'A');
//	std::cout << str2 << '\n';
//	std::cout << str2.size() << '\n';
//	std::cout << '\n';
//	//5.capacity() 返回容量
//	std::cout << str.capacity() << "\n";
//	std::cout << '\n';
//	//6.reserve() 重新分配内存  resize() 改变 “实际存储的字符数”，reserve() 改变 “最多能存储的字符数
//	str.reserve(20);
//	std::cout << str.size() << '\n';
//	std::cout << str.capacity() << "\n";
//	std::cout << '\n';
//	//7.shrink_to_fit() 释放多余容量
//	str.shrink_to_fit();
//	std::cout << str.size() << '\n';
//	std::cout << str.capacity() << "\n";
//	std::cout << '\n';
//	return 0;
//}