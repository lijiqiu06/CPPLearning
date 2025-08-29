//	Ϊʲô��Ҫ���ظ�ֵ�������
//	Example�����һ��ָ��̬�ڴ��ָ���Աint * ptr��
//	��ʹ��Ĭ�ϵĸ�ֵ�����ʱ���ᷢ��ǳ����, ��ֻ����ָ�뱾����������ָ��ָ����ڴ����ݡ���ᵼ�£�
//		���������ptrָ��ͬһ���ڴ�
//		������һ�������ͷ��ڴ棨��delete ptr������һ�������ptr����Ұָ��
//		���տ��������ظ��ͷ��ڴ�ı���
//	��ˣ����ڰ�����̬�ڴ��Ա���࣬�������ظ�ֵ�������ʵ�������ȷ����ֵ�����������ָ��ָ��������ڴ�顣

//	�������캯�������ã�ʵ�� �������
//	�������캯���ĺ���������ʵ���������������ָ�룬����Ϊ�¶������������ڴ棬
//	������ԭ�ڴ��е����ݣ�ȷ�������������Դ�໥������
#include <iostream>
#include <string>

class Example
{
public:
	Example(int* ptr);
	Example(const Example& rhs);
	~Example();
	Example& operator=(const Example& rhs);
	void print();
	
protected:
	int* ptr;
};

Example::Example(int* ptr)
{
	std::cout << "������������\n";
	this->ptr = ptr;
	std::cout << "�˳���������\n";
}

Example::Example(const Example& rhs)
{
	std::cout << "���븱��������\n";
	// ֱ�ӳ�ʼ��ptr����������ֵ�����
	ptr = new int;					//	��ʹ�ø�ֵ��������غ���������ֵ��������غ���������ʱ��
									//	����ִ��delete ptr;������ʱptr��һ��δ��ʼ����Ұָ�룬
									//	��Ұָ��ִ��delete�����ᵼ��δ������Ϊ
	*ptr = *(rhs.ptr);
	std::cout << "�˳�����������\n";
}

Example::~Example()
{
	std::cout << "����������\n";
	delete ptr;
	ptr = nullptr;
	std::cout << "�˳�������\n";
}

Example& Example::operator=(const Example& rhs)
{
	std::cout << "����=���غ���\n";
	if (this != &rhs)
	{
		delete ptr;
		ptr = new int;
		*ptr = *(rhs.ptr);
	}
	else
	{
		std::cout << "=������ͬ,�����в���\n";
	}
	std::cout << "�˳�=���غ���\n";
	return *this;
}

void Example::print()
{
	std::cout << *ptr<<std::endl;
}

int main()
{
	Example a = Example(new int(1));
	Example b = Example(new int(2));
	a.print();
	b.print();
	a = b;
	a.print();
	b.print();
	std::cout << "-----------------------------------\n";
	Example c = Example(new int(3));
	Example d = c;
	c.print();
	d.print();
	std::cout << "-----------------------------------\n";
	Example e = Example(new int(4));
	e = e;
	e.print();
	std::cout << "-----------------------------------\n";
	return 0;
}