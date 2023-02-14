/*
título          :guerrero.h
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia++ la clase personaje es la clase padre 
 de ladron, guerrero y mago.
*/


#include "personaje.h"

class Guerrero: public Personaje{
		
		
	public:
		Guerrero(string nom, string raz): Personaje(nom,200,0,raz){
		}
		
		
		/*
		grita al momento de atacar!
		*/
		void ataca(){

			cout<< "waaaaaah";

		}
		
};