//#include <iostream>
//#include <string>
//
//int main()
//{
//    //  1.�޲ι���
//    std::string str1;
//    std::cout << "str1=" << str1 << "\n" << std::endl;
//    //  2.�õȺų�ʼ��
//    std::string str2 = "hello world";
//    std::cout << "str2=" << str2 << "\n" << std::endl;
//    //  3.��char*����
//    std::string str3("!!!!!!");
//    std::cout << "str3=" << str3 << "\n" << std::endl;
//    //  4.�ظ��ַ�����
//    std::string str4(11, 'A');
//    std::cout << "str4=" << str4 << "\n" << std::endl;
//    //  5.��������
//    std::string str5(str2);
//    std::cout << "str2=" << str2 << std::endl;
//    std::cout << "str5=" << str5 << "\n" << std::endl;
//    //  6.�ƶ�����
//    std::string str6(move(str3));
//    std::cout << "str3=" << str3 << std::endl;
//    std::cout << "str6=" << str6 << "\n" << std::endl;
//    //  7.��ָ����Χ�ڵ��ַ����й���
//    std::string str7(str2,4, 3);
//    std::cout << "str7=" << str7 << "\n" << std::endl;
//    //  8.�ַ���ƴ��
//    std::string str8 = str5 + str6;
//    std::cout << "str8=" << str8 << "\n" << std::endl;
//    return 0;
//}