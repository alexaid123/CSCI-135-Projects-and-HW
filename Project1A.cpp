/*
Author: Alexandros Aidonis
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1A

This program takes in integer input from a text file and adds all the integers up until there is no more input from the input file
*/
#include <iostream>

int main()
{
	int num; // initializng the num variable
	int sum = 0; // initializing and declaring the sum variable that represents the total sum and it is important that it starts out as 0
	while(std::cin >> num) // while loop that keeps going until there is no more input from the input file
	{
		sum = sum + num; // adding the input number to sum
	}
	std::cout << sum << std::endl; // prints out the sum
	return 0;
}
