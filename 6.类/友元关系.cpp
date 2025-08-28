#include <iostream>
#include <string>

class Company
{
public:
	void SetPassword(std::string password);
	void GetPassword(Company* company);

protected:
	std::string password;

	friend class Enemy;
};

class Enemy
{
public:
	std::string password;
	void getPassword(Company* company);
};

void Company::SetPassword(std::string password)
{
	this->password = password;
}

void Company::GetPassword(Company* company)
{
	std::cout << "password : " << company->password << '\n';
}

void Enemy::getPassword(Company* company)
{
	this->password = company->password;
}

int main()
{
	Company companyA;
	Company companyB;
	companyA.SetPassword("1234567");
	companyB.GetPassword(&companyA);

	Enemy enemy;
	enemy.getPassword(&companyA);
	std::cout << "enemy get password : " << enemy.password << std::endl;
	return 0;
}