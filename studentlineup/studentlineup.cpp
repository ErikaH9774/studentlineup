// studentlineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//where the file is being pulled out when using this format
	ifstream inputFile("LineUp.txt");
	string name;
	string firstName, Lastname;

	int count = 0;
	//check if the file opens correctly 
	if (!inputFile) {
		//will receive error pop up if the file cannot open. 
		cerr << "Error: Cannot open file LineUp.txt" << endl;
		return 1;
	}
	//Read the first name to iniliaziles comparison
	//if statement if the file names is greater than name then proceed with the next statement
	if (inputFile >> name) {

		firstName = name;
		Lastname = name;
		count = 1;
	}
	//otherwise it will display no names found in the file
	else {

		cout << "No names found in the file" << endl;

		return 0;
		//while input file is greater than name then first name is equal to name and name is greater than lastname
	} while (inputFile >> name) {

		firstName = name;
	}
	if (name > Lastname) {

		Lastname = name;
	}

 inputFile.close(); 
 //displays number of students first in line and last in line. 
 cout << " Number of students: \n" << count << "."; 
 cout << " First in line: " << firstName << "."; 
 cout << "Last in line: " << Lastname << "."; 

	return 0;
}