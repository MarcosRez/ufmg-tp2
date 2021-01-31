#include "tempo.h"
using namespace std;

void Tempo::consist(){
	
	if (n > 0) {
		int dia = n / 86400;
		n = n%86400;
		int hora = n / 3600;
		n = n%3600;
		int min = n / 60 ;
		n = n%60;
		int seg = n;
	}
	else dia = hora = min = seg = 0;

}

Tempo::Tempo(int _dia, int _hora, int _min, int _seg){

	dia = _dia;
	hora = _hora;
	min = _min;
	seg = _seg;

	consist();
}

void Tempo::Soma(Tempo T1, Tempo T2) {

	n = T1.n + T2.n;

	consist();

}

void Tempo::Set_Dia(int d){
	dia = d;
	consist();
}
void Tempo::Set_Hora(int h){
	hora = h;
	consist();
}
void Tempo::Set_Min(int m){
	min = m;
	consist();
}
void Tempo::Set_Seg(int s){
	seg = s;
	consist();
}

int Tempo::Get_Dia(){
	return dia;
}
int Tempo::Get_Hora(){
	return hora;
}
int Tempo::Get_Min(){
	return min;
}
int Tempo::Get_Seg(){
	return seg;
}

void Tempo::Incremento(){
	seg = seg + 1;
	consist();
}
void Tempo::Decremento(){
	seg = seg - 1;
	consist();
}