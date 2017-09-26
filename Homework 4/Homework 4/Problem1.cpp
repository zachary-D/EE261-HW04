#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cmath>


using std::cout;
using std::endl;
using std::cin;
using std::setprecision;


const std::string fileName = "inputFile.txt";		//The name of the data file
std::ifstream file;

int main()
{
	file.open(fileName);		//Open the data file

	float studentScore;		//The student's score
	float totalScore;			//The total points available

	file >> studentScore >> totalScore;		//Read in data from the file

	//Calculate the average
	//'studentScore' is cast
	float average = studentScore / totalScore;

	//Write it to the screen
	cout << std::setprecision(5) << average << endl;
	
	cin.get();	//Hold the window open
	return 0;
}