#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>

using namespace std;

/*
 betType ira guardar o tipo de aposta,
 cont sera um contador que ira ser utilizado nem varios pontos do programa,
 opt ira ser a opção do menu escolhida pelo utilizador,
 error sera o tipo de erro que o programa ira guardar,
 numeros sera um array de inteiros de tamanho 11 pois as apostas multiplas podem guardar até 11 numeros,
 estrelas sera de tamanho 9 devido às apostas multiplas guardarem até 9 valores,
 numeros e estrelas vencedoreas sera a chave da vitoria do jogo,
 invalid é do tipo booleano pois ira ser utilizado em validações de inputs.
*/
int betType,cont,opt,error,sizeNum,sizeEstrelas;
int numeros[11];
int estrelas[9];
int numerosVencedores[5];
int estrelasVencedoras[2];
bool invalid;

/*
 Este void ira preencher deividadmente os arrays numeros e estrelas vencedoras definindo assim a chave de vitoria
*/
void vencedor(){
    for (int i = 0; i <= 4; i++){
        numerosVencedores[i] = rand() % 50 + 1;//randomizar numeros de 1 até 50
    }
    for (int x = 0; x <= 1; x++){
        estrelasVencedoras[x] = rand() % 9 + 1; //randomizar numeros de 1 até 9
    } 
}

/*
 Este void irá percorrer os arrays e mostrar ao utilizador os seus conteudos
*/
void mostrarChave(){
    cout << "Numeros: \n";
    for (int i = 0; i <= 4; i++){
        cout << numerosVencedores[i] << "\n";
    }
    cout << "\n";
    cout << "Estrelas: \n";
    for (int x = 0; x <= 1; x++){
        cout << estrelasVencedoras[x] << "\n";
    }
}

/*
 Este void ira mostar o menu com as diferentes escolhas possiveis no programa
*/
void options(){
    system("clear");
    if (error == 1){ //caso o valor de error seja um irá mostrar a mensagem abaixo
        cout << "Introduziu um numero inválido!\n";
    }
    cout << "Menu Euromilhões: \n";
    cout << " 1. Fazer Bilhete\n";
    cout << " 2. Ver Bilhete\n";
    cout << " 3. Aposta Aleatória\n";
    cout << " 4. Obter Chave Vencedora\n";
    cout << " 5. Verificar Premios\n";
    cout << " 0. Sair\n";
    cout << "Escolha uma opção: ";
    cin >> opt;
    error = 0; //definir error como 0 de novo caso o utilizador insira um numero válido não aparecer mensagem de erro
}

/*
 Este void ira defininir o tipo de aposta simples ou multipla validando o input aceitando apenas as letras 's' ou 'm'
*/
void askType(){
    char type; //sera a letra colocada pelo utilizador
    while (invalid){ // Ira repetir tudo abaixo enquanto a variavel invalid for true
        system("clear");
        if (cont > 0){ //mostrar mensagem de erro caso cont seja > 0
            cout << "Foram introduzidos dados errados!\n";
        }
        cout << "Aposta Simples carregue 'S' aposta multipla carregue 'M': ";
        cin >> type;
        if( (type == 's') || (type == 'S') || (type == 'm') || (type == 'M')){ //Validar as letras 'm' e 's' sejam elas maiusculas ou minusculas são a mesma letra
            invalid = false; // invalid = false para não se repetir o pedir de input ao utilizador pois a letra introduzida foi valida
            /*
                caso seja 's' o input a variavel betType ira receber o valor 0 caso contrario ira receber o valor 1
            */
            if ((type == 's') || (type == 'S')){
                betType = 0;
            }else{
                betType = 1;
            }
        }else{ //caso os dados introduzidos não sejam validos invalid contina true e o contador aumenta 1 valor para continuar a mostrar a mensagem de erro
            invalid = true;
            cont += 1;
        }
    }
}

