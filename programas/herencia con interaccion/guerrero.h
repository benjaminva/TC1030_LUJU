/*
título          :guerrero.h
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia en c++, la clase personaje es la clase padre 
 de ladron, guerrero y mago.
*/

#ifndef GUERRERO_H
#define GUEERERO_H

#include "personaje.h"
#include "bestia.h"

class Guerrero: public Personaje{
		
		
	public:
		Guerrero(string nom, string raz): Personaje(nom,200,0,raz){
		}

		/*
		Baja la vida de la bestia
		*/
		void ataca(Bestia &b){
			b.danio(30);
		}
		
};

#endif