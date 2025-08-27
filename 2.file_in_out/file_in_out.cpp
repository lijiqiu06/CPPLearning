#define _CRT_SECURE_NO_WARNINGS
////复制文件
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//	FILE* in,*out;
//	int ch;
//	if (argc != 3)
//	{
//		fprintf(stderr, "输入形式：fileCopy 源文件名 目标文件名");
//		exit(EXIT_FAILURE);
//	}
//	if ((in = fopen(argv[1], "rb")) == NULL)
//	{
//		fprintf(stderr, "打不开文件：%s \n",argv[1]);
//		exit(EXIT_FAILURE);
//	}
//	if ((out = fopen(argv[2], "wb")) == NULL)
//	{
//		fprintf(stderr, "打不开文件：%s \n", argv[2]);
//		fclose(in);
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(in)) != EOF)
//	{
//		if (putc(ch, out) == EOF)
//		{
//			break;
//		}
//	}
//	if (ferror(in))
//	{
//		printf("读取文件 %s 失败 \n", argv[1]);
//	}
//	if (ferror(out))
//	{
//		printf("写入文件 %s 失败 \n", argv[2]);
//	}
//	fclose(in);
//	fclose(out);
//
//	return 0;
//}

////读文件
//#include <iostream>
//#include <fstream>
//
//int main()
//{
//	std::ifstream in;
//	in.open("test.txt");//open()将 ifstream 对象 in 与文件 "test.txt" 关联，以便从该文件读取数据
//	if (!in)
//	{
//		std::cout<<"读取失败"<<std::endl;
//		return 0;
//	}
//	char ch;
//	while (in >> ch)
//	{
//		std::cout << ch;
//	}
//	std::cout << std::endl;
//	in.close();//close()关闭 ifstream 对象 in 当前关联的文件（切断流与文件的连接，释放资源 ）
//	return 0;
//}

////写文件
//#include <iostream>
//#include <fstream>
//
//int main()
//{
//	std::ofstream out;
//	out.open("text.txt");
//	if (!out)
//	{
//		std::cout << "打开文件失败" << std::endl;
//		return 0;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		out << i;
//	}
//	out << std::endl;
//	std::cout << "写入完成" << std::endl;
//	out.close();
//	return 0;
//}

////指定模式写
//#include <iostream>
//#include <fstream>
//
//int main()
//{
//	std::ofstream out("test.txt", std::ios::app);
//	if (!out)
//	{
//		std::cout << "打开失败" << std::endl;
//		return 1;
//	}
//	for (int i = 0;i < 30;i++)
//	{
//		out << i;
//	}
//	out << std::endl;
//  out.close();
//	return 0;
//}

////读写模式共存
//#include <iostream>
//#include <fstream>
//
//int main()
//{
//	std::fstream fp("test.txt", std::ios::in | std::ios::out);
//	if (!fp)
//	{
//		std::cout << "文件打开失败" << std::endl;
//		return 1;
//	}
//	fp << "helloworld" << std::endl;
//	char str[100];
//	fp.seekg(std::ios::beg);//seekg()将文件输入流 fp 的读取位置（文件指针）移动到文件的开头。
//	fp >> str;
//	std::cout << str << std::endl;
//	fp.close();
//	return 0;
//}

//复制文件
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	if (argc != 3) 
	{
		std::cerr << "输入形式: " << argv[0] << " <源文件> <目标文件>" << std::endl;
		return EXIT_FAILURE;
	}
	std::ifstream in(argv[1], std::ios::binary);
	std::ofstream out(argv[2], std::ios::binary);
	char str[100];
	/*while (in)
	{
		in.read(str,100);
		std::streamsize bytesRead = in.gcount();
		if (bytesRead > 0) 
		{
			out.write(str, bytesRead);
		}
	}*/
	char ch;
	while (in >> ch)
	{
		out << ch;
	}
	out << std::endl;
	in.close();
	out.close();
	return 0;
}