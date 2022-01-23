//  PerSymbolApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	char keypressed = NULL;
	string dataentered = "";

	ofstream inputfile;
	
	inputfile.open("myfile.txt");
	if (inputfile.fail()) {
		cout << "\t*****File I/O error.....";
		exit(1);
	}
	else {
		cout << "enter characters/numbers, then press ENTER when you're done....." << endl;

		do {
			cin.get(keypressed);
			dataentered += keypressed;

		} while (keypressed != '\n');

		inputfile << "Text data.....";
		inputfile << dataentered;
		inputfile << "Text data reversed.....";
		for (int pointer = dataentered.length() - 2; pointer >= 0; pointer--)
			inputfile.put(dataentered[pointer]);
	}

	inputfile.close();

	ifstream input_file;
	input_file.open("myfile.txt");

	if (!input_file.fail()) {
		cout << endl << endl << "The texts you entered are:" << endl;
		while (getline(input_file, dataentered)) {
			cout << dataentered << endl;
		}
		input_file.close();
	}
	else
		cout << "\t*** File I/O Error.....";


	
}