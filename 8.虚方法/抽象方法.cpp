//	代码中对抽象方法（纯虚函数）的使用主要体现在以下几点：
// 
//	1.定义抽象基类：
//	在 Pet 类中，将 Play() 方法声明为纯虚函数 virtual void Play() = 0;，使得 Pet 成为抽象基类。
//	抽象基类无法直接实例化对象，只能作为父类被继承。
//	2.子类必须实现抽象方法：
//	Dog 和 Cat 类作为 Pet 的子类，必须重写 Play() 方法以实现具体功能。
//	在代码中，Dog::Play() 和 Cat::Play() 分别实现了狗和猫的玩耍行为，满足了抽象方法的实现要求。
//	3.通过父类指针调用抽象方法：
//	在 main 函数中，使用父类 Pet 的指针指向子类 Dog 和 Cat 的对象（Pet* dog1 = new Dog("Dog1")、Pet * cat1 = new Cat("Cat1")），
//	并通过这些指针调用 Play() 方法。由于 Play() 是纯虚函数且已在子类中实现，实际执行时会调用对应子类的 Play() 方法，体现了多态特性。
//	 
//	这种使用方式的核心作用是：通过抽象基类定义统一的接口（Play()），强制子类实现具体行为，同时利用多态性使不同子类对象可以通过父类指针被统一管理和调用，提高了代码的扩展性和灵活性。
#include <iostream>
#include <string>

class Pet
{
public:
	Pet(std::string Name);
	~Pet();
	static int GetCount();
	virtual void Play()=0;
protected:
	std::string Name;
private:
	static int Count;
};

int Pet::Count = 0;

Pet::Pet(std::string Name)
{
	this->Name = Name;
	Count++;
	std::cout << Name << " has born\n";
}

Pet::~Pet()
{
	Count--;
	std::cout << Name << " has gone\n";
}

int Pet::GetCount()
{
	return Count;
}

class Dog : public Pet
{
public:
	Dog(std::string Name);
	void Play();
};

Dog::Dog(std::string Name) : Pet(Name)
{
}

void Dog::Play()
{
	std::cout << "Dog " << Name << " is Playing\n";
}

class Cat : public Pet
{
public:
	Cat(std::string Name);
	void Play();
};

Cat::Cat(std::string Name) : Pet(Name)
{
}

void Cat::Play()
{
	std::cout << "Cat " << Name << " is Playing\n";
}

int main()
{
	//Dog* dog1 = new Dog("Dog1");//方式 1（子类指针）
	//Cat* cat1 = new Cat("Cat1");

	Pet* dog1 = new Dog("Dog1");//方式 2（父类指针 + 虚函数）
	Pet* cat1 = new Cat("Cat1");

	std::cout << "剩余" << Pet::GetCount() << "只\n";

	{
		Dog dog2("Dog2");
		Cat cat2("Cat2");
		std::cout << "剩余" << Pet::GetCount() << "只\n";
	}
	cat1->Play();
	dog1->Play();
	std::cout << "剩余" << Pet::GetCount() << "只\n";
	delete dog1;
	delete cat1;
	return 0;
}