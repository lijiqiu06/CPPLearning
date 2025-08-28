//���� Person �� Teacher �� Student ��̳У�virtual public��
//������ TeachingAssistant ��̳� Teacher �� Student
//���ֽṹ��ֱ��������̳е����� ���� ���� Person ���� TeachingAssistant �в�������ʵ���������������Ͷ����ԣ���
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
	std::cout << "Person������" << Name << '\n';
}

void Person::introduce()
{
	std::cout << "My name is " << Name << '\n';
}

Person::~Person()
{
	std::cout << "Person������" << Name << '\n';
}

class Teacher : virtual public Person//��̳�
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
	std::cout << "Teacher������" << Name <<"��"<<classes<< '\n';
}

void Teacher::Teaching()
{
	std::cout << Name << " is teaching " << classes << '\n';
}

Teacher::~Teacher()
{
	std::cout << "Teacher������" << Name << '\n';
}

class Student : virtual public Person//��̳�
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
	std::cout << "Student������" << Name << "ѧ" << classes << '\n';
}

void Student::Learning()
{
	std::cout << Name << " is learning " << classes << '\n';
}

Student::~Student()
{
	std::cout << "Student������" << Name << '\n';
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
	std::cout << "TeachingAssistant������" << Name << "��" << Teachingclasses <<"ѧ"<< Leaningclasses<<'\n';
}

void TeachingAssistant::introduce()
{
	std::cout <<"My name is " <<Name << ", I'm teaching " << Teachingclasses << " and I'm learning "<<Leaningclasses<<'\n';
}

TeachingAssistant::~TeachingAssistant()
{
	std::cout << "TeachingAssistant������" << Name << '\n';
}

int main()
{
	TeachingAssistant s("somebody", "Math", "English");
	s.introduce();
	return 0;
}