#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

class Tempo {
    private:
        int dia;
        int hora;  
        int min;
        int seg;  

    public:

        // Construtores
        Tempo(int dia=0, int hora=0, int min=0, int seg=0);
        ~Tempo();
        void corrigeTempo();
        void readTempo();
        void printTempo(); 
        void somaTempo(Tempo, Tempo);
        void incrTempo();
        void decrTempo();
};