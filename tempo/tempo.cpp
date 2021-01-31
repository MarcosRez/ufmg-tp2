#include "tempo.h"
#include <iostream>
using namespace std;

void Tempo::consist(){

	Convert_Seg();
	if (n > 0) {
		dia = n / 86400;
		n = n%86400;
		hora = n / 3600;
		n = n%3600;
		min = n / 60 ;
		n = n%60;
		seg = n;
	}
	else dia = hora = min = seg = 0;
	Convert_Seg();

}

Tempo::Tempo(int _dia, int _hora, int _min, int _seg){

	dia = _dia;
	hora = _hora;
	min = _min;
	seg = _seg;
	consist();

}

void Tempo::Convert_Seg(){
	n = seg + (min*60) + (hora*3600) + (dia*86400);
}

void Tempo::Soma(Tempo T1, Tempo T2) {
    dia = T1.dia + T2.dia;
    hora = T1.hora + T2.hora;
    min = T1.min + T2.min;
    seg = T1.seg + T2.seg;
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

void Tempo::Saida(){
	cout << '\n' << "Dias: " << dia << endl;
	cout << "Horas: " << hora << endl;
	cout << "Minutos: " << min << endl;
	cout << "Segundos: " << seg << endl;
}

void Tempo::Incremento(){
	seg = seg + 1;
	consist();
}
void Tempo::Decremento(){
	seg = seg - 1;
	consist();
}
