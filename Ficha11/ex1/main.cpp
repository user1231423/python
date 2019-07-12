#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class aluno {
    public:
        float teste1,teste2;
        
    public:
        float notaFinal(){
            return (teste1 * 0.50) + (teste2 * 0.50);
        }
};

int mudaNota(aluno *a, float nota1, float nota2){
    a->teste1 = nota1;
    a->teste2 = nota2;
    return a->notaFinal();
}
int main(){
    aluno a1;
    a1.teste1 = 20;
    a1.teste2 = 10;
    aluno *p;
    *p = a1;
    cout << "Antes da alteração: " << a1.notaFinal() << "\n";
    cout << "Depois da alteração: " << mudaNota(p,15,8) << "\n";
}