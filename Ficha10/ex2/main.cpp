#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

float notas[6];
void pedirNotas(){
    for (int i = 0; i < 6; i++){
        cout << "Insira uma nota: ";
        cin >> notas[i];
    }
}

int main (){
    pedirNotas();
    for (int i = 0; i < 6; i++){
        notas[i] += 0.5;
        cout << notas[i] << "\n";
    }
}
