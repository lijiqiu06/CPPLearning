#include <iostream>
#include <string>

class Animal
{
public:
	Animal(std::string Name);
	virtual void makeSound();
protected:
	std::string Name;
};

Animal::Animal(std::string Name)
{
	this->Name = Name;
}

void Animal::makeSound()
{
	std::cout <<Name<< " 在叫\n";
}

class Dog :public Animal
{
public:
	Dog(std::string Name);
	void makeSound();
	
};

Dog::Dog(std::string Name):Animal(Name)
{ }

void Dog::makeSound()
{
	std::cout <<Name<< " 在叫 汪汪汪\n";
}

class Cat :public Animal
{
public:
	Cat(std::string Name);
	void makeSound();

};

Cat::Cat(std::string Name) :Animal(Name)
{
}

void Cat::makeSound()
{
	std::cout << Name << " 在叫 喵喵喵\n";
}

int main()
{
	Animal* animal1 = new Dog("狗");
	Animal* animal2 = new Cat("猫");

	Dog* dog = dynamic_cast<Dog*>(animal1);
	if (dog != nullptr)
	{
		dog->makeSound();
	}
	else
	{
		std::cout << "animal1 无法转换为 Dog\n";
	}

	Cat* cat = dynamic_cast<Cat*>(animal2);
	if (cat != nullptr)
	{
		cat->makeSound();
	}
	else
	{
		std::cout << "animal2 无法转换为 Cat\n";
	}

	Cat* cat1 = dynamic_cast<Cat*>(animal1);
	if (cat1 != nullptr)
	{
		cat1->makeSound();
	}
	else
	{
		std::cout << "animal1 无法转换为 Cat\n";
	}

	delete animal1;
	delete animal2;
	animal1 = nullptr;
	animal2 = nullptr;
	dog = nullptr;
	cat = nullptr;
	cat1 = nullptr;
	return 0;
}