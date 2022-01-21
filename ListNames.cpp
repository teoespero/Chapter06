//  ListNames.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;



int main()
{
	ofstream outStream;
	outStream.open("outfile.dat");

	string
		studentname = "";

	int
		counter = 0;

	cout << "enter student names, press ENTER twice to exit:" << endl << endl;
	do {
		getline(cin, studentname);
		outStream << studentname << endl;
	} while (studentname.length() > 0);
	outStream.close();

	ifstream input_file;
	input_file.open("outfile.dat");

	cout << endl << endl << "The names you entered are:" << endl;
	while (getline(input_file, studentname)) {
		if (studentname.length() > 0) {
			counter += 1;
			cout << "\t" << counter << " " << studentname << endl;
		}
	}
	input_file.close();
}