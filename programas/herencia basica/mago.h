/*
título          :mago.h
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia++ la clase personaje es la clase padre 
 de ladron, guerrero y mago.
*/

#include "personaje.h"
#include<iostream>

using namespace std;

class Mago: public Personaje{
		
		
	public:
		Mago(string nom, string raz):Personaje(nom,50,100,raz){
		
		}
		
		
		/*
		lanza un hechiz que es como un hechizo pero mas fuerte
		*/
		void hechiz(){

			cout<< "kabooom";
		}

};