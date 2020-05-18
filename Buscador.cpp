#include <iostream>
#include <fstream>

using namespace std;

void comparador(float valor, float& menor, float& maior);

int main(){

    float menor = 100000, maior = 0, valor;


    ifstream ler ("TarefaGit.py");

    if(!ler){
        cout << "O arquivo não pode ser aberto!";
        return 1;
    }

    ler.seekg(276, ler.beg);


    while(ler>>valor){

        comparador(valor,menor,maior);
    }

    cout <<"O maior valor no banco de dados eh: " << maior << "\nE o menor eh: " << menor;

}

void comparador (float valor, float& menor, float& maior){

    if (valor >= maior) maior = valor;
    if (valor <= menor) menor = valor;

}
