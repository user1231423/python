#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    int op;
    op = 1;
    while( (op > 0) && (op < 3) ){
        cout << "\n Menu de comandos" << "\n\n";
        cout << "0. Sair \n";
        cout << "1. Mostrar \n";
        cout << "2. Apresentar \n";
        cout << "Escolha uma opção: ";
        cin >> op;
    }
    
}