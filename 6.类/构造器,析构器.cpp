//#include <iostream>
//#include <string>
//#include <windows.h>
//#define FILL_GAS 85
//class Car
//{
//public:
//	std::string model;
//	std::string color;
//	unsigned int gas;
//	float surplus;
//
//	Car();//������
//	void Car_Init(std::string model, std::string color);
//	void Fill_Gas();
//	float Car_running();
//};
//
//Car::Car()
//{
//	model = "mid";
//	color = "black";
//	gas = FILL_GAS;
//	surplus = 100;
//}
//void Car::Car_Init(std::string m, std::string c)
//{
//	model = m;
//	std::cout << "model:" << model << '\n';
//	color = c;
//	std::cout << "color:" << color << '\n';
//	gas = FILL_GAS;
//	surplus = 1;
//}
//
//void Car::Fill_Gas()
//{
//	gas = FILL_GAS;
//	std::cout << "���Ѽ���" << '\n';
//}
//
//float Car::Car_running()
//{
//	float surplus = 100.0 * gas / FILL_GAS;
//	gas--;
//	std::cout << "Running" << std::endl;
//	printf("ʣ��������%.1f %%\n", surplus);
//	return surplus;
//}
//
//int main()
//{
//	Car car;
//	car.Car_Init("mid","black");
//	while (car.surplus=car.Car_running())
//	{
//		if (car.surplus < 10)
//		{
//			char c;
//			std::cout << "�Ƿ�����ͣ�[Y/N]" << std::endl;
//			std::cin >> c;
//			if (c == 'Y' || c == 'y') 
//			{
//				car.Fill_Gas();
//			}
//		}
//		Sleep(100);
//		
//	}
//	std::cout << "û����" << std::endl;
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <string>
//
//#define LOAD_NUM 2
//class Quote
//{
//public:
//	std::ofstream outputfile;
//	std::string quote;
//	std::string writer;
//	int count;
//
//	Quote();// ������
//	~Quote();// ������
//	void WriteQuote();
//	void WriteWriter();
//	bool LoadQuote();
//};
//
//Quote::Quote()
//{
//	outputfile.open("quote.txt", std::ios::app);
//	count = 0;
//}
//
//Quote::~Quote()
//{
//	outputfile.close();
//}
//
//void Quote::WriteQuote()
//{
//	std::getline(std::cin, quote);
//}
//void Quote::WriteWriter()
//{
//	std::getline(std::cin, writer);
//}
//
//bool Quote::LoadQuote()
//{
//	if (outputfile.is_open())
//	{
//		outputfile << quote << '|' << writer << '\n';
//		return 0;
//	}
//	else return 1;
//}
//
//int main()
//{
//	Quote myQuote;
//	while(1)
//	{
//		myQuote.count++;
//		std::cout << "�������ԣ�";
//		myQuote.WriteQuote();
//		std::cout << "�������ߣ�";
//		myQuote.WriteWriter();
//		if (!myQuote.LoadQuote())
//		{
//			std::cout << "����ɹ�\n";
//		}
//		else
//		{
//			std::cout << "����ʧ��\n";
//		}
//		if (myQuote.count >= LOAD_NUM) break;
//	}
//	return 0;
//}