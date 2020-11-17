#include <iostream>

int main()
{
	int height = -1;
	std::string result;
	while(height < 0)
	{
	std::cout << "Enter the height (must be positive): ";
	std::cin >> height;
	}
	int index = height - 1;
	for(int i = 0; i < height; i++)
	{
		for(int i = 0; i < height; i++)
		{
		if(i >= index)
			result += "*";
		else
			result += " ";
		}
		result += "\n";
		index--;
	}
	std::cout << result;
	return 0;
	
}