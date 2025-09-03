#include <iostream>
#include <string>
#include "Stack.h"

int main()
{
	Stack<int> intStack(100);
	for (int i = 0; i < 50; i++)
	{
		intStack.Push(i);
	}
	
	for (int i = 0; i < 50; i++)
	{
		std::cout << intStack.pop() << "\n";
	}
	return 0;
}
