#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string.h>

using namespace std;

int main(){
    int numero,soma;
    soma = 0;
    do{
        cout << "Introduza um numero entre 1 e 15: ";
        cin >> numero;
    } while (numero < 1 || numero > 15);

    for (int i = numero; i <= 15; i++){
        soma += i;
        cout << i << "\n";
    }
    cout << "Soma dos numeros: " << soma << "\n";
}