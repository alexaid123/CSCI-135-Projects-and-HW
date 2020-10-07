/*
Author: Alexandros Aidonis
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1C

this is a simple calculator that can add and subtract integers, and will accept arbitrarily long mathematical formulas composed of symbols +, -, and non-negative integer numbers.
*/

#include <iostream>

int main()
{
	int num;
	char operation;
	int sum;
	std::cin >> sum;
	char semi;
	while(std::cin >> operation) // While loop that accepts input from the file until there is no more input in the file
	{
		if(operation != ';')
		{
			std::cin >> num;
		}
		if(operation == '+')
		{
			sum = sum + num; // Adds num to sum if operator is +
		}
		else if(operation == '-')
		{
			sum = sum - num; // Subtracts num from sum if operator is -
		}
		else if(operation == ';')
		{
			std::cout << sum << std::endl;
			sum = 0;
			std::cin >> sum;
		}
	}
	return 0;
}