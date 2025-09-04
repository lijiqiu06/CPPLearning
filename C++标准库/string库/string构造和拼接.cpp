//#include <iostream>
//#include <string>
//
//int main()
//{
//    //  1.无参构造
//    std::string str1;
//    std::cout << "str1=" << str1 << "\n" << std::endl;
//    //  2.用等号初始化
//    std::string str2 = "hello world";
//    std::cout << "str2=" << str2 << "\n" << std::endl;
//    //  3.用char*构造
//    std::string str3("!!!!!!");
//    std::cout << "str3=" << str3 << "\n" << std::endl;
//    //  4.重复字符构造
//    std::string str4(11, 'A');
//    std::cout << "str4=" << str4 << "\n" << std::endl;
//    //  5.拷贝构造
//    std::string str5(str2);
//    std::cout << "str2=" << str2 << std::endl;
//    std::cout << "str5=" << str5 << "\n" << std::endl;
//    //  6.移动构造
//    std::string str6(move(str3));
//    std::cout << "str3=" << str3 << std::endl;
//    std::cout << "str6=" << str6 << "\n" << std::endl;
//    //  7.用指定范围内的字符进行构造
//    std::string str7(str2,4, 3);
//    std::cout << "str7=" << str7 << "\n" << std::endl;
//    //  8.字符串拼接
//    std::string str8 = str5 + str6;
//    std::cout << "str8=" << str8 << "\n" << std::endl;
//    return 0;
//}