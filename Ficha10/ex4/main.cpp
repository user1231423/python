#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char fruta1[20];
char fruta2[20];
char frase[40];

void pedirFrutas(){
    cout << "Nome da fruta 1: ";
    gets(fruta1);

    cout << "Nome da fruta 2: ";
    gets(fruta2);
}

void fazerFrase (char fruta1[20], char fruta2[20]){
    strcat(frase, fruta1);
    strcat(frase, " ");
    strcat(frase, fruta2);
}

int main (){
    system("clear");
    pedirFrutas();
    fazerFrase(fruta1,fruta2);
    cout << "Frutas na mesma frase-> \n" << frase << "\n";
}
