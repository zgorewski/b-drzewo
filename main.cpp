#include <iostream>
#include "funkcjeDef.h"
#include <stdlib.h>

using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct  node *newNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data = data;

    node->left = NULL;
    node->right = NULL;
    return (node);
};

int main(int argc, char *argv[])
{
    bool running = true;
    while(running) {
        int wybor;

        cout << " MENU WYBORU" << endl;
        cout << "|--------------------------------------------------|" << endl;
        cout << " 1. Wyswietl obecne drzewo w postaci graficznej" << endl;
        cout << " 2. Dodaj nowa liczbe do drzewa" << endl;
        cout << " 3. Usun liczbe z drzewa" << endl;
        cout << " 4. Wypisz statystke drzewa" << endl;
        cout << " 5. Zbalansuj drzewo ????????????" << endl;
        cout << " 6. Zakoncz program" << endl;
        cout << "|--------------------------------------------------|" << endl;

        cout << " WYBOR: ";
        cin >> wybor;

        if(cin.fail()){
            cin.clear();
            cin.ignore(10000, '\n');
        }

        switch (wybor) {
            case 1:
                system("cls");
                if(argc > 1) {
                    for (int i = 1; i < argc; i++)
                        Odczyt(argv[i]);
                } else {
                    cout
                            << "Aby otworzyc plik, wywolaj funkcje jeszcze raz, i podaj jego poprawna nazwe... (call the function with ./main *filename.txt*)"
                            << endl;
                    return 0;
                }
                break;
            case 2:
                system("cls");
                cout << "NIE MAM JESZCZE FUNKCJI" << endl;
                break;
            case 3:
                system("cls");
                cout << "NIE MAM JESZCZE FUNKCJI" << endl;
                break;
            case 4:
                system("cls");
                cout << "NIE MAM JESZCZE FUNKCJI" << endl;
                break;
            case 5:
                system("cls");
                cout << "NIE MAM JESZCZE FUNKCJI" << endl;
                break;
            case 6:
                running = false;
                break;
            default:
                system("cls");
                cout << "Niepoprawne dane wejsciowe." << endl;
        }
    }
    return 0;
}
