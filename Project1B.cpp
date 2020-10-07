
/*
Author: Alexandros Aidonis
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1B

this is a simple calculator that can add and subtract integers, and will accept arbitrarily long mathematical formulas composed of symbols +, -, and non-negative integer numbers.
*/

#include <iostream>

int main()
{
	int num;
	char operation;
	int sum;
	std::cin >> sum;
	while(std::cin >> operation) // While loop that accepts input from the file until there is no more input in the file
	{
		std::cin >> num; // Getting the number that needs to be added or subtracted from the sum
		if(operation == '+')
		{
			sum = sum + num; // Adds num to sum if operator is +
		}
		else if(operation == '-')
		{
			sum = sum - num; // Subtracts num from sum if operator is -
		}
	}
	std::cout << sum << std::endl;
	return 0;
}

