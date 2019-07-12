#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class aluno{
    public:
        char nome[50];
        int numero;
        float nota;
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

        void setNota(){
            cout << "Nota esperada: ";
            cin >> this->nota;
        }

        char* getNome(){
            return this->nome;
        }

        int getNumero(){
            return this->numero;
        }

        float getNota(){
            return this->nota;
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
    p->setNota();
    system("clear");
    cout << "Nome: " << p->getNome() << "\n";
    cout << "Numero: " << p->getNumero() << "\n";
    cout << "Nota esperada: " << p->getNota() << "\n";
}