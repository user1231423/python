#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class aluno{
    public:
        char nome[50];
        int numero;
        float nota1,nota2,notaFinal;
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

        void setNotas(){
            cout << "Nota 1: ";
            cin >> this->nota1;
            cout << "Nota 2: ";
            cin >> this->nota2;
        }

        char* getNome(){
            return this->nome;
        }

        int getNumero(){
            return this->numero;
        }

        float getNotafinal(){
            return this->notaFinal = (this->nota1 + this->nota2) / 2;
        }
};

int main(){
    system("clear");
    aluno a1;
    aluno *p;
    p = &a1;
    cout << "\t Prognostigos de BP. \n";
    p->setNome();
    p->setNumero();
    p->setNotas();
    system("clear");
    cout << "Nome: " << p->getNome() << "\n";
    cout << "Numero: " << p->getNumero() << "\n";
    cout << "Nota final: " << p->getNotafinal() << "\n";
}