#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    int numero;

    cout << "Introduza um numero: ";
    cin >> numero;

    switch (numero)
    {
        case 1:
            cout << "Um \n";
        break;

        case 2:
            cout << "Dois \n";
        break;

        case 3:
            cout << "Tres \n";
        break;

        default:
            cout << "Inválido! \n";
        break;
    }
}