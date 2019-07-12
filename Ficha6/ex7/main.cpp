#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string.h>

using namespace std;

int main(){
    int i;
    cout << "1- Executar o Programa calculadora \n";
    cout << "2- Converter graus centígrados/fahrenheit \n";
    cout << "3- Converter metros/quilómetros \n";
    cout << "0- Sair \n";

    cout << "Escolha uma opção de 1 a 5: ";
    cin >> i;

    switch (i) {
        case 1: 
            cout << "Calculadora: a executar... \n";
            break;
        case 2: 
            cout << "Conversão de temperaturas \n";
            break;
        case 3: 
            cout << "Conversão de distâncias \n";
            break;
        case 0: 
            cout << "A terminar o programa... \n";
            break;
        default: 
            cout << "Inválido \n";
            break;
    }
}