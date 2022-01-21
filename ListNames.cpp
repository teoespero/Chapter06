//  ListNames.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;



int main()
{
	ofstream outStream;
	
	string
		studentname = "";

	int
		counter = 0;

	outStream.open("outfile.dat");
	if (! outStream.fail()) {
		cout << "enter student names, press ENTER twice to exit:" << endl << endl;
		do {
			getline(cin, studentname);
			outStream << studentname << endl;
		} while (studentname.length() > 0);
		outStream.close();
	}
	else
		cout << "\t*** File I/O Error.....";
	

	ifstream input_file;
	input_file.open("outfile.dat");

	if (!input_file.fail()) {
		cout << endl << endl << "The names you entered are:" << endl;
		while (getline(input_file, studentname)) {
			if (studentname.length() > 0) {
				counter += 1;
				cout << "\t" << counter << " " << studentname << endl;
			}
		}
		input_file.close();
	}
	else
		cout << "\t*** File I/O Error.....";

	
}