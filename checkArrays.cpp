#include <iostream>





bool equals(int a[], int a_size, int b[], int b_size)

{

	if(a_size != b_size)

	{

		return false;

	}

	for(int i = 0; i < a_size; i++)

	{

		if(a[i] != b[i])

		{

			return false;

		}

	}

	return true;

}

int main()

{

	int a [] = { 16, 2, 77, 40, 12071 };

	int b [] = { 2, 77, 40, 12071 };



	std::cout << std::boolalpha;

	std::cout << equals(a,5,b,4) << "\n";

}