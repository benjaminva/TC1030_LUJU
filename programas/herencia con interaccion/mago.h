/*
título          :mago.h
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia++ la clase personaje es la clase padre 
 de ladron, guerrero y mago.
*/

#ifndef MAGO_H
#define MAGO_H

#include "personaje.h"
#include "bestia.h"

class Mago: public Personaje{
		
		
	public:
		Mago(string nom, string raz):Personaje(nom,50,100,raz){
		
		}

		int bola_de_fuego(Bestia &b){
			
			if(getMagia() > 30){
				b.danio(50);
				setMagia(getMagia()-30); 
			}
			return getMagia();
		}
	
};

#endif