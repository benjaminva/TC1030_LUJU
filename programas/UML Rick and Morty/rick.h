/*
Pare el siguiente archivo escribe tus propios
comentarios explicando o que hace cada parte del programa
y como se mapean el  UML a este código
*/

#ifndef RICK_H
#define RICK_H

#include "morty.h"
#include <string>

class Rick {
  private:
    std::string especie;
  Morty morty;
  int episodio;


  public:
    bool abandona_morty;
  Rick(): especie(""), episodio(0), abandona_morty(false) {};
  Rick(std::string esp, Morty mor, int epi, bool aban):
    especie(esp), morty(mor), episodio(epi), abandona_morty(false) {};
  std::string get_especie();
  Morty get_morty();
  int get_episodio();
  void set_especie(std::string);
  void set_episodio(int);
  void set_morty(Morty);
  void asigna_un_morty(Morty);
  void crea_un_morty();
  void elimina_morty(Morty&);

};

std::string Rick::get_especie() {
  return especie;
}

Morty Rick::get_morty() {
  return morty;
}

int Rick::get_episodio() {
  return episodio;
}

void Rick::set_especie(std::string esp) {
  especie = esp;
}

void Rick::set_episodio(int epi) {
  episodio = epi;
}

void Rick::set_morty(Morty mor) {
  morty = mor;
}

void Rick::elimina_morty(Morty &m) {
  abandona_morty = true;
  m.vivo = false;
}

void Rick::asigna_un_morty(Morty mor) {
  morty = mor;
}

void Rick::crea_un_morty() {
  Morty m1(especie, episodio, true);
  morty = m1;
}

#endif
