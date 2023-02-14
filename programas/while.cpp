/*
título          :while.cpp
descripción     :Ejercicios sobre ciclos.
autor           :Benjamín Valdés
c++ version  	 :11
===============================================================

 ejemplo de trabajo con ciclos en c++
*/

// biblioteca para usar cin y cout
#include<iostream>

// biblioteca para usar printf
#include<stdio.h>

using namespace std;


float potencia(int x, float n){
	int i = 0;
	float pot = 1.0;
	
	if(n > 0){
		while(i < n){
			pot =  pot * x;
			i = i + 1;
		}
	}else{
		while(0 > n){
			pot = pot * 1.0/x;
			n = n + 1;
		}
	}
	
	return pot;
}

int main(){
	
	int x;
	float n;
	
	cin >> x >> n;
	// usamos printf para controlar la cantidad de decimales
	printf("%.4f", potencia(x, n));	
}