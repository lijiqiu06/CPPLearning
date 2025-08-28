//基类 Person 被 Teacher 和 Student 虚继承（virtual public）
//派生类 TeachingAssistant 多继承 Teacher 和 Student
//这种结构能直观体现虚继承的作用 —— 避免 Person 类在 TeachingAssistant 中产生两份实例（解决数据冗余和二义性）。
#include <iostream>
#include <string>

class Person
{
public:
	Person(std::string Name);
	virtual void introduce();
	virtual ~Person();
protected:
	std::string Name;
};

Person::Person(std::string Name)
{
	this->Name = Name;
	std::cout << "Person构造器" << Name << '\n';
}

void Person::introduce()
{
	std::cout << "My name is " << Name << '\n';
}

Person::~Person()
{
	std::cout << "Person析构器" << Name << '\n';
}

class Teacher : virtual public Person//虚继承
{
public :
	Teacher(std::string Name, std::string classes);
	void Teaching();
	~Teacher();
protected :
	std::string classes;
};

Teacher::Teacher(std::string Name,std::string classes) :Person(Name)
{
	this->classes = classes;
	std::cout << "Teacher构造器" << Name <<"教"<<classes<< '\n';
}

void Teacher::Teaching()
{
	std::cout << Name << " is teaching " << classes << '\n';
}

Teacher::~Teacher()
{
	std::cout << "Teacher析构器" << Name << '\n';
}

class Student : virtual public Person//虚继承
{
public:
	Student(std::string Name, std::string classes);
	void Learning();
	~Student();
protected:
	std::string classes;
};

Student::Student(std::string Name, std::string classes) :Person(Name)
{
	this->classes = classes;
	std::cout << "Student构造器" << Name << "学" << classes << '\n';
}

void Student::Learning()
{
	std::cout << Name << " is learning " << classes << '\n';
}

Student::~Student()
{
	std::cout << "Student析构器" << Name << '\n';
}

class TeachingAssistant : public Teacher, public Student
{
public:
	TeachingAssistant(std::string Name, std::string Teachingclasses, std::string Leaningclasses);
	void introduce();
	~TeachingAssistant();
protected:
	std::string Teachingclasses;
	std::string Leaningclasses;
};

TeachingAssistant::TeachingAssistant(std::string Name, std::string Teachingclasses, std::string Leaningclasses) :Person(Name),Student(Name, Leaningclasses),Teacher(Name, Teachingclasses)
{
	this->Teachingclasses = Teachingclasses;
	this->Leaningclasses = Leaningclasses;
	std::cout << "TeachingAssistant构造器" << Name << "教" << Teachingclasses <<"学"<< Leaningclasses<<'\n';
}

void TeachingAssistant::introduce()
{
	std::cout <<"My name is " <<Name << ", I'm teaching " << Teachingclasses << " and I'm learning "<<Leaningclasses<<'\n';
}

TeachingAssistant::~TeachingAssistant()
{
	std::cout << "TeachingAssistant析构器" << Name << '\n';
}

int main()
{
	TeachingAssistant s("somebody", "Math", "English");
	s.introduce();
	return 0;
}