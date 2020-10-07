/*
Author: Alexandros Aidonis
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 2B

Enter the left end and right end of a range of integers. User chooses an integer in that range. 
Computer makes a guess that equals the mid of the range. User gives a feedback for each guess: 1 for too big, 2 for too small and 3 for just right. 
When the feedback is 1 (too big), the computer throws away any integer that is bigger than guess. 
When the feedback is 2 (too small), the computer discards the integers any integers that is smaller than the guess. 
When computer makes a correct guess, the game ends.
*/
#include <iostream>

int main()
{
	int low;
	int high;
	int number;
	int feedback;
	int guess;
	std::cout << "Enter the lower limit of the range: ";
	std::cin >> low;
	std::cout << "Enter the upper limit of the range: ";
	std::cin >> high;
	while(high <= low)
	{
		std::cout << "Invalid range, please enter a valid range!\n";
		std::cout << "Enter the lower limit of the range: ";
		std::cin >> low;
		std::cout << "Enter the upper limit of the range: ";
		std::cin >> high;
	}
	std::cout << "Enter an integer in this range: ";
	std::cin >> number;
	do
	{
		std::cout << "Enter feedback as a number (1 if my guess is too big, 2 if my guess is too small and 3 if my guess is just right)\n";
		guess = ((high - low)/2) + low;
		std::cout << "My guess is " << guess << "\n";
		std::cin >> feedback;
		if(feedback == 1)
		{
			high = guess;
			std::cout << "Too high\n";
		}
		else if(feedback == 2)
		{
			low = guess;
			std::cout << "Too low\n";
		}
	}
	while(guess != number);
	std::cout << "My guess is correct!\n";
	return 0;
}
