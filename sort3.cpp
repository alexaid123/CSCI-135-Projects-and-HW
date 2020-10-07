
// Alexandros Aidonis



#include <iostream>



void sort2(int& a, int& b)

{

	if(a > b)

	{

		int temp = b;

		b = a;

		a = temp;

	}

}



void sort3(int& a, int& b, int& c)

{

	sort2(a,b);

	sort2(a,c);

	sort2(b,c);

}



int main()

{

	int v = 3;

	int w = 4;

	int x = 1;

	sort3(v, w, x);

	std::cout << v;

	std::cout << w;

	std::cout << x;

}