#include <iostream>
#include <fstream>

using namespace std;

void comparador(float valor, float& menor, float& maior);

int main(){

    float menor = 100000, maior = 0, valor;

    while(1/*Teste para ver se chegou ao final do arquivo*/){
        //Lê um valor no arquivo e salva em valor
        comparador(valor,menor,maior);
    }

    cout <<"O maior valor no banco de dados e: " << maior << ", e o menor e: " << menor;

}

void comparador (float valor, float& menor, float& maior){

    if (valor >= maior) maior = valor;
    if (valor <= menor) menor = valor;

}
