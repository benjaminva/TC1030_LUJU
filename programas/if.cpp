/*
título          :if.cpp
descripción     :Ejercicios sobre condicionales.
autor           :Benjamín Valdés
c++ version  	 :11
===============================================================

 ejemplo de trabajo con if en c++
*/

#include<iostream>

using namespace std;



bool valida(float num){

    if(num > 0.0){
        return true;
	}else{
        return false;
	}
}
        

float corriente(float voltaje, float resistencia){

    
    if(valida(resistencia)){
        return voltaje/resistencia;
    }else{
        return -1;
	}
}

int main(){
	float voltaje, resistencia;
	cin >>  voltaje >> resistencia;
	cout << corriente(voltaje, resistencia);
}