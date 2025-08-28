//	在这段代码中，使用 `static int Count;` 作为 `Pet` 类的私有静态成员，主要有以下好处：
//	
//	1. 实现跨对象的状态共享 
//	静态成员 `Count` 不属于任何特定对象，而是被 `Pet` 类及其所有子类（`Dog`、`Cat`）的 * *所有实例共享 * *。
//	这使得它能准确追踪“所有宠物的总数量”——无论创建 `Dog` 还是 `Cat` 对象，都会共同操作同一个 `Count` 变量，确保数量统计的一致性。
//	
//	2. 简化全局状态的管理
//	如果不使用静态成员，可能需要定义一个全局变量来记录宠物数量。
//	但全局变量会破坏封装性（任何代码都能修改它），而 `static int Count` 被声明为 `private`，
//	 只能通过 `Pet` 类的成员函数（如构造 / 析构函数、`GetCount()`）控制，确保了数据的安全性和修改的可控性。
//	
//	3. 反映类级别的属性
//	“宠物总数量”是一个 * *类级别的属性 * *（属于“宠物”这个群体，而非某个具体宠物），
//	静态成员恰好适合表示这种不属于单个实例的特征。通过 `Pet::GetCount()` 直接调用，无需创建对象就能获取数量，逻辑上更合理。
//	
//	4. 自动维护生命周期
//	静态成员 `Count` 的生命周期与程序一致，在第一次使用 `Pet` 类时初始化，在程序结束时销毁。
//	这保证了从第一个宠物创建到最后一个宠物销毁，`Count` 始终能正确记录数量变化（创建时 `Count+ + `，销毁时 `Count- - `）。
//	
//	简单说，`static int Count` 用最少的代码实现了“跨对象共享状态、安全追踪总数量”的需求，既保证了数据的封装性，又简化了对“类级别特征”的管理。

#include <iostream>
#include <string>

class Pet
{
public:
	Pet(std::string Name);
	~Pet();
	static int GetCount();
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
};

Dog::Dog(std::string Name) : Pet(Name)
{ 
}

class Cat : public Pet
{
public:
	Cat(std::string Name);

};

Cat::Cat(std::string Name) : Pet(Name)
{
}

int main()
{
	Dog dog1("Dog1");
	Cat cat1("Cat1");

	std::cout << "剩余" << Pet::GetCount() << "只\n";

	{
		Dog dog2("Dog2");
		Cat cat2("Cat2");
		std::cout << "剩余" << Pet::GetCount() << "只\n";
	}

	std::cout << "剩余" << Pet::GetCount() << "只\n";
	return 0;
}