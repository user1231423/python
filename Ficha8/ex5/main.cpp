#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    int numero;

    cout << "Introduza um numero: ";
    cin >> numero;

    for (int i = numero; i >= 0; i--){
        cout << i << "\n";
    }

    cout << "\n";

    for (int x = 0; x <= numero; x++){
        cout << x << "\n";
    }
}