/*
título          :ladron.h
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia en c++, la clase personaje es la clase padre 
 de ladron, guerrero y mago.
*/

#ifndef LADRON_H
#define LADRON_H

#include "personaje.h"
#include "bestia.h"

class Ladron: public Personaje{
		
	private:
	
		string tesoro;
		
	public:
		Ladron(string nom, string raz):Personaje(nom, 100, 0, raz){
		}


		/*
		Roba el tesoro de la bestia y lo guarda como tesoro del ladron
		*/
		string robar(Bestia &b){
			if(b.getTesoro() != ""){
				tesoro = b.getTesoro();
				b.setTesoro("");
			}
			return tesoro;
		}
		
		string getTesoro(){
			return tesoro;
		}
};

#endif