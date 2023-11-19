#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "funkcje.h"

using namespace std;


void Odczyt(){

	string fileName;
	bool valid = true;

	while(valid){

		cout << "Podaj nazwe pliku: ";
		cin >> fileName;

		fstream file;
		file.open(fileName);

		if(file.is_open()){
			string line;

			cout << "Zawartosc pliku " << fileName << ": " << endl;
			while(getline(file, line)){
				cout << line << endl;
			}
			file.close();
			valid = false;
		}
		else{
			cout << "Sprawdz czy plik znajduje sie w odpowiedniej lokalizacji" << endl;
		}

	}
}