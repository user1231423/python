#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char frase1[100];
    char frase2[100];

    cout << "Escreva a primeira frase: ";
    cin >> frase1;

    cout << "Escreva a segunda frase: ";
    cin >> frase2;

    cout << strcat(strcat(frase1," "), frase2) << "\n";
}