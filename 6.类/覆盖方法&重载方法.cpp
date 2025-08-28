////¸²¸Ç
//#include <iostream>
//#include <string>
//
//class Animal
//{
//public :
//	std::string name;
//
//	Animal(std::string Name);
//	~Animal();
//	void eat();
//	
//};
// 
//class Dog : public Animal
//{
//public:
//	Dog(std::string Name);
//	~Dog();
//	void eat();
//};
//
//class Cat : public Animal
//{
//public:
//	Cat(std::string Name);
//	~Cat();
//	void eat();
//};
//
//Animal::Animal(std::string Name)
//{
//	this->name = Name;
//}
//Animal::~Animal()
//{
//	std::cout << "Animal Close\n";
//}
//
//void Animal::eat()
//{
//	std::cout << "Animal eat\n";
//}
//
//
//
//Dog::Dog(std::string Name) : Animal(Name)
//{
//}
//
//Dog::~Dog()
//{
//	std::cout << "Dog Close\n";
//}
//
//void Dog::eat()
//{
//	std::cout << "Dog eat\n";
//}
//
//Cat::Cat(std::string Name) : Animal(Name)
//{
//}
//
//Cat::~Cat()
//{
//	std::cout << "Cat Close\n";
//}
//
//void Cat::eat()
//{
//	std::cout << "Cat eat\n";
//}

//int main()
//{
//	Dog dog("a");
//	Cat cat("b");
//
//	dog.eat();
//	cat.eat();
//
//
//
//	return 0;
//}


////ÖØÔØ
//#include <iostream>
//#include <string>
//
//class Animal
//{
//public:
//	std::string name;
//
//	Animal(std::string Name);
//	~Animal();
//	void eat();
//	void eat(int count);
//};
//
//class Dog : public Animal
//{
//public:
//	Dog(std::string Name);
//	~Dog();
//	
//};
//
//class Cat : public Animal
//{
//public:
//	Cat(std::string Name);
//	~Cat();
//
//};
//
//Animal::Animal(std::string Name)
//{
//	this->name = Name;
//}
//Animal::~Animal()
//{
//	std::cout << "Animal Close\n";
//}
//
//void Animal::eat()
//{
//	std::cout << "Animal eat\n";
//}
//
//void Animal::eat(int count)
//{
//	std::cout << "eat : " << count << "¸ö\n";
//}
//
//Dog::Dog(std::string Name) : Animal(Name)
//{
//}
//
//Dog::~Dog()
//{
//	std::cout << "Dog Close\n";
//}
//
//
//Cat::Cat(std::string Name) : Animal(Name)
//{
//}
//
//Cat::~Cat()
//{
//	std::cout << "Cat Close\n";
//}
//
//
//
//int main()
//{
//	Dog dog("a");
//	Cat cat("b");
//
//	dog.eat();
//	cat.eat();
//
//	dog.eat(1);
//	cat.eat(2);
//
//	return 0;
//}
