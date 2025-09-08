#include <iostream>
#include <forward_list>

int main()
{
	std::forward_list<int> fs = { 1,3,6,9,2,6,7,2,2 };
	std::forward_list<int> fs2 = { 2,2,2,2,2,2,2,2,2,2 };
	std::cout << "��������\n";
	std::forward_list<int>::iterator it1 = fs.begin();
	for (; it1 != fs.end(); it1++)
	{
		std::cout << *it1 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";

	std::cout << "�ڵ���������ֵ\n";
	std::forward_list<int>::iterator it2 = fs.begin();
	it2++;
	it2++;
	fs.insert_after(it2,3);
	it2 = fs.begin();
	for (; it2 != fs.end(); it2++)
	{
		std::cout << *it2 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";

	std::cout << "�ڵ�2���ɾ��ֵ\n";
	std::forward_list<int>::iterator it3 = fs.begin();
	it3++;
	fs.erase_after(it3);
	it3 = fs.begin();
	for (; it3 != fs.end(); it3++)
	{
		std::cout << *it3 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";

	std::cout << "ͷ������\n";
	std::forward_list<int>::iterator it4 = fs.begin();
	it4++;
	fs.push_front(1);
	it4 = fs.begin();
	for (; it4 != fs.end(); it4++)
	{
		std::cout << *it4 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";

	std::cout << "merge() �ϲ����������������\n";
	fs.sort();
	fs2.sort();
	fs.merge(fs2);
	std::forward_list<int>::iterator it5 = fs.begin();
	for (; it5 != fs.end(); it5++)
	{
		std::cout << *it5 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";

	fs = { 1,3,6,9,2,6,7,2,2 };
	fs2 = { 2,2,2,2,2,2,2,2,2,2 };
	std::cout << "splice_after() ����һ�� forward_list �ƶ�Ԫ��\n";
	std::forward_list<int>::iterator it6 = fs.begin();
	it6++;
	fs.splice_after(it6, fs2);
	it6 = fs.begin();
	for (; it6 != fs.end(); it6++)
	{
		std::cout << *it6 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";

	fs = { 1,3,6,9,2,6,7,2,2 };
	fs2 = { 2,2,2,2,2,2,2,2,2,2 };
	std::cout << "remove() �Ƴ�Ԫ��\n";
	std::forward_list<int>::iterator it7 = fs.begin();
	fs.remove(2);
	for (; it7 != fs.end(); it7++)
	{
		std::cout << *it7 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";

	std::cout << "remove_if() �Ƴ������ض���׼��Ԫ��\n";
	fs.remove_if([](const int& n) {return n < 3; });
	std::forward_list<int>::iterator it8 = fs.begin();
	for (; it8 != fs.end(); it8++)
	{
		std::cout << *it8 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";

	std::cout << "��תԪ�ص�˳��\n";
	fs.reverse();
	std::forward_list<int>::iterator it9 = fs.begin();
	for (; it9 != fs.end(); it9++)
	{
		std::cout << *it9 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";

	fs2 = {1,2,2,2,2,2,2,2,2,2,2 };
	std::cout << "�Ƴ��������ظ�Ԫ��\n";
	fs2.unique();
	std::forward_list<int>::iterator it10 = fs2.begin();
	for (; it10 != fs2.end(); it10++)
	{
		std::cout << *it10 << " ";
	}
	std::cout << std::endl;
	std::cout << "*********************************\n";
	return 0;
}