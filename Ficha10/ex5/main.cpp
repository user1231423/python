#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char fruta1[20];
char *pointer1 = fruta1;
char fruta2[20];
char *pointer2 = fruta2;
char frase[40];

void pedirFrutas(){
    cout << "Nome da fruta 1: ";
    cin.getline(fruta1,20);    
    cout << "Nome da fruta 2: ";
    cin.getline(fruta2,20);    
}

void fazerFrase (char *p1, char *p2){
    int cont = 0;
    char str1[20];
    char str2[20];
    while (*p1 != '\0'){
        str1[cont] = *p1++;
        cont += 1;
    }
    cont = 0;
    while (*p2 != '\0'){
        str2[cont] = *p2++;
        cont += 1;
    }
    strcat(frase, str1);
    strcat(frase, " ");
    strcat(frase, str2);
}

int main (){
    system("clear");
    pedirFrutas();
    fazerFrase(pointer1,pointer2);
    cout << "Frutas na mesma frase-> \n" << frase << "\n";
}
