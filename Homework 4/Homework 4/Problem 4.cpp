#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::setw;

const std::string outFileName = "fileOut.txt";

float toNum(std::string input)
{
	float out;
	std::stringstream convert;

	convert << input;
	convert >> out;

	return out;
}



int main()
{
	std::ofstream fileOut;
	fileOut.open(outFileName);

	std::vector<float> data;

	std::string input;
	float lastValue;

	cout << "Please enter temperature values, and enter 'done' when done." << endl;

	//Handle the first input
	cin >> input;
	fileOut << input << endl;
	lastValue = toNum(input);
	data.push_back(lastValue);

	while (true)		//Read data from the user until they're done
	{
		cin >> input;
		if (input == "done") break;

		fileOut << toNum(input) << " " << toNum(input) - lastValue << endl;
		lastValue = toNum(input);
		data.push_back(lastValue);
	}
	
	float sum = 0;
	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		sum += (*iter);
	}

	cout << "Average: " << sum / data.size() << endl;


	cin.get(); cin.get();	//Hold the window open
	fileOut.close();
	return 0;
}