/*
título          :aviones.h
descripción     :Ejemplo de clase con aeropuerto.
autor           :Benjamín Valdés
c++ version  	:11
===============================================================

 clase avion es la clase padre de las clases: Pasajeros, Carga
 y Privado, que son tipos de avion.
*/

#include<string>
using namespace std;

class Avion{

  protected:
    int capacidad_peso;
    string identificador;
    string motor;
    float combustible;

  public:
    Avion(int c, string i, string m, float comb);
    Avion();
    int get_capacidad_peso();
    string get_identificador();
    string get_motor();
    float get_combustible();

    void set_capacidad_peso(int);
    void set_motor(string);

    void gasto_comb();
    void recarga_comb(float comb);
};

Avion::Avion(){}

Avion::Avion(int c, string i, string m, float comb){
  capacidad_peso = c;
  identificador = i;
  motor = m;
  combustible = comb;
}

int Avion::get_capacidad_peso(){return capacidad_peso;}
string Avion::get_identificador(){return identificador;}
string Avion::get_motor(){return motor;}
float Avion::get_combustible(){return combustible;}

void Avion::set_capacidad_peso(int pes){capacidad_peso = pes;}
void Avion::set_motor(string m){motor = m;}

void Avion::gasto_comb(){
  combustible--;
}

void Avion::recarga_comb(float comb){
  combustible =+ comb;
}

class Pasajeros:public Avion{
private:
  int asientos;
public:
  Pasajeros(){};
  Pasajeros(int c, string i, string m, float comb, int as):Avion(c,i,m,comb){
    asientos = as;
  }
  int get_asientos(){return asientos;}
  void set_asientos(int num){asientos = num;}
};


class Privado:public Avion{
private:
  string dueno;
public:
  Privado(){};
  Privado(int c, string i, string m, float comb, string d):Avion(c,i,m,comb){
    dueno = d;
  }
  string get_dueno(){return dueno;}
  void set_dueno(int nom){dueno = nom;}
};


class Carga:public Avion{
private:
  int contenedores;
public:
  Carga(){};
  Carga(int c, string i, string m, float comb, int car):Avion(c,i,m,comb){
    contenedores = car;
  }
  int get_contenedores(){return contenedores;}
  void set_contenedores(int num){contenedores = num;}
};
