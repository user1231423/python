#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    bool invalido;
    int num;
    invalido = true;
    num = 1;
    system("clear");
    while (invalido){
        cout << "Introduza um numero: ";
        cin >> num;
        if (num < 1 || num > 10){
            system("clear");
            cout << "Numero inválido! \n";
        }else{
            invalido = false;
        }
    }
}