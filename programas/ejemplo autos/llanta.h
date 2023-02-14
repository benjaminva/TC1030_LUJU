#ifndef LLANTAS_H_
#define LLANTAS_H_

#include <sstream>

class Llanta {

  private:
    string nombre;
    bool ponchada;

  public:
    Llanta(){};
    Llanta(string s, bool p):nombre(s),ponchada(p){};
    void set_ponchada( bool);
    string to_string();

};

void Llanta::set_ponchada(bool p){
  ponchada = p;
}

string Llanta::to_string(){
    stringstream aux;
    aux << nombre << " estatus " << ponchada;
    return aux.str();
}

#endif
