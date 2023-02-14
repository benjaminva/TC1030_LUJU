/*
título          :plumon.h
descripción     :Ejemplo de clase.
autor           :Benjamín Valdés
c++ version  	 :11
===============================================================

 ejemplo de trabajo con cadenas en c++
*/


#include<iostream>

using namespace std;

class Plumon{

	private:
		string color;
		int usos;
		int tam;
		
	public:
		Plumon(string c, int u, int t){
			color = c;
			usos = u;
			tam = t;
		}

		void pintar(){
			cout << "estoy pintando";
		}
		
		int incrementoUsos(){
			usos ++;
			return usos;
		}

};
