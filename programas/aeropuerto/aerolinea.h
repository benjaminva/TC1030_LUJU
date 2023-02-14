/*
título          :aviones.h
descripción     :Ejemplo de clase con aeropuerto.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 clase avion es la clase padre de las clases: Pasajeros, Carga
 y Privado, que son tipos de avion.
*/

#include "flota.h"
#include<string>
using namespace std;

class Aerolinea {
  private:
    Flota flota;
    string nombre;

  public:
    Aerolinea(string);
    string get_nombre();
    Flota get_flota();
    void agrega_a_pasajeros(Pasajeros a);
    void agrega_a_carga(Carga a);
    void agrega_a_privado(Privado a);
};

Aerolinea::Aerolinea(string nom){
    nombre = nom;
    Flota f("flota_" + nom);
    flota = f;
}

string Aerolinea::get_nombre(){ return nombre; }

Flota Aerolinea::get_flota(){ return flota; }

void Aerolinea::agrega_a_pasajeros(Pasajeros a){
  flota.agrega_a_pasajeros(a);
}

void Aerolinea::agrega_a_carga(Carga a){
  flota.agrega_a_carga(a);
}

void Aerolinea::agrega_a_privado(Privado a){
  flota.agrega_a_privado(a);
}
