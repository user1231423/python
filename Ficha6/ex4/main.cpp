#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string.h>

using namespace std;

int main(){
    int array [4];

    for (int i = 0; i <= 4; i++){
        cout << "Insira o valor para a posição " << i << ": ";
        cin >> array[i];
    }

    for (int x = 4; x >= 0; x--){
        cout << "Posição " << x << ": " << array[x] << "\n";
    }
}