// Alexandros Aidonis



#include <iostream>





std::string middle(std::string str)

{

	int i = str.length();



	if ((i % 2) == 0) {

		return str.substr(i/2 - 1, 2);

	}

	return str.substr(i/2, 1);

}

int main()

{

	std::cout << middle("middle") << "\n";

	return 0;

}