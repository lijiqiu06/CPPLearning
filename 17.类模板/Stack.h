#pragma once
//ģ�����ʵ��λ�����⣺ģ�����ʵ��ͨ����Ҫ����ͷ�ļ��У������ǵ�����.cpp �ļ��У�����ᵼ�����Ӵ���
#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
public:
	Stack(unsigned int size);
	~Stack();
	void Push(T value);
	T pop();
private:
	unsigned int size;
	unsigned int ptr;
	T* data;
};

template <class T>
Stack<T>::Stack(unsigned int size)
{
	this->size = size;
	data = new T[size];
	ptr = 0;
}

template <class T>
Stack<T>::~Stack()
{
	delete[]data;
}

template <class T>
void Stack<T>::Push(T value)
{
	data[ptr] = value;
	ptr++;
}

template <class T>
T Stack<T>::pop()
{
	ptr--;
	return data[ptr];
}
#endif
