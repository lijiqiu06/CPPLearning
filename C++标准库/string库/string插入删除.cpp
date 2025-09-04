//#include <iostream>
//#include <string>
//
//int main()
//{
//	//插入与删除 append() insert() erase() 有相应用迭代器进行的操作
//	std::string str1 = "hello World";
//	std::string str2 = "hello";
//	//1.append() +=; 在最后追加字符串
//	str1.append(str2);
//	std::cout << str1 << '\n';
//	std::cout << '\n';
//	//2.insert() 在中间插入字符串
//	str1.insert(3, str2, 0, 3);
//	std::cout << str1 << '\n';
//	std::cout << '\n';
//	//3.push_back() 在最后追加一个字符
//	str1.push_back('a');
//	std::cout << str1 << '\n';
//	std::cout << '\n';
//	//4.pop_back() 在最后删除一个字符
//	str1.pop_back();
//	std::cout << str1 << '\n';
//	std::cout << '\n'; 
//	//5.clear() 全部清除
//	str1.clear();
//	std::cout << str1 << '\n';
//	std::cout << '\n';
//	//6.erase() 在指定位置清除指定数量字符
//	str2.erase(3,1);
//	std::cout << str2 << '\n';
//	std::cout << '\n';
//	return 0;
//}