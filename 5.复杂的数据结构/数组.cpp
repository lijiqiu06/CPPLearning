#define _CRT_SECURE_NO_WARNINGS
////��������ʮ�����������飬���û����룬����ͣ�ƽ��ֵ�����
//#include <iostream>
//#define NUM 10
//int main()
//{
//	int arr[NUM];
//	std::cout << "����ʮ������";
//	for (int i = 0;i < NUM;i++)
//	{
//		while (!(std::cin >> arr[i]))
//		{
//			std::cout << "��������\n";
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



////�ֱ���C,C++���û�������ַ�����ӡ
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
//	std::cout << "�����ַ�����";
//	//std::cin >> str;//�޿ո�ʱ����
//	std::getline(std::cin, str);//�пո�ʱ��
//	std::cout << str << std::endl;
//	return 0;
//}



////��ȡ���ַ��� substr()
//#include <iostream>
//#include <string>
//int main() {
//    std::string str = "Hello, C++ String";
//    // ������ 7 ��ʼ����ȡ 5 ���ַ���"C++ S"��
//    std::string sub = str.substr(7, 5);
//    std::cout << "���ַ���: " << sub << std::endl;
//    return 0;
//}



////�Ƚ��ַ��� ==��!=��compare()
//#include <iostream>
//#include <string>
//int main() {
//    std::string str1 = "Apple", str2 = "Banana";
//    // ֱ���� == �Ƚ�
//    if (str1 == str2) {
//        std::cout << "�ַ������" << std::endl;
//    }
//    else {
//        std::cout << "�ַ��������" << std::endl;
//    }
//
//    // �� compare �����Ƚϣ����� 0 ��ʾ��ȣ��� 0 ��ʾ���ȣ�
//    int cmp = str1.compare(str2);
//    if (cmp == 0) {
//        std::cout << "compare �ж����" << std::endl;
//    }
//    else {
//        std::cout << "compare �ж�����" << std::endl;
//    }
//    return 0;
//}



//// ����ַ��� += �� append()
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



////�����ַ��� find()
//#include <iostream>
//#include <string>
//int main() 
//{
//    std::string str = "C++ String is Powerful";
//    // �� "Powerful" ��λ��
//    size_t pos = str.find("is");
//    if (pos != std::string::npos) // ���Ҳ������Ӵ�ʱ������һ������ֵ std::string::npos
//    {
//        std::cout << "�ҵ�Ŀ�꣬λ��: " << pos << std::endl;
//    }
//    else 
//    {
//        std::cout << "δ�ҵ�Ŀ��" << std::endl;
//    }
//    return 0;
//}