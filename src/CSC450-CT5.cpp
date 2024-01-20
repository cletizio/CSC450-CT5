//============================================================================
// Name        : CSC450-CT5.cpp
// Author      : Chris Letizio
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Program to append a file in C++
//============================================================================


#include <iostream>
#include <fstream>
using namespace std;

int main() {

	string userInput;

	ofstream fout;

	fout.open("CSC450_CT5_mod5.txt", ios::app);

	while (fout){
		getline(cin, userInput);
		if(userInput == "-1")
			break;
		fout << userInput << endl;
	}

	fout.close();

	ifstream fin;

	fin.open("CSC450_CT5_mod5.txt");

	string line;

	while (getline(fin, line)){
		cout<< line << endl;
	}

	fin.close();

	return 0;

}
