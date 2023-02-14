/*
título          :ladron.h
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia++ la clase personaje es la clase padre 
 de ladron, guerrero y mago.
*/

#include "personaje.h"


class Ladron: public Personaje{
		
	private:
	
		string objeto;
		
	public:
		Ladron(string nom, string raz, string tesoro):Personaje(nom, 100, 0, raz){
			objeto = tesoro;
		}

		string getObjeto(){
			return objeto;
		}
		
		/*
		imprime un mensaje digno de un ladron
		*/
		void roba(){
			cout << "very very sneaky";
			
		}
};