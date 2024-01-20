//============================================================================
// Name        : CSC450-CT5.cpp
// Author      : Chris Letizio
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Program to append a file in C++
//============================================================================


#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void reverseFile(const string& inputFile, const string& outputFile){

	ifstream fin(inputFile);
	ofstream fout(outputFile);

	if (!fin){
		cerr << "There was an error opening the input file: " << inputFile << endl;
		return;
	}

	if (!fout){
		cerr << "There was an error opening the output file: " << outputFile << endl;
		return;
	}

	string line;

	while (getline(fin, line)){
		reverse(line.begin(), line.end());
		fout << line << endl;
	}

	fin.close();
	fout.close();



}

int main() {

	string userInput;

	ofstream fout;

	// Append the file
	fout.open("CSC450_CT5_mod5.txt", ios::app);

	while (fout){
		cout << "Enter a string to be written to the file or '-1' to quit: \n";
		getline(cin, userInput);
		if(userInput == "-1")
			break;
		fout << userInput << endl;
	}

	fout.close();

	ifstream fin;

	// Open and read the original file
	fin.open("CSC450_CT5_mod5.txt");


	while (getline(fin, userInput)){
		cout<< userInput << endl;
	}

	fin.close();

	//Reverse and write the new file.
	reverseFile("CSC450_CT5_mod5.txt", "CSC450-mod5-reverse.txt");

	cout << "\nReversed file contents are: \n";
	fin.open("CSC450-mod5-reverse.txt");

	while (getline(fin, userInput)){
		cout << userInput << endl;
	}

	return 0;

}
