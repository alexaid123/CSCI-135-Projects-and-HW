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
	int tries = 1;
	std::cout << "Enter the left end of the range: ";
	std::cin >> low;
	std::cout << "Enter the right end of the range: ";
	std::cin >> high;
	while(high <= low)
	{
		std::cout << "Invalid range, please enter a valid range!\n";
		std::cout << "Enter the left end of the range: ";
	std::cin >> low;
	std::cout << "Enter the right end of the range: ";
	std::cin >> high;
	}
	int randnum =  low + ( std::rand() % ( high - low + 1 ) );

	do{
		std::cout << "Guess #" << tries << " enter your guess: ";
		std::cin >> guess;
		while(guess < low || guess > high)
		{
			std::cout << "Guess was out of the range [" << low << ", " << high << "]. Please re-enter: ";
			std::cin >> guess;
		}
		 if(guess < randnum)
		{
			std::cout << "guess is too small\n";
		}
		else if( guess > randnum)
		{
			std::cout << "guess is too big\n";
		}
		else
		{
			std::cout << "Congratulations you guessed the correct number!" << "\n";
		}
		tries = tries + 1;
	}
	while(guess != randnum);
	return 0;
}