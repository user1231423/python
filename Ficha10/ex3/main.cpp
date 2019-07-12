#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

float notas[6];
float *p = notas;

void pedirNotas(){
    for (int i = 0; i < 6; i++){
        cout << "Insira uma nota: ";
        cin >> *(p + i);
    }
}

int main (){
    pedirNotas();
    for (int i = 0; i < 6; i++){
        *(p + i) += 0.5;
        cout << *(p + i) << "\n";
    }

}
