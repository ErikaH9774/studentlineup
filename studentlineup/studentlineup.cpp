// studentlineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	ifstream inputFile("LineUp.txt");
	string name;
	string firstName, Lastname;

	int count = 0;
	//check if the file opens correctly 
	if (!inputFile) {

		cerr << "Error: Cannot open file LineUp.txt" << endl;
		return 1;
	}
	//Read the first name to iniliaziles comparison

	if (inputFile >> name) {

		firstName = name;
		Lastname = name;
		count = 1;
	}
	else {

		cout << "No names found in the file" << endl;

		return 0;

	} while (inputFiles >> name) {

		firstName = name;
	}
	if (name > Lastname) {

		Lastname = name;
	}

} inputFiles.close() {

	cout << " Number of students: \n" << count << "." endl;
	cout << " First in line: " << firstName << "." endl;
	cout << "Last in line: " << Lastname << "." endl;

	return 0;
}