#include "tempo.h"
using namespace std;

Tempo::Tempo(int ndia, int nhora, int nmin, int nseg) {
	dia = ndia;
	hora = nhora;
	min = nmin;
	seg = nseg;

	if (hora > 23 || min > 59 || seg > 59) {
		corrigeTempo();
	}
}

Tempo::~Tempo(){

}

void Tempo::corrigeTempo() {
    int resto;
	while (seg > 59) {
		seg = seg - 60;
		min++;
	}
	while (min > 59) {
		min = min - 60;
		hora++;
	}
	while (hora > 23) {
		hora = hora - 24;
		dia++;
	}
    if (seg < 0) {
        seg = 59;
        min--;
    }
    if (min < 0) {
        min = 59;
        hora--;
    }
    if (hora < 0 && dia >=0) {
        hora = 23;
        dia--;
    } else if (dia < 0) {
        cout << "Data inválida!" << endl;
    }
    //Atualiza os valores
}

void Tempo::somaTempo(Tempo x, Tempo y) {
	dia = x.dia + y.dia;
	hora = x.hora + y.hora;
	min = x.min + y.min;
	seg = x.seg + y.seg;
	corrigeTempo();

}

void Tempo::readTempo(){
	cin >> dia;
	cin >> hora;
	cin >> min;
	cin >> seg;
	corrigeTempo();

}

void Tempo::printTempo(){
	cout << "Dias: " << dia << endl;
	cout << "Horas: " << hora << endl;
	cout << "Minutos: " << min << endl;
	cout << "Segundos: " << seg << endl;

}

void Tempo::incrTempo(){
	seg++;
	corrigeTempo();
}

void Tempo::decrTempo(){
	seg--;
	corrigeTempo();
}



