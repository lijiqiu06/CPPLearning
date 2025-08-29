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
//	std::cout << "这是" << Name << "公司" << std::endl;
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
//	std::cout << "我们主要产品是" << Product << std::endl;
//}
//
//int main()
//{
//	Company* company = new Company("苹果");
//	company->Introduce();
//	delete company;
//	company = NULL;
//
//	std::cout << std::endl;
//
//	TechCompany* techCompany = new TechCompany("苹果", "iPhone");
//	techCompany->Introduce();
//	delete techCompany;
//	techCompany = NULL;
//
//	return 0;
//}