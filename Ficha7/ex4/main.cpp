#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    int v[7] = {1,2,3,4,5,6,7};
    int *p = v;
    int i;
    cout << "Indice 0: " << v[0] << "\n";
    cout << "Apontador para o 1: " << *p++ << "\n";
    cout << " \n";

    cout << "Indice 3: " << v[3] << "\n";
    cout << "Apontador para o 1: " << *(p+2) << "\n";
    cout << " \n";

    cout << "Indice 2: " << v[2] << "\n";
    cout << "Apontador para o 2: " << * ++p << "\n";
    cout << " \n";

    cout << "Indice 6: " << v[6] << "\n";
    cout << "Apontador para o 3: " << *(p+4) << "\n";
    cout << " \n";
    *p++;

    cout << "Indice 0: " << v[0] << "\n";
    cout << "Apontador para o 3: " << *(p-3) << "\n";
    cout << " \n";
    *p++;

    for (i = -4; i < 2; i++)
        cout << *(p+i) << ",";
        cout << *(p+i) << ". \n";

}