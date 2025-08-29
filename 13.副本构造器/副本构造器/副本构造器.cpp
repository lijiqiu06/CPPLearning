//	为什么需要重载赋值运算符？
//	Example类包含一个指向动态内存的指针成员int * ptr。
//	当使用默认的赋值运算符时，会发生浅拷贝, 即只复制指针本身，而不复制指针指向的内存内容。这会导致：
//		两个对象的ptr指向同一块内存
//		当其中一个对象释放内存（如delete ptr），另一个对象的ptr会变成野指针
//		最终可能引发重复释放内存的崩溃
//	因此，对于包含动态内存成员的类，必须重载赋值运算符以实现深拷贝，确保赋值后两个对象的指针指向独立的内存块。

//	副本构造函数的作用：实现 “深拷贝”
//	副本构造函数的核心作用是实现深拷贝：不仅复制指针，还会为新对象分配独立的内存，
//	并复制原内存中的数据，确保两个对象的资源相互独立。
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
	std::cout << "进入主构造器\n";
	this->ptr = ptr;
	std::cout << "退出主构造器\n";
}

Example::Example(const Example& rhs)
{
	std::cout << "进入副本构造器\n";
	// 直接初始化ptr，不依赖赋值运算符
	ptr = new int;					//	若使用赋值运算符重载函数，当赋值运算符重载函数被调用时，
									//	会先执行delete ptr;，而此时ptr是一个未初始化的野指针，
									//	对野指针执行delete操作会导致未定义行为
	*ptr = *(rhs.ptr);
	std::cout << "退出副本构造器\n";
}

Example::~Example()
{
	std::cout << "进入析构器\n";
	delete ptr;
	ptr = nullptr;
	std::cout << "退出析构器\n";
}

Example& Example::operator=(const Example& rhs)
{
	std::cout << "进入=重载函数\n";
	if (this != &rhs)
	{
		delete ptr;
		ptr = new int;
		*ptr = *(rhs.ptr);
	}
	else
	{
		std::cout << "=两边相同,不进行操作\n";
	}
	std::cout << "退出=重载函数\n";
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