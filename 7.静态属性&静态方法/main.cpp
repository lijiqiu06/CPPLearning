//	����δ����У�ʹ�� `static int Count;` ��Ϊ `Pet` ���˽�о�̬��Ա����Ҫ�����ºô���
//	
//	1. ʵ�ֿ�����״̬���� 
//	��̬��Ա `Count` �������κ��ض����󣬶��Ǳ� `Pet` �༰���������ࣨ`Dog`��`Cat`���� * *����ʵ������ * *��
//	��ʹ������׼ȷ׷�١����г�������������������۴��� `Dog` ���� `Cat` ���󣬶��Ṳͬ����ͬһ�� `Count` ������ȷ������ͳ�Ƶ�һ���ԡ�
//	
//	2. ��ȫ��״̬�Ĺ���
//	�����ʹ�þ�̬��Ա��������Ҫ����һ��ȫ�ֱ�������¼����������
//	��ȫ�ֱ������ƻ���װ�ԣ��κδ��붼���޸��������� `static int Count` ������Ϊ `private`��
//	 ֻ��ͨ�� `Pet` ��ĳ�Ա�������繹�� / ����������`GetCount()`�����ƣ�ȷ�������ݵİ�ȫ�Ժ��޸ĵĿɿ��ԡ�
//	
//	3. ��ӳ�༶�������
//	����������������һ�� * *�༶������� * *�����ڡ�������Ⱥ�壬����ĳ����������
//	��̬��Աǡ���ʺϱ�ʾ���ֲ����ڵ���ʵ����������ͨ�� `Pet::GetCount()` ֱ�ӵ��ã����贴��������ܻ�ȡ�������߼��ϸ�����
//	
//	4. �Զ�ά����������
//	��̬��Ա `Count` ���������������һ�£��ڵ�һ��ʹ�� `Pet` ��ʱ��ʼ�����ڳ������ʱ���١�
//	�Ᵽ֤�˴ӵ�һ�����ﴴ�������һ���������٣�`Count` ʼ������ȷ��¼�����仯������ʱ `Count+ + `������ʱ `Count- - `����
//	
//	��˵��`static int Count` �����ٵĴ���ʵ���ˡ��������״̬����ȫ׷���������������󣬼ȱ�֤�����ݵķ�װ�ԣ��ּ��˶ԡ��༶���������Ĺ���

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

	std::cout << "ʣ��" << Pet::GetCount() << "ֻ\n";

	{
		Dog dog2("Dog2");
		Cat cat2("Cat2");
		std::cout << "ʣ��" << Pet::GetCount() << "ֻ\n";
	}

	std::cout << "ʣ��" << Pet::GetCount() << "ֻ\n";
	return 0;
}