#define _CRT_SECURE_NO_WARNINGS
////һ.�������
////C����
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
//	std::cout << "sum=" << sum << std::endl;//endl:'\n',ǿ��ˢ�»�����
//}

////����һ�����������ɿո�,����λ��ͬһ����,������ enter ��ʱ��������������͡�
////C����
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
//		ungetc(c, stdin);  //��ch�е�ֵ�Ż�stdin
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
//	std::cin.ignore(7);//cin.ignore���������ж���ָ���������ַ���Ĭ�� 1 ��������ֱ�������ض���ֹ�ַ���Ĭ�Ϻ��Ե��ļ������� EOF��
//	std::cin.getline(str,10);//cin.getline���������ж�ȡһ���ַ����洢���ַ�������ַ����У����Զ��������з���
//	std::cout << str << std::endl;
//	return 0;
//}

////std::cin.peek()/std::cin.get()
//#include <iostream>
//int main()
//{
//	std::cout << "����һ�λ���";
//	while (std::cin.peek() != '\n')//cin.peek()�鿴�������е���һ���ַ�����������������Ƴ�
//	{
//		std::cout<<(char)std::cin.get();//cin.get()���������ж�ȡ��������һ���ַ�
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
//	std::cout << "����һ�λ���";
//	std::cin.read(str, 20);//cin.read()���������ж�ȡָ���������ַ���ֱ�Ӵ洢���ַ�������
//	std::cout << "�ַ����ռ������ַ���Ϊ��" << std::cin.gcount() << std::endl;//cin.gcount()������һ������������� cin.read() �� cin.getline()��ʵ�ʶ�ȡ���ַ���
//	std::cout << "�ַ�������Ϊ��"; 
//	std::cout.write(str, 20) << std::endl;//cout.write()�������д��ָ�����ȵ��ַ�����
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
//		std::cout.precision(i);//cout.precision()���ø���������ľ���
//		std::cout << PI << "����Ϊ" << i << std::endl;
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
//	std::cout << "����һ���ַ���";
//	std::cin.width(5);//cin.width()��������������ȡ n-1 ���ַ����ַ�����(���ո���ֹͣ)
//	while (std::cin >> str)
//	{
//		std::cout.width(width++);//cout.width()�����������С�ֶο��Ϊ n ���ַ�������ʱ���ո�,�Ҷ��룩
//		std::cout << str << std::endl;
//		std::cin.width(5);
//	}
//
//	return 0;
//}