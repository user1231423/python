#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string.h>

using namespace std;

int main(){
    double preco,desc;
    int quantidade;

    cout << "Introduza o preço do produto: ";
    cin >> preco;
    cout << "Introduza a quantidade: ";
    cin >> quantidade;

    if (quantidade >= 500){
        desc = preco * 0.05;
        preco  -= desc;
        cout << "Total a pagar: " << preco * quantidade << "€ \n";
    }else if(quantidade > 1000){
        desc = preco * 0.08;
        preco  -= desc;
        cout << "Total a pagar: " << preco * quantidade << "€ \n";
    }else{
        cout << "Total a pagar: " << preco * quantidade << "€ \n";
    }
}