/*
    Esta função ira verificar se o numero introduzido ja existe no array numeros
*/
int verificaExistenciaNumeros(int numero,int size){
    bool retornar = false;
    for (int i = 0; i < size; i++){ //O for irá ser executado enquanto a variavel i for menor que o size pois não queremos comparar o ultimo valor que inserimos ou ira retornar true
        if (numero == numeros[i]){//Caso o numero seja igual à posiçao atual retornar = true e fazemos break ao ciclo for pois ja sabemos que existe um numero igual
            retornar = true;
            break;
        }else{ // caso contrario quer dizer que o numero não e igual entao retornar = false
            retornar = false;
        }
    }
    return retornar; //devolver a variavel retornar
}

/*
    Esta função ira verificar se a estrela introduzida ja existe no array estrelas
*/
int verificaExistenciaEstrelas(int numero,int size){
    bool retornar = false;
    for (int i = 0; i < size; i++){ //O for irá ser executado enquanto a variavel i for menor que o size pois não queremos comparar o ultimo valor que inserimos ou ira retornar true
        if (numero == estrelas[i]){//Caso o numero seja igual à posiçao atual retornar = true e fazemos break ao ciclo for pois ja sabemos que existe um numero igual
            retornar = true;
            break;
        }else{ // caso contrario quer dizer que o numero não e igual entao retornar = false
            retornar = false;
        }
    }
    return retornar; //devolver a variavel retornar
}

/*
    Este void irá pedir ao utilizador para introduzir os numeros e estrelas preenchendo assim os arrays dependendo do tipo de aposta selecionada
*/
void getNumeros(int tipo){ //recebe o tipo de aposta
    system("clear");
    bool existe;
    if (tipo == 0){ //se for simples
        for (int i = 0; i <= 4; i++){ //o contador vai até ser <= 4 pois so queremos 5 numeros
            cont = 0;
            existe = false;
            do{ //Do while para validação do numero introduzido pois não queremos <= 0 ou >50 e tambem não queremos numeros repetdos
                cout << "Numeros: \n";
                if (cont == 1){ //aqui a mensagem de erro é mostrada caso cont seja = 1
                    cout << "Foram introduzidos valores inválidos!\n";
                }else if( cont == 2){//aqui a mensagem de erro é mostrada caso cont seja = 2
                    cout << "O numero introduzido já existe\n";
                }
                cout << "Introduza o " << i + 1<< " Numero: ";
                cin >> numeros[i];
                existe = verificaExistenciaNumeros(numeros[i],i);
                system("clear");
                if ( (numeros[i] <= 0) || (numeros[i] > 50) ){//se o numero introduzido for invalido o cont é igual a 1
                    cont = 1;
                }else if( existe == true ){//se o numero introduzido não existe o cont é igual a 2
                    cont = 2;
                }
            }while( (numeros[i] <= 0) || (numeros[i] > 50) || (existe == true) );//Contina pedindo numeros até o utilizador inserir um numero entre 1 e 50 e que não exista já
            sizeNum = i;
        }
        system("clear");
        for (int x = 0; x <= 1; x++){// este contador vai ate ser <= 1 pois so queremos 2 estrelas
            cont = 0;
            do{
                cout << "Estrelas: \n";
                if (cont == 1){//este esquema de erro é igual ao que se encontra acima
                    cout << "Foram introduzidos valores inválidos!\n";
                }else if( cont == 2){
                    cout << "A estrela introduzida já existe!\n";
                }
                cout << "Introdza a " << x + 1 << " Estrela: ";
                cin >> estrelas[x];
                existe = verificaExistenciaEstrelas(estrelas[x],x);
                system("clear");
                if ( (estrelas[x] <= 0) || (estrelas[x] > 9) ){ //se o numero introduzido for invalido o cont é igual a 1
                    cont = 1;
                }else if( existe == true ){//se o numero introduzido não existe o cont é igual a 2
                    cont = 2;
                }
            }while( (estrelas[x] <= 0) || (estrelas[x] > 9) || (existe == true )); //Contina pedindo numeros até o utilizador inserir um numero entre 1 e 9 e que não exista já
            sizeEstrelas = x;
        }
    }else{
        sizeNum = 0;
        cont = 0;
        //o esquema deste else é igual ao if acima apenas com algumas pequenas mudanças
        for (int i = 0; i <= 10; i++){ //mundança na condição do for passou para <= 10 para receber 11 valores
            if (cont == 3){ //se cont for igual a 3 sizeNum recebe o valor atual do i - 1 para que não apareça depois o zero e termina o for
                sizeNum -= 1;
                break;
            }else{
                cont = 0;
                do{
                    if (i > 4){ //Mostra a mensagem caso a condição se verifique pois tem de ter no minimo 5 numeros no array
                        cout << "Insira 0 para sair!\n";
                    }
                    cout << "Numeros: \n";
                    if (cont == 1){
                        cout << "Foram introduzidos valores inválidos!\n";
                    }else if( cont == 2){
                        cout << "O numero introduzido já existe!\n";
                    }
                    cout << "Introduza o " << i + 1<< " Numero: ";
                    cin >> numeros[i];
                    if ( (numeros[i] == 0) && (i > 4) ){ //se o numero inserido for 0 e o contador for maior que 5 então cont = 3 e sai do ciclo do while 
                        cont = 3;
                        break;
                    }else{
                        existe = verificaExistenciaNumeros(numeros[i],i);
                        system("clear");
                        if ( (numeros[i] <= 0) || (numeros[i] > 50) ){
                            cont = 1;
                        }else if( existe == true ){
                            cont = 2;
                        }
                    }
                }while( (numeros[i] <= 0) || (numeros[i] > 50) || (existe == true));
            }
            sizeNum = i;
        }
        cont = 0;
        system("clear");
        sizeEstrelas = 0;
        for (int x = 0; x <= 8; x++){ //passou para <=8 para receber as 9 estrelas 
            if (cont == 3){//Mostra a mensagem caso a condição se verifique pois tem de ter no minimo 2 estrelas no array
                sizeEstrelas -= 1;
                break;
            }else{
                cont = 0;
                do{
                    if (x > 1){
                        cout << "Insira 0 para sair!\n";
                    }
                    cout << "Estrelas: \n";
                    if (cont == 1){
                        cout << "Foram introduzidos valores inválidos!\n";
                    }else if( cont == 2){
                        cout << "A estrela introduzida já existe!\n";
                    }
                    cout << "Introduza a " << x + 1 << " Estrela: ";
                    cin >> estrelas[x];
                    if ( (estrelas[x] == 0) && (x > 1)){//se o numero inserido for 0 e o contador for maior que 2 então cont = 3 e sai do ciclo do while
                        cont = 3;
                        break;
                    }else{
                        existe = verificaExistenciaEstrelas(estrelas[x],x);
                        system("clear");
                        if ( (estrelas[x] <= 0) || (estrelas[x] > 9) ){
                            cont = 1;
                        }else if( existe == true ){
                            cont = 2;
                        }
                    }
                }while( (estrelas[x] <= 0) || (estrelas[x] > 9) || (existe == true) );
            }
            sizeEstrelas = x;
        }
    }
}

