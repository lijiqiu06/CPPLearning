//#include <iostream>
//#include <array>
//#include <string>
//
//class User
//{
//public:
//	User()
//	{
//		this->name = "";
//		this->age = 0;
//	}
//	User(std::string name,unsigned int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void SayHello()
//	{
//		std::cout << "My name is " << name << std::endl;
//		std::cout << "I am " << age <<" years old" << std::endl;
//	}
//private:
//	std::string name;
//	unsigned int age;
//};
//
//
//int main()
//{
//	std::array<User, 5> users{ User("a",1), User("b",2), User("c",3)};
//
//	std::array<User, 5>::iterator it = users.begin();
//	for (; it != users.end(); it++)
//	{
//		it->SayHello();
//		std::cout << std::endl;
//	}
//
//	return 0;
//}