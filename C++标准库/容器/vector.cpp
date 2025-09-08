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
//		std::cout << "id=" << id << " 无参构造\n";
//	}
//	User(unsigned int id,std::string name,unsigned int age)
//	{
//		this->id = id;
//		this->name = name;
//		this->age = age;
//		std::cout << "id=" << id << " 三参构造\n";
//	}
//	User(const User& user)
//	{
//		this->id = user.id;
//		this->name = user.name;
//		this->age = user.age;
//		std::cout << "id=" << id << " 拷贝构造\n";
//	}
//	User(User&& user)noexcept
//	{
//		this->id = std::move(user.id);
//		this->name = std::move(user.name);
//		this->age = std::move(user.age);
//		std::cout << "id=" << id << " 移动构造\n";
//	}
//	// 拷贝赋值运算符（新增）当类中存在移动构造函数时，编译器会自动删除默认的拷贝赋值运算符，
//	// 导致这些操作触发 “引用已删除函数” 的错误。
//	User& operator=(const User& user)
//	{
//		if (this != &user) // 避免自赋值
//		{
//			this->id = user.id;
//			this->name = user.name;
//			this->age = user.age;
//		}
//		std::cout << "id=" << id << " 拷贝赋值\n";
//		return *this;
//	}
//
//	// 移动赋值运算符（新增）
//	User& operator=(User&& user) noexcept
//	{
//		if (this != &user) // 避免自赋值
//		{
//			this->id = std::move(user.id);
//			this->name = std::move(user.name);
//			this->age = std::move(user.age);
//		}
//		std::cout << "id=" << id << " 移动赋值\n";
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
//	std::cout << "push_back() emplace_back() 区别\n";
//	users1.push_back(User(1, "a", 11));
//	users1.clear();
//	std::cout << "***********************************\n";
//	users1.emplace_back(2, "b", 22);
//	std::cout << users1.size() << std::endl;
//	std::cout << users1.capacity() << std::endl;
//
//	std::cout << "***********************************\n" << "***********************************\n";
//	std::cout << "insert() emplace() 区别\n";
//	users2.insert(users2.begin(), User(3, "c", 33));
//	users2.clear();
//	std::cout << "***********************************\n";
//	users2.emplace(users2.begin(), 4, "d", 44);
//
//	std::cout << users1.size() << std::endl;
//	std::cout << users1.capacity() << std::endl;
//	return 0;
//}