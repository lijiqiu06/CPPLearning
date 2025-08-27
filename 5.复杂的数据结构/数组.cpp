#define _CRT_SECURE_NO_WARNINGS
////定义容纳十个整数的数组，由用户输入，计算和，平均值并输出
//#include <iostream>
//#define NUM 10
//int main()
//{
//	int arr[NUM];
//	std::cout << "输入十个数：";
//	for (int i = 0;i < NUM;i++)
//	{
//		while (!(std::cin >> arr[i]))
//		{
//			std::cout << "重新输入\n";
//			std::cin.clear();
//			std::cin.ignore(100, 'n');
//		}
//	}
//	int sum=0;
//	for (int i = 0;i < NUM;i++)
//	{
//		 sum+=arr[i];
//	}
//	std::cout << "sum:" << sum << "\n";
//	std::cout << "average:" << sum/10.0 << std::endl;
//	return 0;
//}



////分别用C,C++将用户输入的字符串打印
////C
//#include <stdio.h>
//int main()
//{
//	char str[100];
//	scanf("%s", &str);
//	printf("%s\n", str);
//
//	return 0;
//}
//
////C++
//#include <iostream>
//#include <string>
//int main()
//{
//	std::string str;
//	std::cout << "输入字符串：";
//	//std::cin >> str;//无空格时可用
//	std::getline(std::cin, str);//有空格时用
//	std::cout << str << std::endl;
//	return 0;
//}



////提取子字符串 substr()
//#include <iostream>
//#include <string>
//int main() {
//    std::string str = "Hello, C++ String";
//    // 从索引 7 开始，提取 5 个字符（"C++ S"）
//    std::string sub = str.substr(7, 5);
//    std::cout << "子字符串: " << sub << std::endl;
//    return 0;
//}



////比较字符串 ==、!=、compare()
//#include <iostream>
//#include <string>
//int main() {
//    std::string str1 = "Apple", str2 = "Banana";
//    // 直接用 == 比较
//    if (str1 == str2) {
//        std::cout << "字符串相等" << std::endl;
//    }
//    else {
//        std::cout << "字符串不相等" << std::endl;
//    }
//
//    // 用 compare 方法比较（返回 0 表示相等，非 0 表示不等）
//    int cmp = str1.compare(str2);
//    if (cmp == 0) {
//        std::cout << "compare 判定相等" << std::endl;
//    }
//    else {
//        std::cout << "compare 判定不等" << std::endl;
//    }
//    return 0;
//}



//// 添加字符串 += 或 append()
//#include <iostream>
//#include <string>
//int main()
//{
//	std::string str1 = "abc", str2 = "def";
//	str1.append(str2);
//	std::cout << "str1=" << str1 << '\n';
//	str1 += str2;
//	std::cout << "str1=" << str1 << '\n';
//	return 0;
//}



////搜索字符串 find()
//#include <iostream>
//#include <string>
//int main() 
//{
//    std::string str = "C++ String is Powerful";
//    // 找 "Powerful" 的位置
//    size_t pos = str.find("is");
//    if (pos != std::string::npos) // 当找不到该子串时，返回一个特殊值 std::string::npos
//    {
//        std::cout << "找到目标，位置: " << pos << std::endl;
//    }
//    else 
//    {
//        std::cout << "未找到目标" << std::endl;
//    }
//    return 0;
//}