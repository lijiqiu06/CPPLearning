#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> number;

	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 1000;
		number.push_back(num);
	}

	std::sort(number.begin(), number.end());

	std::vector<int>::iterator iter = number.begin();
	while (iter != number.end())
	{
		std::cout<<*iter<<"\n";
		iter++;
	}
	return 0;
}