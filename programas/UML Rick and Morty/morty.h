/*
Pare el siguiente archivo escribe tus propios
comentarios explicando o que hace cada parte del programa
y como se mapean el  UML a este código
*/

#ifndef MORTY_H
#define MORTY_H

#include <string>

class Morty {
  private:
    std::string especie;
  int episodio;

  public:
    bool vivo;

  Morty(): especie(""), episodio(0), vivo(true) {};
  Morty(std::string esp, int epi, bool mue):
    especie(esp), episodio(epi), vivo(mue) {};

  std::string get_especie();
  int get_episodio();

  void set_especie(std::string);
  void set_episodio(int);

};

std::string Morty::get_especie() {
  return especie;
}


int Morty::get_episodio() {
  return episodio;
}

void Morty::set_especie(std::string esp) {
  especie = esp;
}

void Morty::set_episodio(int epi) {
  episodio = epi;
}

#endif
