// This program asks the user to input an integer, passes that integer to a 
// function which checks to see if it's odd or even, and then prints the result
// to the console.

#include "io.h"
#include <iostream>


int main()
{
	int num{ getInteger() };

	// checks to see if the function isEven returns true or false
	if (isEven(num))
		std::cout << num << " is even.\n";
	else
		std::cout << num << " is odd.\n";

	system("pause");

	return 0;
}