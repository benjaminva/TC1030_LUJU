#ifndef SERVICIOS_H
#define SERVICIOS_H

#include "streaming.h"

class Servicios {
public:
  Streaming* servicios[4];
  Servicios();
  void muestra_info();

};

Servicios::Servicios(){
  servicios[0] = new Netflix("febrero", "Netflix Mexico");
  servicios[0]->crea_peli("Duro de matar", "luc beso", 140);
  servicios[0]->crea_peli("Openheimer", "Chris Nolan", 240);

  servicios[0]->pelis[1].set_calif(3);

  servicios[1] = new Amazon("viernes", "Amazon Mexico");
  servicios[1]->crea_peli("El perfecto Asesino", "Luc Besson", 120);
  servicios[1]->crea_peli("Señor de los anillos", "Chris Nolan", 220);

  servicios[1]->pelis[1].set_calif(5);

  servicios[2] = new Netflix("diciembre", "Netflix UK");
  servicios[2]->crea_peli("Die Hard", "luc beso", 140);
  servicios[2]->crea_peli("Openheimer", "Chris Nolan", 240);

  servicios[2]->pelis[0].set_calif(4);
  servicios[2]->pelis[1].set_calif(3);

  servicios[3] = new Amazon("lunes", "Amazon US");
  servicios[3]->crea_peli("Harry Potter", "Guillermo del Toro", 140);
  servicios[3]->crea_peli("Lord of the Rings", "Chris Nolan", 240);

  servicios[3]->pelis[0].set_calif(4);
  servicios[3]->pelis[1].set_calif(5);


}

void Servicios::muestra_info(){
  for(int i =0; i < 4; i++){
    cout << servicios[i]->to_string();
  }
}

#endif
