#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::string inputName = "input.txt";
	std::ifstream inputFile(inputName);
	if (!inputFile.is_open()) 
	{
		std::cerr << "Failed to open the user data file." << std::endl;
		exit(1);
	}
	std::string outputName = "output.txt";
	std::ofstream outputFile(outputName);
	if (!outputFile.is_open()) 
	{
		std::cerr << "Failed to open the user data file." << std::endl;
		exit(1);
	}

	std::string name, gender, number, profession, school;
	int age;
	double latitude, longitude;
	while(inputFile 
		>> name
		>> age
		>> gender
		>> number
		>> profession
		>> school
		>> latitude
		>> longitude)
		{
			outputFile << name << "," << number << "\n";
			// do something with any of these 8 fields.
		}
	return 0;
}