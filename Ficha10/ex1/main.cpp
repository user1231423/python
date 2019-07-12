#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char texto[100]; //Array de carateres
char *p = texto; //Ponteiro para texto

int main (){
    system("clear");
    cout << "Insira uma palavra: ";
    cin >> texto;
    if (*p == '\0'){
        cout << "\0";
    }
    cout << "\n";
    while (*p != '\0'){
        cout << *p++;
    }

    *p--;
    cout << "-> ";
    while (*p){
        cout << *p--;
    }
    cout << "\n";
}