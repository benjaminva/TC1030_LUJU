/*
título          :matrices.cpp
descripción     :Ejercicios sobre matrices.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 ejemplo de trabajo con listas en c++
*/

#include<iostream>

using namespace	std;

void llenaMat(int mat[100][100], int exterior, int interior){
	
	/* recorro solo hasta tam, que es hasta 
	donde pienso llenar el arreglo */
	
	for(int i = 0; i < exterior; i++)
		for (int j = 0; j < interior; j++)
			cin >> mat[i][j];
	
}


int sumaDiagonal(int mat[100][100], int exterior, int interior){
	
	int sum = 0;
	
	/* imprimo solo hasta tam que es hasta
	donde llené, lo demás es basura*/
	
	for(int i = 0; i < exterior; i++){
		for (int j = 0; j < interior; j++){
			if (i == j){
				sum = sum + mat[i][j];
			}
		}
	}
	
	return sum;
}


void printMat(int mat[100][100], int exterior, int interior){
	
	cout << "\n";
	for(int i = 0; i < exterior; i++){
		for (int j = 0; j < interior; j++)
			cout << mat[i][j] << " ";
		cout << "\n";
	}
}


int main(){
	
	
	/* Creo un arreglo en c++ con espacio 
	sobrado para lo que quiero guardar */
	
	int matriz[100][100]; 
	
	
	/* Uso las variables exterior e interior 
	para saber hasta que parte de los arregloa 
	voy a usar */
	
	int exterior, interior;
	
	cin >> exterior >> interior;
	
	llenaMat(matriz, exterior, interior);

	printMat(matriz, exterior, interior);

	cout << sumaDiagonal(matriz, exterior, interior);
}