/*
Author: Alexandros Aidonis
Course: CSCI-135
Instructor: Tong Yi
Assignment: E2.10

The program asks the user for the gallons in the tank, the fuell efficiency, the gas per gallon and then the program tells the user the cost per 100 miles based on their information and it also tells them how far the car can go with the gas that is currently in the tank .
*/

#include <iostream>

int main()
{
	double gallonsInTank; // initializing the variable that represents how many gallons the car tank has
	double fuelEfficiency; // initializing the variable that represents the fuelEfficiency of the car in miles per gallon
	double gasPerGallon; // initializing the variable that represents the price of ga per gallon
	std::cout << "Enter the number of gallons of gas in the tank: " << std::endl;
	std::cin >> gallonsInTank;
	std::cout << "Enter the fuel efficiency in miles per gallon: " << std::endl;
	std::cin >> fuelEfficiency;
	std::cout << "Enter the price of gas per gallon: " << std::endl;
	std::cin >> gasPerGallon;
	double cost = (100/fuelEfficiency) * gasPerGallon;
	double distance = gallonsInTank * fuelEfficiency;
	std::cout << " The cost per 100 miles is " << cost << " dollars." << std::endl;
	std::cout << " The car can go " << distance << " miles with the gas in the tank." << std::endl;
}
