//	�����жԳ��󷽷������麯������ʹ����Ҫ���������¼��㣺
// 
//	1.���������ࣺ
//	�� Pet ���У��� Play() ��������Ϊ���麯�� virtual void Play() = 0;��ʹ�� Pet ��Ϊ������ࡣ
//	��������޷�ֱ��ʵ��������ֻ����Ϊ���౻�̳С�
//	2.�������ʵ�ֳ��󷽷���
//	Dog �� Cat ����Ϊ Pet �����࣬������д Play() ������ʵ�־��幦�ܡ�
//	�ڴ����У�Dog::Play() �� Cat::Play() �ֱ�ʵ���˹���è����ˣ��Ϊ�������˳��󷽷���ʵ��Ҫ��
//	3.ͨ������ָ����ó��󷽷���
//	�� main �����У�ʹ�ø��� Pet ��ָ��ָ������ Dog �� Cat �Ķ���Pet* dog1 = new Dog("Dog1")��Pet * cat1 = new Cat("Cat1")����
//	��ͨ����Щָ����� Play() ���������� Play() �Ǵ��麯��������������ʵ�֣�ʵ��ִ��ʱ����ö�Ӧ����� Play() �����������˶�̬���ԡ�
//	 
//	����ʹ�÷�ʽ�ĺ��������ǣ�ͨ��������ඨ��ͳһ�Ľӿڣ�Play()����ǿ������ʵ�־�����Ϊ��ͬʱ���ö�̬��ʹ��ͬ����������ͨ������ָ�뱻ͳһ����͵��ã�����˴������չ�Ժ�����ԡ�
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
	//Dog* dog1 = new Dog("Dog1");//��ʽ 1������ָ�룩
	//Cat* cat1 = new Cat("Cat1");

	Pet* dog1 = new Dog("Dog1");//��ʽ 2������ָ�� + �麯����
	Pet* cat1 = new Cat("Cat1");

	std::cout << "ʣ��" << Pet::GetCount() << "ֻ\n";

	{
		Dog dog2("Dog2");
		Cat cat2("Cat2");
		std::cout << "ʣ��" << Pet::GetCount() << "ֻ\n";
	}
	cat1->Play();
	dog1->Play();
	std::cout << "ʣ��" << Pet::GetCount() << "ֻ\n";
	delete dog1;
	delete cat1;
	return 0;
}