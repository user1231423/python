#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>


using namespace std;

int main(){
    char frase[100];

    cout << "Escreva uma frase: ";
    cin >> frase;

    strcat(frase, ".");
    cout << frase << "\n";
}