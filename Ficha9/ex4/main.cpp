#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    int num;
    num = 0;
    while( (num > 4) || (num < 1) ){
        cout << "Compra de senhas: \n\n";
        cout << "1. Pequeno almoço \n";
        cout << "2. Almoço \n";
        cout << "3. Lanche \n";
        cout << "4. Jantar \n";
        cout << "Escolha uma opção: ";
        cin >> num;
        if (num > 4 || num < 1){
            system("clear");
            cout << "Inválido! \n\n";
        }else{
            system("clear");
            switch (num){
                case 1:
                    cout << "Comprou uma senha para o pequeno almoço! \n";
                break;
                case 2:
                    cout << "Comprou uma senha para o almoço! \n";
                break;
                case 3:
                    cout << "Comprou uma senha para o lanche! \n";
                break;
                case 4:
                    cout << "Comprou uma senha para o jantar! \n";
                break;
                default:
                    cout << "Erro! \n";
                break;
            }
        }
    }
}