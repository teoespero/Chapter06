//  SimpleFileIO.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    int
        numbers = 0,
        sum = 0;

    outStream.open("input.dat");

    do {
        cout << "Enter a number.....";
        cin >> numbers;
        if (numbers > 0)
            outStream << numbers << endl;
    } while (numbers > 0);
    outStream.close();


    ifstream input_file("input.dat");
    
    cout << endl << endl;
    cout << "The numbers are....." << endl;
    while (input_file >> numbers) {
        cout << "\t" << numbers << endl;
        sum += numbers;
    }
    
    cout << endl << "Their sum is " << sum << endl;
    input_file.close();
}