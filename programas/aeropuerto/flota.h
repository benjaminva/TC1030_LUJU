/*
título          :flota.h
descripción     :Ejemplo de clase con aeropuerto.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 clase flota es un ejemplo de agregación con clses Pasajeros
 Carga y Privado que son tipos de avion.
*/

#include"aviones.h"

class Flota{

  private:
    string nombre;
    Pasajeros aviones_pas[100];
    Carga aviones_carga[100];
    Privado aviones_priv[100];

    int t_pas, t_car, t_priv;

  public:
    Flota(){};
    Flota(string nom);
    string get_nombre();
    void agrega_a_pasajeros(Pasajeros);
    void agrega_a_carga(Carga);
    void agrega_a_privado(Privado);
    void imprime_flota();

};

Flota::Flota(string nom){
  nombre = nom;
  t_pas = 0;
  t_car = 0;
  t_priv = 0;
}

string Flota::get_nombre(){ return nombre; }

void Flota::agrega_a_pasajeros(Pasajeros a){
  aviones_pas[t_pas] = a;
  t_pas++;
}

void Flota::agrega_a_carga(Carga a){
  aviones_carga[t_car] = a;
  t_car++;
}

void Flota::agrega_a_privado(Privado a){
  aviones_priv[t_priv] = a;
  t_priv++;
}

void Flota::imprime_flota(){
  cout << "Pasajeros:" << endl;
  for(int i = 0; i < t_pas; i ++){
    cout << "\t"<< aviones_pas[i].get_identificador()  << endl;
  }
  cout << "Carga:" << endl;
  for(int i = 0; i < t_car; i ++){
    cout << "\t"<< aviones_carga[i].get_identificador() << " " << endl;
  }
  cout << "Pasajeros:" << endl;
  for(int i = 0; i < t_priv; i ++){
    cout << "\t" << aviones_priv[i].get_identificador() << " " << endl;
  }
}
