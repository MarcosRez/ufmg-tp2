//Função de teste
#include "tempo.h"
using namespace std;

int main () {
    Tempo a = Tempo(3,56,15,9);
    Tempo b = Tempo(1,1,1,1);
    cout << "Apos a criacao do tempo: ";
    a.printTempo();
    b.printTempo();

    a.incrTempo();
    b.decrTempo();
    cout << "Apos acrescimo e decrescimo: ";
    a.printTempo();
    b.printTempo();


    a.somaTempo(a, b);
    cout << "Apos a soma: ";
    a.printTempo();
    b.printTempo();

    return 0;
}