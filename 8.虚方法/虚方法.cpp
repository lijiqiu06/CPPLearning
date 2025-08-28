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
//	//Dog* dog1 = new Dog("Dog1");//��ʽ 1������ָ�룩
//	//Cat* cat1 = new Cat("Cat1");
//
//	Pet* dog1 = new Dog("Dog1");//��ʽ 2������ָ�� + �麯����
//	Pet* cat1 = new Cat("Cat1");
//
//	//	��ʽ 1������ָ�룩���ʺ���Ҫֱ�Ӳ����������й��ܵĳ������޶�̬���ԡ�
//	//	��ʽ 2������ָ�� + �麯�������ʺ�ͳһ����ͬ�������ͨ����̬ʵ�֡�ͬ�ӿڡ���ͬ��Ϊ����
//	//	�������������С�����ԭ�򡹵ĵ���Ӧ�ã�����չ���ţ����޸Ĺرգ���
//	//	�������壺
//	//	1.ͳһ�ӿڣ���ͬʵ��
//	//	�� Pet* ָ�����ͳһ���� Dog��Cat ������������󣬵��� Play() ʱ����ݶ���ʵ������ִ�ж�Ӧʵ�֣�������ľ��������ֳ��
//	//	2.��չ��ǿ
//	//	δ������ Bird��Fish ������ʱ��ֻ��̳� Pet ����д Play()�����д��루���� Pet* ���������߼��������޸ľ��ܼ��������͡�
//	//	3.��������
//	//	���������һ������ָ������洢���г���������� Play()��
//	std::cout << "ʣ��" << Pet::GetCount() << "ֻ\n";
//
//	{
//		Dog dog2("Dog2");
//		Cat cat2("Cat2");
//		std::cout << "ʣ��" << Pet::GetCount() << "ֻ\n";
//	}
//	cat1->Play();
//	dog1->Play();
//	std::cout << "ʣ��" << Pet::GetCount() << "ֻ\n";
//  delete dog1;
//  delete cat1;
//	return 0;
//}