/*
Author: Alexandros Aidonis
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 2A

Enter the left end and right end of a range of integers. Let computer generate a random integer in this range. 
User makes a guess and computer will give a feedback. The feedback is “too big” when the guess is larger than the answer.  
The feedback is “too small” when the guess is smaller than the answer. 
Based on the feedback, the user will continue to enter a guess until the guess equals the answer.
*/
#include <iostream>

int main()
{
	srand((unsigned) time(0));
	int low;
	int high;
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
    int randnum = low + ( std::rand() % ( high - low + 1 ) );
	do{
		std::cout << "Enter your guess: ";
		std::cin >> guess;
		if(guess < randnum)
		{
			std::cout << "too small\n";
		}
		else if( guess > randnum)
		{
			std::cout << "too big\n";
		}
		else
		{
			std::cout << "Congratulations you guessed the correct number!" << "\n";
		}
	}
	while(guess != randnum);
	return 0;
}