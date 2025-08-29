////动态数组 new delete[]
//#include <iostream>
//#include <string>
//#include <climits>
//int main()
//{
//	std::cout << "输入整型数组大小：";
//	int count = 0;
//	while (1)
//	{
//		if (!(std::cin >> count))
//		{
//			std::cout << "输入有误\n";
//			std::cin.clear(); // 清除错误状态
//			// 忽略缓冲区中剩余的无效输入
//			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//			continue;
//		}
//
//		if (count == 0)
//		{
//			std::cout << "程序结束\n";
//			break;
//		}
//
//		if (count < 0)
//		{
//			std::cout << "必须输入正数\n";
//			continue;
//		}
//
//
//		int* arr = new int[count];
//		for (int i = 0; i < count; i++)
//		{
//			arr[i] = i;
//		}
//
//		for (int i = 0; i < count; i++)
//		{
//			std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
//		}
//		delete[] arr;
//		arr = nullptr;
//		std::cout << "----------------------------------------------------\n";
//
//		std::cout << "输入整型数组大小：";
//	}
//	return 0;
//}