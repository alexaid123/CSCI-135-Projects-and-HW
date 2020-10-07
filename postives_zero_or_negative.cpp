/*

Author: Alexandros Aidonis

Course: CSCI-135

Instructor: Tong Yi

Assignment: E3.1



Write a program that reads an integer and prints whether it is negative, zero, or positive.

*/



#include <iostream>



int main()

{

	int num;

	std::cout << "Enter a number: ";

	std::cin >> num;

	if(num < 0)

		std::cout << "Negative" << std::endl;

	else if(num > 0)

		std::cout << "Positive" << std::endl;

	else	

		std::cout << "Zero" << std::endl;

	

	return 0;

}