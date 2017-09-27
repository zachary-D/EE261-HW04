#include <iostream>
#include <fstream>
#include <string>
#include <sstream>



const std::string outFileName = "fileOut.txt";

int main()
{
	std::ofstream fileOut;
	fileOut.open(outFileName);

	return 0;
}