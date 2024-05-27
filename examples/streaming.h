#ifndef STREAMING_H
#define STREAMING_H

#include "pelicula.h"
#include <string>
#include <sstream>

using namespace std;

class Streaming{
public:
			Pelicula pelis[100];
protected:
		int peli;
		string compa;

	public:
		Streaming():peli(0), compa(""){};
		Streaming(string comp):peli(0), compa(comp){};
		void crea_peli(string, string, int);
		virtual string to_string(){ return "";}
};

void Streaming::crea_peli(string nom, string dir, int dur){
	pelis[peli] = Pelicula(nom, dir, dur);
	peli ++ ;
}

class Netflix : public Streaming{
	private:
		string mensual;

	public:
		Netflix():Streaming(), mensual("enero"){};
		Netflix(string mes, string comp):Streaming(comp), mensual(mes){};
		string to_string();
};

string Netflix::to_string(){
	std::stringstream aux;
	aux << "compañia : " << compa << endl;
	aux << "suscripcion mensual: " << mensual << endl;
	for (int i = 0; i < peli; i++){
		aux << " " << pelis[i].get_nombre() << " ";
		aux << " director " << pelis[i].get_dir() << " ";
		aux << " dur " << pelis[i].get_dur() << " ";
		aux << " calif " << pelis[i].get_calif() << endl;
	}
	return aux.str();
}

class Amazon : public Streaming{
	private:
		string semanal;

	public:
		Amazon():Streaming(), semanal("lunes"){};
		Amazon(string sem, string comp):Streaming(comp), semanal(sem){};
		string to_string();
};

string Amazon::to_string(){
	std::stringstream aux;
	aux << "compañia : " << compa << endl;
	aux << "suscripcion semanal: " << semanal << endl;
	for (int i = 0; i < peli; i++){
		aux << " " << pelis[i].get_nombre() << " ";
		aux << " director " << pelis[i].get_dir() << " ";
		aux << " dur " << pelis[i].get_dur() << " ";
		aux << " calif " << pelis[i].get_calif() << endl;
	}
	return aux.str();
}

#endif
