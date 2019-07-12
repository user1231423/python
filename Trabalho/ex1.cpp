#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>

using namespace std;

/*
    valor e troco são doubles pois ao colocar float o compilador arredondava e perdia sempre 0.1 no valor que influencia depois no troco de moedas de 1 centimo
    pagamento é a nota data é um int pois todas as notas são integers
    cont é apenas um contador
    invalid é booleano e irá servir para validações de input
*/
double valor,troco;
int pagamento,cont;
bool invalid;

/*
    Esta função irá verificar o input do utilizador se for introduzido um valor que não corresponda a uma moeda ou uma nota é considerado inválido
*/
int belongs(int pagamento){
    int validos [10] = {1,2,5,10,15,20,50,100,200,500}; // Este array guarda todos os dados válidos
    bool valido = false;
    for (int i = 0; i <= 9; i++){//For percorre o array todo
        if (pagamento == validos[i]){ //Se o pagamento se encontrar no array é valido e faz break no ciclo for 
            valido = true;
            break;
        }
    }
    return valido; //retorna a variavel valido
}

/*
    Este void recebe os dados od utilizador
*/
void getData(bool invalid, int cont){
    while (invalid){ //Ira repetir tudo enquando invalid for true
        if (cont > 0){ //se cont for > 0 quer dizer que existiu um erro então retorna a mensagem de erro
            system("clear");
            cout << "Foram Inseridos dados inválidos!\n\n";
        }
        cout << "Caixa de Pagamento\n";
        cout << "So são aceites notas de < 5, 10, 20, 50, 100, 200 e 500 euros>\n\n";
        cout << "Introduza um valor: ";
        cin >> valor; //recebe o valor da compra
        cout << "Introduza o pagamento: ";
        cin >> pagamento; //recebe o pagamento
        if( (belongs(pagamento) == false) || (pagamento < valor) ){ // se o pagamento não for nota ou moeda repete tudo assim como se for inferior ao valor
            invalid = true;
            cont += 1;
        }else{
            invalid = false; //se for valido invalid é falso e o loop termina
        }
    }
}

/*
    Este irá fazer o troco
*/
void makeChange(int troco, int eur, int cent){
    int quantas; // guarda a quantidade de moedas ou notas
    int euros [2] = {2,1}; //moedas 2 e 1 euro
    int centimos [6] = {50,20,10,5,2,1}; // todos os centimos que existem
    cout << "\n";
    if (troco == 0){// se o troco for 0 quer dizer que não ha troco então não ha nada a fazer
        cout << "Sem moedas a devolver";
    }else{//caso contrario apresenta as moedas a serem devolvidas sem notas pois no enunciado era pedido o troco so em moedas
        cout << "Moedas devolvidas: \n";

        for (int i = 0; i <= 1; i++){ //percorre o array dos euros
            quantas = eur / euros[i]; // divide eur pela posição do array para obter a quantidade de moedas euros
            eur = eur % euros[i]; //eur equivale ao resto da divisão de si mesmo pelo valor atual do array caso acabe em 0 a divisão por 0 é impossivel estando assim acabado a quantidade de euros e obtendo a todal quantidade de moedas necessarias para atingir o seu valor
            if (quantas > 0){ // apenas mostra output das moedas que foram utilizadas para evitar aparecer algo como 0 moedas de 2 euros
                cout << quantas << " moedas de " << euros[i] << " Euros\n";
            }
        }

        for (int x = 0; x <= 5; x++){//percorre o array dos euros
            quantas = cent / centimos[x];//divide cent pela posição do array para obter a quantidade de moedas de centimos
            cent = cent % centimos[x];//eur equivale ao resto da divisão de si mesmo pelo valor atual do array caso acabe em 0 a divisão por 0 é impossivel estando assim acabado a quantidade de centimos e obtendo a todal quantidade de moedas necessarias para atingir o seu valor
            if (quantas > 0){ // apenas mostra output das moedas que foram utilizadas para evitar aparecer algo como 0 moedas de 2 centimos
                cout << quantas << " moedas de " << centimos[x] << " Centimos\n";
            }
        }
    }
    cout << "\n";
}

/*
    Função principal
*/
int main(){
    system("clear");//limpa a consola
    invalid = true; //coloca invalid a true para que o ciclo possa ter inicio
    cont = 0; // cont a 0 pois não existem erros
    getData(invalid,cont); //envia as variavel invalid e ont para o void getData obtendo assim o input do utilizador
    troco = pagamento - valor; // torco é igual ao pagamento menos o valor troco é double assim sendo armazena valores com casas decimais
    cout << "Troco: " << troco << "€\n";
    makeChange(troco,floor(troco),(troco- floor(troco)) * 100);// make change recebe o troco, o valor inteiro de troco sem casas decimais e recebe apenas os valores deicmais que troco tinha como inteiros, se troco fosse 3,71 iria recbeer 71 por isso o * 100
}