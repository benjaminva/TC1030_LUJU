/*
título          :arreglos.cpp
descripción     :Ejercicios sobre arreglos.
autor           :Benjamín Valdés
c++ version  	 :11
===============================================================

 ejemplo de trabajo con arreglos en c++
*/

#include<iostream>

using namespace std;

void llenaArg(int arg[], int tam){
	
	/* recorro solo hasta tam, que es hasta 
	donde pienso llenar el arreglo */
	
	for(int i = 0; i < tam; i++){
		cin >> arg[i];
	}
}

void printArg(int arg[], int tam){
	
	/* imprimo solo hasta tam que es hasta
	donde llené, lo demás es basura*/
	
	for(int i = 0; i < tam; i++)
		cout << arg[i] << " ";
}

int main(){
	
	/* Creo un arreglo en c++ con espacio 
	sobrado para lo que quiero guardar */
	
	int lista[100];    
	
	/* Uso la variable tam para saber hasta 
	que parte del arreglo voy a usar */
	
	int tam;  
	cin >> tam;
	
	llenaArg(lista, tam);
	printArg(lista, tam);
}