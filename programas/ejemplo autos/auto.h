#ifndef AUTO_H_
#define AUTO_H_

#include "llanta.h"

class Auto{

  private:
    Llanta llantas[4];

  public:
    Auto(){};
    void agregaLlanta(string, bool, int);
    string estatus_llantas();

};

void Auto::agregaLlanta(string marca, bool ponchada, int posicion){
  llantas[posicion] =  Llanta (marca, ponchada);
}

string Auto::estatus_llantas(){
  stringstream aux;
    for(int i = 0 ; i <4; i++){
      aux <<"llanta: " << i << llantas[i].to_string()<< endl;
    }
    return aux.str();
}

#endif
