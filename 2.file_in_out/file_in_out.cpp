#define _CRT_SECURE_NO_WARNINGS
////�����ļ�
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//	FILE* in,*out;
//	int ch;
//	if (argc != 3)
//	{
//		fprintf(stderr, "������ʽ��fileCopy Դ�ļ��� Ŀ���ļ���");
//		exit(EXIT_FAILURE);
//	}
//	if ((in = fopen(argv[1], "rb")) == NULL)
//	{
//		fprintf(stderr, "�򲻿��ļ���%s \n",argv[1]);
//		exit(EXIT_FAILURE);
//	}
//	if ((out = fopen(argv[2], "wb")) == NULL)
//	{
//		fprintf(stderr, "�򲻿��ļ���%s \n", argv[2]);
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
//		printf("��ȡ�ļ� %s ʧ�� \n", argv[1]);
//	}
//	if (ferror(out))
//	{
//		printf("д���ļ� %s ʧ�� \n", argv[2]);
//	}
//	fclose(in);
//	fclose(out);
//
//	return 0;
//}

////���ļ�
//#include <iostream>
//#include <fstream>
//
//int main()
//{
//	std::ifstream in;
//	in.open("test.txt");//open()�� ifstream ���� in ���ļ� "test.txt" �������Ա�Ӹ��ļ���ȡ����
//	if (!in)
//	{
//		std::cout<<"��ȡʧ��"<<std::endl;
//		return 0;
//	}
//	char ch;
//	while (in >> ch)
//	{
//		std::cout << ch;
//	}
//	std::cout << std::endl;
//	in.close();//close()�ر� ifstream ���� in ��ǰ�������ļ����ж������ļ������ӣ��ͷ���Դ ��
//	return 0;
//}

////д�ļ�
//#include <iostream>
//#include <fstream>
//
//int main()
//{
//	std::ofstream out;
//	out.open("text.txt");
//	if (!out)
//	{
//		std::cout << "���ļ�ʧ��" << std::endl;
//		return 0;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		out << i;
//	}
//	out << std::endl;
//	std::cout << "д�����" << std::endl;
//	out.close();
//	return 0;
//}

////ָ��ģʽд
//#include <iostream>
//#include <fstream>
//
//int main()
//{
//	std::ofstream out("test.txt", std::ios::app);
//	if (!out)
//	{
//		std::cout << "��ʧ��" << std::endl;
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

////��дģʽ����
//#include <iostream>
//#include <fstream>
//
//int main()
//{
//	std::fstream fp("test.txt", std::ios::in | std::ios::out);
//	if (!fp)
//	{
//		std::cout << "�ļ���ʧ��" << std::endl;
//		return 1;
//	}
//	fp << "helloworld" << std::endl;
//	char str[100];
//	fp.seekg(std::ios::beg);//seekg()���ļ������� fp �Ķ�ȡλ�ã��ļ�ָ�룩�ƶ����ļ��Ŀ�ͷ��
//	fp >> str;
//	std::cout << str << std::endl;
//	fp.close();
//	return 0;
//}

//�����ļ�
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	if (argc != 3) 
	{
		std::cerr << "������ʽ: " << argv[0] << " <Դ�ļ�> <Ŀ���ļ�>" << std::endl;
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