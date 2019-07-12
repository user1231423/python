#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    char letra;

    cout << "Introduza uma letra: ";
    cin >> letra;

    if (letra >= 'A' && letra <= 'Z'){
        cout << "Maiuscula \n";
    }else{
        cout << "Minuscula \n";
    }
}