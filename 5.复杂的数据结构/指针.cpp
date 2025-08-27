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
//		std::cout << *nameptr << " at " << static_cast<void*>(nameptr) << "\n";//C++ 中，char* 类型被视为字符串，cout 遇到 char* 时会尝试打印整个字符串,
//																			   //数组没有显式加 \0 结尾，所以 cout 会从 nameptr 地址开始，一直往后读内存，直到找到随机的 \0，导致输出一堆乱码,
//																			   //用 static_cast<void*>(nameptr) 看纯地址，避免 cout 把 char* 当字符串解析。
//		nameptr++;
//	}
//	return 0;
//}