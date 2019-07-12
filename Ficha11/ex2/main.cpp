#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


class aluno{
    public:
        char escola[30];
        char nome[30];
        aluno(){
            strcpy(nome,"Defina nome");
            cout << "Criado um objeto aluno." << endl;
        }
        ~aluno(){
            cout << endl << "Destruido um objeto aluno" <<endl;
        }
        void setNome(){
            cout << "Nome a inserir: ";
            cin >> this->nome;
        }
        char* getNome(){
            return this->nome;
        }
        void setEscola(){
            cout << "Insira o nome da escola: ";
            cin >> this->escola;
        }
        char* getEscola(){
            return this->escola;
        }
};

void apresentarDadosAluno(aluno *a){
    cout << "Nome: " << a->nome << "\n";
    cout << "Escola: " << a->escola << "\n";
};

void definirDadosAluno(aluno *a){
    cout << "Nome: ";
    cin >> a->nome;
    cout << "Escola: ";
    cin >> a->escola;
}

int main(){
    aluno a1;
    aluno *p;
    p = &a1;
    a1.setNome();
    a1.setEscola();
    system("clear");
    cout << a1.getNome()<<"\n";
    cout << a1.getEscola()<<"\n";
    //definirDadosAluno(p);
    //system("clear");
    //apresentarDadosAluno(p);
}