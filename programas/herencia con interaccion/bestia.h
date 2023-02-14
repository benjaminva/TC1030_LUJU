/*
título          :bestia.h
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia en c++, la clase bestia 
 genera monstruos para luchar.
*/


#ifndef BESTIA_H
#define BESTIA_H

#include<iostream>
#include "personaje.h"

using namespace std;

class Bestia{

	private:
	
		int vida;
		string nombre;
		string tesoro;
		
		
	public:
	
		Bestia(string nom, int vid, string tes){
			nombre = nom;
			vida = vid;
			tesoro = tes;
		}

		int getVida(){
			return vida;
		}
		
		string getNombre(){
			return nombre;
		}
		
		string getTesoro(){
			return tesoro;
		}
		
		void setTesoro(string tes){
			tesoro = tes;
		}
		
		void danio(int danio){
			vida = vida - danio;
		}
		
		void ataca(Personaje &p){
			p.danio(17);
		}
};

#endif