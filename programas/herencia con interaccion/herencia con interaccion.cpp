/*
título          :herencia con interaccion.cpp
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia en c++ en este main se crean objetos de 
 tipo ladron, guerrero, mago  y bestia. El programa muestra la 
 creación modificación eh interacción entre los objetos.
*/

#include<iostream>

using namespace std;

#include "mago.h"
#include "ladron.h"
#include "guerrero.h"
#include "bestia.h"


int main(){
	
	Mago gandalf("Gandalf el Gris", "Elfo");
	Guerrero boromir ("Boromir de Gondor", "Humano");
	Guerrero faramir ("Faramir de Gondor", "Humano");
	Ladron bilbo("Bilbo Bolson", "Hobbit");
	
	cout << gandalf.getNombre() << endl;
	cout << boromir.getNombre() << endl;
	cout << faramir.getNombre() << endl;
	cout << bilbo.getNombre() << endl;
	
	Bestia gollum("Smeagul", 100, "anillo");

	cout << gollum.getNombre() << " " << gollum.getVida()<< " " << gollum.getTesoro() << endl;
	
	cout << gandalf.getNombre() <<" grita: Bola de fuego !!! \n Magia restante " << gandalf.bola_de_fuego(gollum) << endl;

	cout << gollum.getNombre() << " " << gollum.getVida()<< " " << gollum.getTesoro() << endl;
	
	cout << "muere!!!! grita " << boromir.getNombre() << " mientras ataca " << endl;
	boromir.ataca(gollum);

	cout << gollum.getNombre() << " " << gollum.getVida()<< " " << gollum.getTesoro() << endl;

	cout << "Pero que tenemos aquí \n (el hobbit roba " << bilbo.robar(gollum) << " )" << endl;

	cout << gollum.getNombre() << " " << gollum.getVida()<< " " << gollum.getTesoro() << endl;

	cout << bilbo.getNombre()  << " "  <<bilbo.getVida() << " " << bilbo.getTesoro() << endl;

	cout << "gollum grita ahhhh ladrrron " << endl;

	gollum.ataca(bilbo);

	cout << bilbo.getNombre()  << " "  <<bilbo.getVida() << " " << bilbo.getTesoro() << endl ;
	
}
