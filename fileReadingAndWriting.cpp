#include <iostream>

using std::cerr;

using std::endl;

#include <fstream>

using std::ofstream;

#include <cstdlib> 

int main()

{

   ofstream outdata; 

outdata.open("hello.txt"); 

   if( !outdata ) { 

      cerr << "Error: file could not be opened" << endl;

      exit(1);

   }

      outdata << "Hello, World!";

   outdata.close();

std::ifstream file("hello.txt");

  std::string str;

  while (std::getline(file, str)) {

    std::cout << str << "\n";

  }

 

 

 

   return 0;

}
