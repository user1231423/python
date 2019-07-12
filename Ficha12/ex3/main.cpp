#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>

using namespace std;

class aluno{
    public:
        char nome[50];
        int numero;
        float notaFinal;
        float nota1();
        float nota2();
        aluno(){
            strcpy(nome,"Defina nome");
            cout << "Criado um objeto aluno." << endl;
        }
        ~aluno(){
            cout << endl << "Destruido um objeto aluno" <<endl;
        }
        void setNome(){
            cout << "Nome do aluno: ";
            gets(this->nome);
        }
        
        void setNumero(){
            cout << "Numero do aluno: ";
            cin >> this->numero;
        }

        char* getNome(){
            return this->nome;
        }

        int getNumero(){
            return this->numero;
        }

        float getNotafinal(){
            return this->notaFinal = (this->nota1() + this->nota2()) / 2;
        }
};

float aluno::nota1(){
    return rand() % 20 + 5;
}

float aluno::nota2(){
    return rand() % 20 + 5;
} 


int main(){
    srand(time(NULL));
    system("clear");
    aluno a1;
    aluno *p;
    p = &a1;
    cout << "\t Prognostigos de BP. \n";
    p->setNome();
    p->setNumero();
    p->nota1();
    p->nota2();
    system("clear");
    cout << "Nome: " << p->getNome() << "\n";
    cout << "Numero: " << p->getNumero() << "\n";
    cout << "Nota final: " << p->getNotafinal() << "\n";
}