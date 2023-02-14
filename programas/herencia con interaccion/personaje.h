/*
título          :personajes.h
descripción     :Ejemplo de herencia.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de herencia en c++, la clase personaje es la clase padre 
 de ladron, guerrero y mago.
*/
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<iostream>

using namespace std;

class Personaje{

	private:
		int vida;
		int magia;
		
		string nombre;
		string raza;
		
		
	public:
		Personaje(string nom, int vid, int mag, string raz){
			nombre = nom;
			vida = vid;
			magia = mag;
			raza = raz;
		}

		int getVida(){
			return vida;
		}
		
		int getMagia(){
			return magia;
		}
		
		string getNombre(){
			return nombre;
		}
		
		string getRaza(){
			return raza;
		}
		
		void danio(int danio){
			vida = vida - danio;
		}
		
		void setMagia(int m){
			magia = m;
		}
		void setVida(int v){
			vida = v;
		}	
};

#endif

