////new delete
//#include <iostream>
//#include <string>
//
//class Company
//{
//public:
//	Company(std::string Name);
//	virtual void Introduce();
//protected:
//	std::string Name;
//};
//
//Company::Company(std::string Name)
//{
//	this->Name = Name;
//}
//
//void Company::Introduce()
//{
//	std::cout << "����" << Name << "��˾" << std::endl;
//}
//
//class TechCompany : public Company
//{
//public:
//	TechCompany(std::string Name, std::string Product);
//	void Introduce();
//protected:
//	std::string Product;
//};
//
//TechCompany::TechCompany(std::string Name, std::string Product): Company(Name)
//{
//	this->Product = Product;
//}
//
//void TechCompany::Introduce()
//{
//	Company::Introduce();
//	std::cout << "������Ҫ��Ʒ��" << Product << std::endl;
//}
//
//int main()
//{
//	Company* company = new Company("ƻ��");
//	company->Introduce();
//	delete company;
//	company = NULL;
//
//	std::cout << std::endl;
//
//	TechCompany* techCompany = new TechCompany("ƻ��", "iPhone");
//	techCompany->Introduce();
//	delete techCompany;
//	techCompany = NULL;
//
//	return 0;
//}