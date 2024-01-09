#pragma once

#include <iostream>

int logNat(int liczbalog);
int srednia(const int* liczby, int size);
int odchylenie(const int* liczby, int size);
int expo(int k);
int bezwzgl(int liczba);
int suma(const int* liczby, int size);

#ifndef FUNC_IMPLEMENTATION
#define FUNC_IMPLEMENTATION

#include <cmath>  

int logNat(int liczbalog)
{
    std::cout << "logarytm naturalny z twojej liczby wynosi: " << log(liczbalog) << std::endl << std::endl;
    return log(liczbalog);
}

int srednia(const int* liczby, int size)
{
    int suma = 0;

    for (int i = 0; i < size; ++i) {
        suma += liczby[i];
    }

    return suma / size;
}

int odchylenie(const int* liczby, int size)
{
    int sred = srednia(liczby, size);
    int sumaKwadratowRoznic = 0;

    for (int i = 0; i < size; ++i) {
        sumaKwadratowRoznic += pow(liczby[i] - sred, 2);
    }

    std::cout << "odchylenie standardowe wynosi:" << sqrt(sumaKwadratowRoznic / size) << std::endl << std::endl;

    return sqrt(sumaKwadratowRoznic / size);
}

int expo(int k)
{
    int wynik = exp(k);
    std::cout << "exponenta: " << wynik << std::endl << std::endl;
    return wynik;
}

int bezwzgl(int liczba)
{
    return (liczba < 0) ? -liczba : liczba;
}

int suma(const int* liczby, int size)
{
    int wynik = 0;

    for (int i = 0; i < size; ++i) {
        wynik += liczby[i];
    }

    return wynik;
}

#endif
