// this file holds all io functions for this program

#include "io.h"
#include <iostream>

// asks the user to input an integer and returns it to the main function to be stored
int getInteger()
{
	std::cout << "Enter an iteger: ";
	int num{};
	std::cin >> num;
	return num;
}

// takes in the user input and checks to see if the modulus operator divided by 2 returns 0, 
// which would mean that the user input is an even number
bool isEven(int num)
{
	return ((num % 2) == 0);
}