#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>

using namespace std;

int sub (int *a, int *b);

int x = 2;
int y = 4;

int main(){
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "Resultado da subtração = " << sub(&x, &y) << "\n";
}

int sub(int *a, int *b){
    return *a - *b;
}