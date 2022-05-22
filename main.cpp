#include <iostream>

int getInteger()
{
	std::cout << "Enter an iteger: ";
	int num{};
	std::cin >> num;
	return num;
}

bool isEven(int num)
{
	return ((num % 2) == 0);
}

int main()
{
	int num{ getInteger() };

	if (isEven(num))
		std::cout << num << " is even.\n";
	else
		std::cout << num << " is odd.\n";

	return 0;
}