/*
    Este void fazer a aposta aleatoria
*/
void randomBet(int tipo){
    system("clear");
    bool existe; //De novo aqui a variavel existe como booleano para sabermos se o numero ou estrela já existem ou nao para eviar numeros repetidos ou estrelas
    if (tipo == 0){
        for (int i = 0; i <= 4; i++){
            do{
                numeros[i] = rand() % 50 + 1;
                existe = verificaExistenciaNumeros(numeros[i],i);
            }while (existe == true); //Ira randomizar numeros até que o numero obtido não exista já no array
            sizeNum = i;
        }
        for (int x = 0; x <= 1; x++){
            do{
                estrelas[x] = rand() % 9 + 1;
                existe = verificaExistenciaEstrelas(estrelas[x],x);
            }while (existe == true);//Ira randomizar estrelas até que o numero obtido não exista já no array
            sizeEstrelas = x;
        }
    }else{
        for (int i = 0; i <= 10; i++){
            do{
                numeros[i] = rand() % 50 + 1;
                existe = verificaExistenciaNumeros(numeros[i],i);
            }while (existe == true);//Ira randomizar numeros até que o numero obtido não exista já no array
            sizeNum = i;
        }
        for (int x = 0; x <= 8; x++){
            do{
                estrelas[x] = rand() % 9 + 1;
                existe = verificaExistenciaEstrelas(estrelas[x],x);
            }while (existe == true);//Ira randomizar estrelas até que o numero obtido não exista já no array
            sizeEstrelas = x;
        }
    }
}

