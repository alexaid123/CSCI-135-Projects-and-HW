/*
Author: Alexandros Aidonis
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1D

this is a simple calculator that can add and subtract integers, and will accept arbitrarily long mathematical formulas composed of symbols +, -,^  and non-negative integer numbers.
*/

#include <iostream>
#include <cmath>

int main()
{
	int num;
	char operation;
	int sum;
	std::cin >> sum;
	num = sum;
	int placeholder = 0;
	while(std::cin >> operation) // While loop that accepts input from the file until there is no more input in the file
	{
		if(operation != ';' && operation != '^')
		{
			std::cin >> num;
		}
		else if(operation == '^')
		{
			if(placeholder == 0) //Adds if placeholder is 0
			{	
				sum = sum - num;
				sum = sum + (num*num);
			}
			else		//SUbtracts if placeholder is 1
			{	
				sum = sum + num;
				sum = sum - (num*num);
			}
		}
		if(operation == '+')
		{
			placeholder = 0;
			sum = sum + num; // Adds num to sum if operator is +
		}
		else if(operation == '-')
		{
			placeholder = 1;
			sum = sum - num; // Subtracts num from sum if operator is -
		}
		else if(operation == ';')
		{
			std::cout << sum << std::endl;
			sum = 0;
			std::cin >> sum;
			num = sum;
			placeholder = 0;
		}
	}
	return 0;
}
