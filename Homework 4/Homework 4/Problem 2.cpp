#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;


const std::string fileName = "inputFile.txt";
const std::string outFileName = "outputFile.txt";


int main()
{
	//Create an object to store the data streams in and open the files
	std::ifstream fileIn;
	fileIn.open(fileName);
	std::ofstream fileOut;
	fileOut.open(outFileName);

	std::vector<char> data;

	//Load the data from the file into 'data'
	do {
		data.push_back(fileIn.get());
	} while (fileIn.eof() == false);

	data.pop_back();	//Destroy the last element in the vector, as it's junk data.  Because reasons?
	
	//Loop over every item in 'data' and write their uppercase forms to the output file
	for (int iter = data.size() - 1; iter >= 0; iter--)
	{
		fileOut << (char)toupper(data[iter]);
	}

	fileIn.close();
	fileOut.close();

	return 0;
}