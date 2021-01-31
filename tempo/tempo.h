#include <iostream>

class Tempo {

    private:
        int dia;
        int hora;
        int min;
        int seg;
        int n = seg + (min*60) + (hora*3600) + (dia*86400);

    public:
        Tempo(int dia=0, int hora=0, int min=0, int seg=0);
        ~Tempo();

        void consist();
        void Soma(Tempo T1, Tempo T2);

        void Set_Dia(int d);
        void Set_Hora(int h);
        void Set_Min(int m);
        void Set_Seg(int s);

        int Get_Dia();
        int Get_Hora();
        int Get_Min();
        int Get_Seg();

        void Incremento();
        void Decremento();
};