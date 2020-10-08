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
	int feedback;
	int guess;
	int tries = 0;
	std::cout << "Enter left end in range: ";
	std::cin >> low;
	std::cout << "Enter right end in range: ";
	std::cin >> high;
	while(high <= low)
	{
		std::cout << "Invalid range, please enter a valid range!\n";
		std::cout << "Enter left end in range: ";
		std::cin >> low;
		std::cout << "Enter right end in range: ";
		std::cin >> high;
	}
	std::cout << "User has an int in [" << low << ", " << high << "]. Computer will guess.\n\n";
	do
	{
		tries = tries + 1;
		guess = (high + low)/2;
		std::cout << "guess #" << tries << ": " << guess << ". How is my guess?\n";
		std::cout << "1. too big 2. too small 3. just right\n";
		std::cout << "Enter only 1, 2 or 3: ";
		std::cin >> feedback;
		while(feedback < 1 || feedback > 3)
		{
			std::cout << "Please enter only 1,2 or 3: ";
			std::cin >> feedback;
		}
		if(feedback == 1)
		{
			high = guess - 1;
			std::cout << "\n";
		}
		else if(feedback == 2)
		{
			low = guess + 1;
			std::cout << "\n";
		}
		else if(feedback == 3)
		{
			std::cout << "My guess is correct!" << ".\n";
		}
		if(high == low)
		{
			guess = (high + low)/2;
			std::cout << "The answer must be " << guess << ".\n";
			break;
		}
	}
	while(feedback != 3);
	return 0;
}
