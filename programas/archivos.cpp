/*

título          :archivos.cpp
descripción     :Ejercicios sobre archivos.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

Ejemplo de trabajo con if en c++

*/

#include<iostream>
#include<fstream>

using namespace std;

string get_nombre(string linea){

	string nombre = "";
	int i = 0;
	
    while(linea[i] != ' '){
		i++;
	}
	
	i++;
	
	while(linea[i] != ' '){
		nombre =  nombre + linea[i];
		i++;
	}
    return nombre;

}

string get_sueldo(string linea){

	string temp = "";
	int i = 0;
	
    while(linea[i] != '$'){
		i++;
	}
	
	i++;
	
    while(linea[i] != '\0'){
		temp = temp + linea[i];
		i++;
	}
	
    return temp;
}    

void escribe_tabla(char origen[100], char destino[100]){
	//ifstream es el tipo de dato para el archivo del que se lee
	ifstream lee;
	lee.open(origen);
    
	//ofstream es el tipo de dato para el archivo en el que se escribe
	ofstream escribe;
	escribe.open(destino);
	
	string linea;
	
	//getline() obtiene una linea del archivo lee, si ya no hay lineas devuelve falso
	while(getline(lee,linea)){
		escribe << "nombre " << get_nombre(linea) << " suledo " << get_sueldo(linea) << "\n";
	}    

    lee.close();
    escribe.close();
}

int main(){
	
	// char arg[] es un arreglo de puros caracteres que funciona similar a un string.
	// la diferencia es que si usas el tipo de dato string mandas a llamar a un objeto
	// que contiene a su vez un arreglo de caracteres.
	char origen[100], destino[100];
	cin >> origen >> destino;
	escribe_tabla(origen,destino);
}