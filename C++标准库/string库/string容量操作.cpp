//#include <iostream>
//#include <string>
//
//int main()
//{
//	//��������
//	std::string str = "Hello World";
//	std::string str2 = "hello";
//	//1.empty() �ж��Ƿ�Ϊ��
//	std::cout << str.empty() << '\n';
//	std::cout << '\n';
//	//2.size() length() �����ֽ���
//	std::cout << str.size() << '\n';
//	std::cout << str.length() << '\n';
//	std::cout << '\n';
//	//3.max_size() �����������
//	std::cout << str.max_size() << '\n';
//	std::cout << '\n';
//	//4.resize(size_type count) resize(size_type count,CharT ch); ���Ĵ�С
//	str2.resize(3);
//	std::cout << str2 << '\n';
//	std::cout << str2.size() << '\n';
//	str2.resize(20, 'A');
//	std::cout << str2 << '\n';
//	std::cout << str2.size() << '\n';
//	std::cout << '\n';
//	//5.capacity() ��������
//	std::cout << str.capacity() << "\n";
//	std::cout << '\n';
//	//6.reserve() ���·����ڴ�  resize() �ı� ��ʵ�ʴ洢���ַ�������reserve() �ı� ������ܴ洢���ַ���
//	str.reserve(20);
//	std::cout << str.size() << '\n';
//	std::cout << str.capacity() << "\n";
//	std::cout << '\n';
//	//7.shrink_to_fit() �ͷŶ�������
//	str.shrink_to_fit();
//	std::cout << str.size() << '\n';
//	std::cout << str.capacity() << "\n";
//	std::cout << '\n';
//	return 0;
//}