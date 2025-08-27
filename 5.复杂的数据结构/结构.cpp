#include <iostream>
#include <fstream>
#include <string>
#define COUNTMAX 100
typedef struct info
{
	std::string name;
	std::string ID;
	std::string gender;
}INFO;

void ShowMenu(int* satuts);
void WriteData(INFO* information_arr, int* count);
void ShowInfo(INFO* information_arr, int count);
void ReadFile(std::fstream& fp, INFO* information_arr, int* count);
void WriteFile(std::fstream& fp, const INFO* information_arr, const int count);
void EraseFile(std::fstream& fp);
void EraseData(INFO* information_arr, int* count);
bool EraseConfirm();
int main()
{
	std::fstream fp("information.txt", std::ios::in | std::ios::out | std::ios::app);
	if (!fp)
	{
		std::cout << "文件打开失败\n";
		return 1;
	}
	INFO information_arr[COUNTMAX];
	int satuts=0;
	int count=0;
	bool flag=false;
	ReadFile(fp,information_arr, &count);
	ShowMenu(&satuts);
	while (1)
	{
		switch (satuts)
		{
		case 1:
			std::cout << "1\n";
			ShowInfo(information_arr,count);
			ShowMenu(&satuts);
			break;
		case 2:
			std::cout << "2\n";
			
			std::cout << count << "\n";
			WriteData(information_arr,&count);
			ShowMenu(&satuts);
			break;
		case 3:
			std::cout << "3\n";
			flag=EraseConfirm();
			if(flag==true)
			{
				EraseData(information_arr, &count);
				EraseFile(fp);
				std::cout << "数据已清除" << "\n";
			}
			else
			{
				std::cout << "取消清除\n";
			}
			ShowMenu(&satuts);
			break;
		case 4:
			std::cout << "4\n";
			WriteFile(fp, information_arr, count);
			fp.close();
			exit(0);
			break;
		default:
			std::cout << "输入错误\n";
			break;
		}
	}
	return 0;
}

void ShowMenu(int* satuts)
{
	std::cout << "请选择需要进行的操作\n";
	std::cout << "1.打印数据到屏幕\n";
	std::cout << "2.录入数据\n";
	std::cout << "3.清除数据\n";
	std::cout << "4.退出程序\n";
	std::cin >> *satuts;
}

void WriteData(INFO*information_arr,int* count)
{
	std::cout << "输入姓名\n";
	std::cin >> information_arr[*count].name;
	std::cout << "输入ID\n";
	std::cin >> information_arr[*count].ID;
	std::cout << "输入性别\n";
	std::cin >> information_arr[*count].gender;
	(*count)++;
}

void ShowInfo(INFO* information_arr, int count)
{
	for (int i = 0;i < count;i++)
	{
		std::cout << i+1 << ".\n";
		std::cout << "姓名:" << information_arr[i].name << '\n';
		std::cout << "ID:" << information_arr[i].ID << '\n';
		std::cout << "性别:" << information_arr[i].gender << '\n';
		std::cout << "\n";
	}
}

void ReadFile(std::fstream& fp,INFO* information_arr, int* count)
{
	// 移动到文件开头
	fp.seekg(0, std::ios::beg);
	fp >> *count;
	std::cout << "count=" << *count << '\n';
	for (int i = 0;i < *count;i++)
	{
		fp >> information_arr[i].name>> information_arr[i].ID>> information_arr[i].gender;
	}
	std::cout << "当前存储 " << *count << " 位\n";
	std::cout << "总共 " << COUNTMAX << " 位\n";
	std::cout << "剩余 " << COUNTMAX-*count << " 位\n";
}

void WriteFile(std::fstream& fp,const INFO* information_arr,const int count)
{
	fp.close();
	fp.open("information.txt", std::ios::out | std::ios::trunc);
	fp << count<<'\n';
	for (int i = 0;i < count; i++)
	{
		fp << information_arr[i].name << " ";
		fp << information_arr[i].ID << " ";
		fp << information_arr[i].gender << "\n";
	}
}

void EraseFile(std::fstream& fp)
{
	fp.close();
	fp.open("information.txt", std::ios::out | std::ios::trunc);
}

void EraseData(INFO* information_arr,int* count)
{
	for (int i = 0;i < *count;i++)
	{
		information_arr[i].name = ' ';
		information_arr[i].ID = ' ';
		information_arr[i].gender = ' ';
	}
	*count = 0;
}

bool EraseConfirm()
{
	char c;
	std::cout << "是否清除所有数据【Y/N】：";
	std::cin >> c;
	if (c == 'Y' || c == 'y')
	{
		return true;
	}
	else if (c == 'N' || c == 'n')
	{
		return false;
	}
	else
	{
		std::cout << "输入错误";
	}
}