/*
    Este void irá mostrar a ultima aposta feita pelo utilizador ou randomizada pelo sistema
*/
void verBilhete(int tipo){// recebe o tipo da aposta
    if (tipo == 0){//caso 0 irao ser apresentados os 5 numeros e as 2 estrelas
        cout << "Numeros: \n";
        for (int i = 0; i <= sizeNum; i++){
            if (i == sizeNum){
                cout << numeros[i] << "\n";
            }else{
                cout << numeros[i] << " ";
            }
        }
        cout << "\n";
        cout << "Estrelas: \n";
        for (int x = 0; x <= sizeEstrelas; x++){
            if (x == 1){
                cout << estrelas[x] << "\n";
            }else{
                cout << estrelas[x] << " ";                
            }
        }
    }else{ // caso 1 irao ser apresentados os 11 numeros e as 9 estrelas
        cout << "Numeros: \n";
        for (int i = 0; i <= sizeNum; i++){
            if (i == sizeNum){
                cout << numeros[i] << "\n";
            }else{
                cout << numeros[i] << " ";
            }        
        }
        cout << "\n";
        cout << "Estrelas: \n";
        for (int x = 0; x <= sizeEstrelas; x++){
            if (x == 1){
                cout << estrelas[x] << "\n";
            }else{
                cout << estrelas[x] << " ";                
            }        
        }
    }
}

/*
    Esta função irá verificar quantos numeros iguais daqueles introduzidos pelo utilizador existem na chave vencedora
*/
int numerosPertencem(int tipo){//receber tipo de aposta
    cont = 0;
    if (tipo == 0){ //caso 0 o primeiro for vai ate 5 pois sao apenas 5 os numeros introduzidos pelo utilizador
        for (int i = 0; i <= 4; i++){//percorrer chave do utilizador
            for (int x = 0; x <= 4; x++){// este segundo for serve para percorrer os valores da chave vencedora
                if (numeros[i] == numerosVencedores[x]){ //caso o valor da chave do utilizador se encontre na chave vencedora cont incrementa +1
                    cont += 1;
                }
            }
        }
        return cont; //retornar o cont
    }else{
        for (int i = 0; i <= 10; i++){//percorrer chave do utilizador
            for(int x = 0; x <= 4; x++){// percorrer chave vencedora
                if (numeros[i] == numerosVencedores[x]){ //caso o valor da chave do utilizador se encontre na chave vencedora cont incrementa +1
                    cont += 1;
                }
            }
        }
        return cont; //retornar o cont
    }
}

/*
    Esta função faz o mesmo que a funçao acima mas conta as estrelas e nao os numeros
*/
int estrelasPertencem(int tipo){//recebe o tipo
    cont = 0;
    if (tipo == 0){
        for (int i = 0; i <= 1; i++){//contador para percorrer as estrelas introduzidas pelo utilizador
            for (int x = 0; x <= 1; x++){//contador para percorrer as estrelas da chave vencedora
                if (estrelas[i] == estrelasVencedoras[x]){ //se o valor do utilizador for igual ao da chave cont ira incrementar +1
                    cont += 1;
                }
            }
        }
        return cont;//retornar cont
    }else{
        for (int i = 0; i <= 8; i++){//contador para percorrer as estrelas introduzidas pelo utilizador
            for(int x = 0; x <= 1; x++){//contador para percorrer as estrelas da chave vencedora
                if (estrelas[i] == estrelasVencedoras[x]){//se o valor do utilizador for igual ao da chave cont ira incrementar +1
                    cont += 1;
                }
            }
        }
        return cont;//retornar cont
    }
}

