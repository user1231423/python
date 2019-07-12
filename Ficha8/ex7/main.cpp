#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    int num1,num2;

    cout << "Introduza o 1º numero: ";
    cin >> num1;

    cout << "Introduza o 2º numero: ";
    cin >> num2;

    if (num1 > num2){
        int temp;
        temp = num1;

        num1 = num2;
        num2 = temp;
    }
    for (int i = num1; i <= num2; i++){
        cout << i << "\n";
    }
}