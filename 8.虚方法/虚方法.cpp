//#include <iostream>
//#include <string>
//
//class Pet
//{
//public:
//	Pet(std::string Name);
//	~Pet();
//	static int GetCount();
//	virtual void Play();
//protected:
//	std::string Name;
//private:
//	static int Count;
//};
//
//int Pet::Count = 0;
//
//Pet::Pet(std::string Name)
//{
//	this->Name = Name;
//	Count++;
//	std::cout << Name << " has born\n";
//}
//
//Pet::~Pet()
//{
//	Count--;
//	std::cout << Name << " has gone\n";
//}
//
//int Pet::GetCount()
//{
//	return Count;
//}
//
//void Pet::Play()
//{
//	std::cout << Name << " is Playing\n";
//}
//
//class Dog : public Pet
//{
//public:
//	Dog(std::string Name);
//	void Play();
//};
//
//Dog::Dog(std::string Name) : Pet(Name)
//{
//}
//
//void Dog::Play()
//{
//	std::cout << "Dog " << Name << " is Playing\n";
//}
//
//class Cat : public Pet
//{
//public:
//	Cat(std::string Name);
//	void Play();
//};
//
//Cat::Cat(std::string Name) : Pet(Name)
//{
//}
//
//void Cat::Play()
//{
//	std::cout << "Cat " << Name << " is Playing\n";
//}
//
//int main()
//{
//	//Dog* dog1 = new Dog("Dog1");//方式 1（子类指针）
//	//Cat* cat1 = new Cat("Cat1");
//
//	Pet* dog1 = new Dog("Dog1");//方式 2（父类指针 + 虚函数）
//	Pet* cat1 = new Cat("Cat1");
//
//	//	方式 1（子类指针）：适合需要直接操作子类特有功能的场景，无多态特性。
//	//	方式 2（父类指针 + 虚函数）：适合统一管理不同子类对象，通过多态实现「同接口、不同行为」，
//	//	是面向对象设计中「开闭原则」的典型应用（对扩展开放，对修改关闭）。
//	//	核心意义：
//	//	1.统一接口，不同实现
//	//	用 Pet* 指针可以统一管理 Dog、Cat 等所有子类对象，调用 Play() 时会根据对象实际类型执行对应实现，无需关心具体是哪种宠物。
//	//	2.扩展性强
//	//	未来新增 Bird、Fish 等子类时，只需继承 Pet 并重写 Play()，现有代码（如用 Pet* 数组管理的逻辑）无需修改就能兼容新类型。
//	//	3.代码简洁性
//	//	例如可以用一个父类指针数组存储所有宠物，遍历调用 Play()：
//	std::cout << "剩余" << Pet::GetCount() << "只\n";
//
//	{
//		Dog dog2("Dog2");
//		Cat cat2("Cat2");
//		std::cout << "剩余" << Pet::GetCount() << "只\n";
//	}
//	cat1->Play();
//	dog1->Play();
//	std::cout << "剩余" << Pet::GetCount() << "只\n";
//  delete dog1;
//  delete cat1;
//	return 0;
//}