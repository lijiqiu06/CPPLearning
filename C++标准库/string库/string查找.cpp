//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string str = "AABBCCDDCCDDEAAEFBBF";
//	//1.find() �����Ӵ������ҵ������Ӵ���Ԫ���±꣬�Ҳ����򷵻�npos
//	int index = str.find("A");
//	if (index == std::string::npos) std::cout << "�Ҳ���\n";
//	else std::cout << index << '\n';
//	std::cout << '\n';
//	//2.rfind() �Ӻ���ǰ��
//	int index2 = str.rfind("A");
//	if (index2 == std::string::npos) std::cout << "�Ҳ���\n";
//	else std::cout << index2 << '\n';
//	std::cout << '\n';
//	std::cout << '\n';
//	//3.find_first_of()
//	std::cout << str.find_first_of("CBW")<<'\n';// ���ص�һ����CBWĳһԪ����ͬ��Ԫ���±�
//	std::cout << '\n';
//	//4.find_first_not_of()
//	std::cout << str.find_first_not_of("CBW") << '\n';// ���ص�һ������CBW�е�Ԫ���±�
//	std::cout << '\n';
//	//5.find_last_of() �Ӻ���ǰ��
//	std::cout << str.find_last_of("CBW") << '\n';// �������һ����CBWĳһԪ����ͬ��Ԫ���±�
//	std::cout << '\n';
//	//6.find_last_not_of()
//	std::cout << str.find_last_not_of("CBW") << '\n';// �������һ������CBW�е�Ԫ���±�
//	std::cout << '\n';
//	return 0;
//}