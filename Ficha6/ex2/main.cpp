#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string.h>

using namespace std;

int main(){
    int prod, num1, num2;
    prod = 0;
    do{
        cout << "Insira o primeiro numero: ";
        cin >> num1;
        cout << "Insira o segundo numero: ";
        cin >> num2;
        cout << "\n";
        prod = num1 * num2;
    }while(prod >= 10 || prod >= 1000);
    cout << prod << "\n";
}