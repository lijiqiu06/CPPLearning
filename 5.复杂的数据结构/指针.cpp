//#include <iostream>
//int main()
//{
//	int num[] = { 1,2,3,4,5 };
//	char name[] = { 'a','b','c','d','e' };
//	int* numptr = num;
//	char* nameptr = name;
//	int num_size = sizeof(num) / sizeof(num[0]);
//	int name_size = sizeof(name) / sizeof(name[0]);
//	for (int i = 0;i < num_size;i++)
//	{
//		std::cout << *numptr << " at " << static_cast<void*>(numptr) << "\n";
//		numptr++;
//	}
//	std::cout << '\n';
//	for (int i = 0;i < name_size;i++)
//	{
//		std::cout << *nameptr << " at " << static_cast<void*>(nameptr) << "\n";//C++ �У�char* ���ͱ���Ϊ�ַ�����cout ���� char* ʱ�᳢�Դ�ӡ�����ַ���,
//																			   //����û����ʽ�� \0 ��β������ cout ��� nameptr ��ַ��ʼ��һֱ������ڴ棬ֱ���ҵ������ \0���������һ������,
//																			   //�� static_cast<void*>(nameptr) ������ַ������ cout �� char* ���ַ���������
//		nameptr++;
//	}
//	return 0;
//}