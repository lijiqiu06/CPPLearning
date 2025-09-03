#pragma once
//模板类的实现位置问题：模板类的实现通常需要放在头文件中，而不是单独的.cpp 文件中，否则会导致链接错误
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
