//#include <iostream>
//#include <string>
//#include <vector>
//
//class User
//{
//public:
//	User()
//	{
//		this->id = 0;
//		this->name = "";
//		this->age = 0;
//		std::cout << "id=" << id << " �޲ι���\n";
//	}
//	User(unsigned int id,std::string name,unsigned int age)
//	{
//		this->id = id;
//		this->name = name;
//		this->age = age;
//		std::cout << "id=" << id << " ���ι���\n";
//	}
//	User(const User& user)
//	{
//		this->id = user.id;
//		this->name = user.name;
//		this->age = user.age;
//		std::cout << "id=" << id << " ��������\n";
//	}
//	User(User&& user)noexcept
//	{
//		this->id = std::move(user.id);
//		this->name = std::move(user.name);
//		this->age = std::move(user.age);
//		std::cout << "id=" << id << " �ƶ�����\n";
//	}
//	// ������ֵ������������������д����ƶ����캯��ʱ�����������Զ�ɾ��Ĭ�ϵĿ�����ֵ�������
//	// ������Щ�������� ��������ɾ�������� �Ĵ���
//	User& operator=(const User& user)
//	{
//		if (this != &user) // �����Ը�ֵ
//		{
//			this->id = user.id;
//			this->name = user.name;
//			this->age = user.age;
//		}
//		std::cout << "id=" << id << " ������ֵ\n";
//		return *this;
//	}
//
//	// �ƶ���ֵ�������������
//	User& operator=(User&& user) noexcept
//	{
//		if (this != &user) // �����Ը�ֵ
//		{
//			this->id = std::move(user.id);
//			this->name = std::move(user.name);
//			this->age = std::move(user.age);
//		}
//		std::cout << "id=" << id << " �ƶ���ֵ\n";
//		return *this;
//	}
//private:
//	unsigned int id;
//	std::string name;
//	unsigned int age;
//};
//
//int main()
//{
//	std::vector<User> users1;
//	std::vector<User> users2;
//	std::cout << "push_back() emplace_back() ����\n";
//	users1.push_back(User(1, "a", 11));
//	users1.clear();
//	std::cout << "***********************************\n";
//	users1.emplace_back(2, "b", 22);
//	std::cout << users1.size() << std::endl;
//	std::cout << users1.capacity() << std::endl;
//
//	std::cout << "***********************************\n" << "***********************************\n";
//	std::cout << "insert() emplace() ����\n";
//	users2.insert(users2.begin(), User(3, "c", 33));
//	users2.clear();
//	std::cout << "***********************************\n";
//	users2.emplace(users2.begin(), 4, "d", 44);
//
//	std::cout << users1.size() << std::endl;
//	std::cout << users1.capacity() << std::endl;
//	return 0;
//}