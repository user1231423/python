#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string.h>

using namespace std;


int main(){
    char pass[10];
    cout << "Insira uma password: ";
    cin >> pass;
    if (strcmp(pass,"Teste") == 0){
        cout << "Acertou! \n";
    }else{
        cout << "Errou! \n";
    }
}