#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

char palavra[100];

int main(){
    cout << "Introduza uma palvra: ";
    gets(palavra);

    for (int i = 0; i < strlen(palavra); i++){
        cout << "Posição: " << i << "-> "<<palavra[i] << "\n";
    }
}