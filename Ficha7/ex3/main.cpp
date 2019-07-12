#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char palavra1[100], palavra2[100];

    cout << "Escreva a primeira frase: ";
    cin >> palavra1;

    cout << "Escreva a segunda frase: ";
    cin >> palavra2;

    if (strcmp(palavra1,palavra2) == 0){
        cout << "As Palavras são iguais! \n";
    }else{
        if (strlen(palavra1) > strlen(palavra2)){
            cout << "A primeira palavra é maior! \n";
        }else{
            cout << "A segunda palavra é maior! \n";
        }
    }
}