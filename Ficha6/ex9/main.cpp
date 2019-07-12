#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string.h>

using namespace std;

int main(){
    int numero;

    cout << "Introduza um numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++){
        if(i % 2 == 0){
            cout << i << "\n";
        }
    }
}