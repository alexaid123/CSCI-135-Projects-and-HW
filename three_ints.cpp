/*
Author: Alexandros Aidonis
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.5

Write a program that reads three numbers and prints “increasing” if they are in increasing order, “decreasing” if they are in decreasing order, and “neither” otherwise. Here, “increasing” means “strictly increasing”, with each value larger than its predecessor. The sequence 3 4 4 would not be considered increasing.
*/
#include <iostream>

int main()
{
		int a;
		int b;
		int c;
		std::cout << "Enter the first number: ";
		std::cin >> a;
		std::cout << "Enter the second number: ";
		std::cin >> b;
		std::cout << "Enter the third number: ";
		std::cin >> c;
		if(c > b && b > a)
		{
			std::cout << "Increasing" << std::endl;
		}
		else if(c < b && b < a)
		{
			std::cout << "Decreasing" << std::endl;
		}
		else
		{
				std::cout << "Neither" << std::endl;
		}
		
		return 0;
}