////��̬���� new delete[]
//#include <iostream>
//#include <string>
//#include <climits>
//int main()
//{
//	std::cout << "�������������С��";
//	int count = 0;
//	while (1)
//	{
//		if (!(std::cin >> count))
//		{
//			std::cout << "��������\n";
//			std::cin.clear(); // �������״̬
//			// ���Ի�������ʣ�����Ч����
//			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//			continue;
//		}
//
//		if (count == 0)
//		{
//			std::cout << "�������\n";
//			break;
//		}
//
//		if (count < 0)
//		{
//			std::cout << "������������\n";
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
//		std::cout << "�������������С��";
//	}
//	return 0;
//}