#include <iostream>
#include "odczyt.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    for(int i=1; i<argc; i++)
        Odczyt(argv[i]);
}
