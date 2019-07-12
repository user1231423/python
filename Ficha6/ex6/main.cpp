#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string.h>

using namespace std;

int num = 0;
int cont = 0;
void inserir(){
    cont += 1;
    cout << "Introduza um numero: ";
    cin >> num;
};

int main(){
    int soma;
    soma = 0;
    while (num <= 100 || soma >= 500){
        if (num > 100){
            break;
            cout << "Num Maior que 100 \n";
        }else if(soma >= 500){
            break;
        }else{
            inserir();
            soma += num;
        }
    }
    cout << "Soma: " << ": " << soma << "\n";
    cout << "Media: " << soma / cont << "\n";
}