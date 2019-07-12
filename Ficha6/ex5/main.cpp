#include <iostream>

using namespace std;

int main(){
    char input;

    cout << "Introduza: ";
    cin >> input;

    if (((input >= 'a') && (input <= 'z')) || ((input <= 'A') && (input <= 'Z'))){
        cout << "Carater \n";
    }else if (((input >= '0') || (input <= '9'))){
        cout << "Numero \n";
    }else{
        cout << "Simbolo \n";
    }
}