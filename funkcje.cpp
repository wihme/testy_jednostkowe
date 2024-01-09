#include "funkcje.h"
#include <iostream>
#include <cmath>

int main()
{
    int dane[] = { 1, 2, 3, 4 }; 
    int liczbalog = 2;
    int wartosc = -5;

    int odchyl = odchylenie(dane, 4);

    if (liczbalog > 0) {
        logNat(liczbalog);
    }

    expo(3); 

    std::cout << "Wartosc bezwzgledna z -5 to: " << bezwzgl(wartosc);

    return 0;
}
