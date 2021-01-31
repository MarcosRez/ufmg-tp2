//Função de teste
#include "tempo.h"
#include <iostream>
using namespace std;

int main () {
    Tempo a = Tempo(3,56,15,9);
    Tempo b = Tempo(1,1,1,1);
    cout << "Apos a criacao do tempo: ";
    a.Saida();
    b.Saida();

    a.Incremento();
    b.Decremento();
    cout << "Apos acrescimo e decrescimo: ";
    a.Saida();
    b.Saida();


    a.Soma(a, b);
    cout << "Apos a soma: ";
    a.Saida();
    b.Saida();

    return 0;
}