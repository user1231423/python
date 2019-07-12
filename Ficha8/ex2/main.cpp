#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    int numeros[2] = {};

    for (int i = 0; i <= 2; i++){
        cout << "Introduza um numero: ";
        cin >> numeros[i];
    }


    system("clear");
    int maior = -1;
    for (int x = 0; x <= 2; x++){
        if(numeros[x] > maior){
            maior = numeros[x];
        }
    }

    cout << "Maior número: " << maior << "\n";
}