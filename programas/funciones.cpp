/*
título          :funciones.cpp
descripción     :Ejercicios sobre arreglos.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de trabajo con funciones en c++
*/

#include<iostream>

using namespace std;

float dolares_a_pesos(float dolares){    
    return dolares * 21.5;  
}
    
float costo_hotel(int noches){
    return noches * 170.0;
}
    
float costo_avion(int pasajeros){
    return pasajeros * 315;
}    


float costo_viaje(int noches, int pasajeros){
    
    float hotel = dolares_a_pesos(costo_hotel(noches));
    float avion = dolares_a_pesos(costo_avion(pasajeros));
    
    return hotel + avion;
}
  

int main(){
	
	int noches, pasajeros;
	cin >> noches >> pasajeros;
	cout << costo_viaje(noches,pasajeros);

}
