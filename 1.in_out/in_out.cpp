#define _CRT_SECURE_NO_WARNINGS
////一.数组求和
////C语言
//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int sum = 0;
//	for (int i = 0;i < size;i++)
//	{
//		sum += arr[i];
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

////C++
//#include <iostream>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int sum = 0;
//	for (int i = 0;i < size;i++)
//	{
//		sum += arr[i];
//	}
//	std::cout << "sum=" << sum << std::endl;//endl:'\n',强制刷新缓冲区
//}

////输入一串整数和若干空格,整数位于同一行中,当按下 enter 键时，对所有整数求和。
////C语言
//#include <stdio.h>
//int main()
//{
//	int num;
//	int sum=0;
//	char c;
//	while (scanf("%d", &num))
//	{
//		sum += num;
//		while ((c=getchar()) == ' ');
//		if (c == '\n')break;
//		ungetc(c, stdin);  //将ch中的值放回stdin
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}

//C++
//#include <iostream>
//int main()
//{
//	int num;
//	int sum = 0;
//	
//	while (std::cin>>num)
//	{
//		sum += num;
//		while (std::cin.peek() == ' ')
//		{
//			std::cin.get();
//		}
//		if (std::cin.peek() == '\n')break;
//		
//	}
//
//	std::cout << "sum:" << sum << std::endl;
//	return 0;
//}

////std::cin.ignore()/std::cin.getline()
//#include <iostream>
//int main()
//{
//	char str[20];
//	std::cin.ignore(7);//cin.ignore从输入流中丢弃指定数量的字符（默认 1 个），或直到遇到特定终止字符（默认忽略到文件结束符 EOF）
//	std::cin.getline(str,10);//cin.getline从输入流中读取一行字符，存储到字符数组或字符串中，并自动丢弃换行符。
//	std::cout << str << std::endl;
//	return 0;
//}

////std::cin.peek()/std::cin.get()
//#include <iostream>
//int main()
//{
//	std::cout << "输入一段话：";
//	while (std::cin.peek() != '\n')//cin.peek()查看输入流中的下一个字符，但不将其从流中移除
//	{
//		std::cout<<(char)std::cin.get();//cin.get()从输入流中读取并返回下一个字符
//	}
//	std::cout << std::endl;
//
//	return 0;
//}

////std::cin.read()/std::cin.gcount()/std::cout.write()
//#include <iostream>
//int main()
//{
//	char str[100];
//	std::cout << "输入一段话：";
//	std::cin.read(str, 20);//cin.read()从输入流中读取指定数量的字符，直接存储到字符数组中
//	std::cout << "字符串收集到的字符数为：" << std::cin.gcount() << std::endl;//cin.gcount()返回上一次输入操作（如 cin.read() 或 cin.getline()）实际读取的字符数
//	std::cout << "字符串内容为："; 
//	std::cout.write(str, 20) << std::endl;//cout.write()向输出流写入指定长度的字符序列
//	return 0;
//}

////std::cout.precision()
//#include <iostream>
//#include <math.h>
//
//#define PI 3.14159265358979323846
//
//int main()
//{
//	for (int i = 1;i <= 9;i++)
//	{
//		std::cout.precision(i);//cout.precision()设置浮点数输出的精度
//		std::cout << PI << "精度为" << i << std::endl;
//	}
//	return 0;
//}

////std::cin.width()/std::cout.width()
////abcdefghijkhmnopqrstuvwxyz
//#include <iostream>
//
//int main()
//{
//	int width = 4;
//	char str[27];
//	std::cout << "输入一串字符：";
//	std::cin.width(5);//cin.width()设置输入流最多读取 n-1 个字符到字符串中(遇空格换行停止)
//	while (std::cin >> str)
//	{
//		std::cout.width(width++);//cout.width()设置输出的最小字段宽度为 n 个字符（不足时补空格,右对齐）
//		std::cout << str << std::endl;
//		std::cin.width(5);
//	}
//
//	return 0;
//}