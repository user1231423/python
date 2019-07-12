#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int x,y;

void pedirDados(){
    cout << "Introduza o valor de x: ";
    cin >> x;
    cout << "Introduza o valor de y: ";
    cin >> y;
}

int divisao(int num1, int num2){
    return num1 / num2;
}

int restoDiv(int num1, int num2){
    return num1 % num2;
}

int main(){
    pedirDados();
    cout << "Resultado da divisção: " << divisao(x,y) << "\n";
    cout << "Resto da divisão: " << restoDiv(x,y) << "\n";
}