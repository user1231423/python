#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    int num;
    num = 0;
    while( (num > 5) || (num < 1) ){
        cout << "Introduza um numero: ";
        cin >> num;
        if (num > 5 || num < 1){
            system("clear");
            cout << "Inválido! \n";
        }else{
            cout << "Válido! \n";
        }
    }
}