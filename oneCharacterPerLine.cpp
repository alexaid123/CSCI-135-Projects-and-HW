/*
Author: Alexandros Aidonis
Course: CSCI-135
Instructor: Tong Yi
Assignment: E4.8

Write a program that reads a word and prints each character of the word on a separate line.
*/

#include <iostream>
#include <string>
#include <sstream>

int main()
{	
	std::cout << "Enter a word: ";//Prompts user to enter a word
	std::string word; //String variable that represents the inputed word
	std::cin >> word;
	for(int i = 0; i < word.length();i++)//For loop that goes through each idex of the string and prints it out
	{
		std::cout << word.at(i) << std::endl;
	}
	return 0;
}