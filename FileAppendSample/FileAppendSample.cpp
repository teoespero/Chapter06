//  FileAppendSample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;



int main() {
	//	let's first create the file if it doesn't exist

	ofstream myFile;
	char checkYes = 'n';

	myFile.open("data.txt", ios::app);
	if (myFile.fail()) {
		cout << "\t***File I/O Error....." << endl;
		exit(1);
	}
	else {
		myFile << "1 2 buckle my shoe. " << endl
			<< "3 4 shut the door." << endl;
	}

	myFile.close();

	do {
		cout << "would you like to add more text to the file [y/n]?.....";
		cin >> checkYes;
		checkYes = tolower(checkYes);
	} while (!(checkYes == 'n' || checkYes == 'y'));

	if (checkYes == 'y') {
		//	let's append more data to the file
		myFile.open("data.txt", ios::app);
		if (myFile.fail()) {
			cout << "\t***File I/O Error....." << endl;
			exit(1);
		}
		else {
			myFile << "5 6 pick up sticks. " << endl
				<< "7 8 ain't C++ great!" << endl;
		}
		myFile.close();
	}
}