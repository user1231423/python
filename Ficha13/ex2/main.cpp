#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>

using namespace std;

float notas[3][3];

int main(){
    float somaDisciplina,somaColuna;
    float mediaDisciplina1,mediaDisciplina2, mediaColuna;
    for (int i = 0; i <= 2; i++){
        cout << "Nota de BP do " << i + 1 << "º periodo: ";
        cin >> notas[i][0];
        somaDisciplina += notas[i][0];
    }
    mediaDisciplina1 = somaDisciplina / 3;
    somaDisciplina = 0;
    system("clear");
    for (int x = 0; x <=2; x++){
        cout << "Nota de BD do " << x + 1 << "º Periodo: ";
        cin >> notas[0][x];
        somaDisciplina += notas[0][x];
    }
    mediaDisciplina2 = somaDisciplina / 3;

    system("clear");
    cout << "Media de BP: " << mediaDisciplina1 << "\n";
    cout << "Media de BD: " << mediaDisciplina2 << "\n";

    for (int i = 0; i <= 2; i++){
        somaColuna = 0;
        mediaColuna = 0;
        somaColuna += notas[i][0];
        somaColuna += notas[0][i];
        mediaColuna = somaColuna / 2;
        cout << "Media do 1º Periodo: " << mediaColuna << "\n";
    }
}