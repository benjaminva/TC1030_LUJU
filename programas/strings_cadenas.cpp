/*
título          :strings_cadenas.cpp
descripción     :Ejercicios sobre cadenas.
autor           :Benjamín Valdés
c++ version  	 :11
===============================================================

 ejemplo de trabajo con cadenas en c++
*/

#include<iostream>

using namespace std;

string limpia_cadena(string caracteres_seguros, string cadena){
    
	string nueva_cadena = "";
	
	/*recorremos hasta \0 que es el final del string*/
	
	for (int i = 0; cadena[i] != '\0'; i++){

		/*recorremos hasta \0 que es el final del string*/
		
		for(int j = 0; caracteres_seguros[j] != '\0'; j++){
			
			/*comparamaos todas las letras, si coincide 
			entonces si es válido y lo agregamos*/

			if(cadena[i] == caracteres_seguros[j]){
				nueva_cadena = nueva_cadena + cadena[i];
			}
		}
	}
	
	return nueva_cadena;
}
 
int main(){
	
	string caracteres_seguros = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZñÑáéíóú0123456789";

	string cad;

	/*get line nos permite leer lineas completas incluyendo espacios, 
	cin solito solo podria leer hasta el espacio*/

	getline(cin,cad);
	cout << limpia_cadena(caracteres_seguros, cad);
	
}