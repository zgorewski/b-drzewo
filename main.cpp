#include <iostream>
#include "funkcjeDef.h"

using namespace std;

int main(int argc, char *argv[])
{
    if(argc > 1) {
        for (int i = 1; i < argc; i++)
            Odczyt(argv[i]);
    }
    else{
        cout << "Aby otworzyc plik, wywolaj funkcje jeszcze raz, i podaj jego poprawna nazwe... (call the function with ./main *filename.txt*)" << endl;
    }
}