/*
    Este void ira verificar os premios e dar um feedback ao utilizador se ganhou ou nao algo irão apenas estar 3 premios
    visto que o euromilhoes tem 13 o que iria deixar uma cadeia de if's bastante grande
*/
void verificarPremios(int tipo){//recebe tipo
    int quantidadeNumeros = numerosPertencem(tipo); //quantidadeNumeros recebe o valor que ira ser retornado pela função numerosPertencem
    int quantidadeEstrelas = estrelasPertencem(tipo); //quantidadeEstrelas recebe o valor que ira ser retornado pela função estrelasPertencem
    if (tipo == 0){ // para o tipo 0: 
        if ( (quantidadeNumeros == 5) &&  (quantidadeEstrelas == 2) ){//se acertar nos 5 numeros de nas 2 estrelas -> 1 premio
            cout << "PARABÉNS GANHOU O 1 PRÉMIO!!!!!!!!!!!\n";
        }else if( (quantidadeNumeros == 5) &&  (quantidadeEstrelas == 1) ){//se tiver 5 numeros e apenas 1 estrela -> 2 premio
            cout << "PARABÉNS GANHOU O 2 PRÉMIO!!!!!!!!!!!\n";
        }else if( (quantidadeNumeros == 5) &&  (quantidadeEstrelas == 0) ){//se tiver os 5 numeros e 0 estrelas -> 3 premio
            cout << "PARABÉNS GANHOU O 3 PRÉMIO!!!!!!!!!!!\n";
        }else{ //caso contrario quer dizer que tem menos de 5 o que quer dizer que não ganha nada
            cout << "Infelizmente não você não ganhou nada!\n";
        }
    }else{ //Para o caso 1
        if ( (quantidadeNumeros >= 5) && (quantidadeEstrelas >=2) ) {//se acertar nos 5 numeros de nas 2 estrelas -> 1 premio
            cout << "PARABÉNS GANHOU O 1 PRÉMIO!!!!!!!!!!!\n";
        }else if( (quantidadeNumeros >= 5) && (quantidadeEstrelas >= 1) ){//se tiver 5 numeros e apenas 1 estrela -> 2 premio
            cout << "PARABÉNS GANHOU O 2 PRÉMIO!!!!!!!!!!!\n";
        }else if ( (quantidadeNumeros >= 5) && (quantidadeEstrelas == 0) ){//se tiver os 5 numeros e 0 estrelas -> 3 premio
            cout << "PARABÉNS GANHOU O 3 PRÉMIO!!!!!!!!!!!\n";
        }else{//caso contrario quer dizer que tem menos de 5 o que quer dizer que não ganha nada
            cout << "Infelizmente não você não ganhou nada!\n"; 
        }
    }
}

/*
    Função principal que chama todas as outras
*/
int main(){
    error = 0; //error inicia o programa a 0
    system("clear");//limpa a consola
    do{// vai fazer tudo abaixo enquanto não for executado o exit(0) por isso na condição fica while(true)
        options();//chama as opçoes do menu
        switch (opt){ //switch que faz as operações do menu
            case 1: // Criar bilhete
                system("clear");
                invalid = true;
                cont = 0;
                askType();
                invalid = true;
                cont = 0;
                if (betType == 0){
                    getNumeros(0);
                }else{
                    getNumeros(1);
                }
                break;
            case 2: //Ver bilhete
                system("clear");
                if (betType == 0){
                    verBilhete(0);
                }else{
                    verBilhete(1);
                }
                system( "read\n" );
                break;
            case 3://Bilhete aleatorio
                system("clear");
                invalid = true;
                cont = 0;
                askType();
                if (betType == 0){
                    randomBet(0);
                }else{
                    randomBet(1);
                }
                break;
            case 4://Ver chave vencedora
                system("clear");
                vencedor();
                mostrarChave();
                system( "read\n" );
                break;
            case 5: //Verificar premios
                system("clear");
                if (betType == 0){
                    verificarPremios(0);
                }else{
                    verificarPremios(1);
                }
                system( "read\n" );
                break;
            case 0: //Sair do programa
                cout << "Fim!\n";
                exit(0);
                break;
            default://Caso seja introduzido um numero que não se encontra no switch error recebe o valor de 1
                error = 1;
                break;
        }
    }while(true);
}