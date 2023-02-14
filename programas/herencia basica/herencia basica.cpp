/*
título          :personajes.h
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia++ la clase personaje es la clase padre 
 de ladron, guerrero y mago.
*/

#include<iostream>

using namespace std;

#include "mago.h"
#include "ladron.h"
#include "guerrero.h"


int main(){
	
	//creo objetos de la clase Mago, Guerrero y Ladron
	//las 3 clases son hijas de la clase personaje
	
	Mago gandalf("Gandalf el Gris", "Elfo");
	Guerrero boromir ("Boromir hijo mayor de Gondor", "Humano");
	Guerrero faramir ("Faramir hijo menor de Gondor", "Humano");
	Ladron bilbo ("Bilbo Bolson", "Hobbit","nada");
	

	
	cout<<"\nLa partida de aventureros \n"; 
    
	//acesso a las variables privadas de cada objeto mediante los metodos públicos

	cout << gandalf.getNombre() << " " << gandalf.getVida();
	cout << " " << gandalf.getMagia() << endl;
	
	cout << faramir.getNombre() << " " << faramir.getVida(); 
	cout << " " << faramir.getRaza() << endl;

	cout << boromir.getNombre() << " " << boromir.getVida(); 
	cout << " " << boromir.getRaza() << endl;
	
	cout << bilbo.getNombre() << " " << bilbo.getVida(); 
	cout << " " << bilbo.getRaza() << " " << bilbo.getObjeto() << endl;
	
	
	//modifico el objeto de Boromir 

	cout<<"\nFlechas caen sobre Boromir (musica dramatica)\n"; 
	
	boromir.danio(60);
	
	cout << boromir.getNombre() << " " << boromir.getVida(); 
	cout << " " << boromir.getRaza() << endl;

	cout<<"\nmas flechas (mas musica dramatica)\n"; 
	
	boromir.danio(130);
	
	cout << boromir.getNombre() << " " << boromir.getVida(); 
	cout << " " << boromir.getRaza() << endl;
	
	cout <<"youuu shall not passs"; 
	gandalf.hechiz();
	
}
