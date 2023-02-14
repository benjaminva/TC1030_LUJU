/*
Pare el siguiente archivo escribe tus propios
comentarios explicando o que hace cada parte del programa
y como se mapean el  UML a este código
*/

#include "rick.h"

#include "morty.h"

#include <iostream>

using namespace std;

int main() {

//ejemplo 1
  cout << "rick y morty se crean vacios y se llenan despues" << endl;

  Rick rick_def;
  Morty morty_def;
  rick_def.set_especie("humano");
  morty_def.set_especie("humano");
  rick_def.set_episodio(1);
  morty_def.set_episodio(1);
  rick_def.set_morty(morty_def);

  cout << "rick_def " <<
    rick_def.get_especie() << " " <<
    rick_def.get_episodio() << endl;

  cout << "morty_def " <<
    morty_def.get_especie() << " epi: " <<
    morty_def.get_episodio() <<" vivo: " <<
    morty_def.vivo << endl;

  cout << endl << endl;

//ejemplo 2
  cout << "rick y morty se crean llenos " << endl;

  //(morty primero porque rick recibe un morty)
  Morty morty_full("gelatina", 20, true);
  Rick rick_full("reptil", morty_full, 20, false);

  cout << "rick_full " <<
    rick_full.get_especie() << " " <<
    rick_full.get_episodio() << endl;

  cout << "morty_full " <<
    morty_full.get_especie() << " epi: " <<
    morty_full.get_episodio() <<  " vivo: " <<
    morty_full.vivo << endl;

  cout << "el morty de rick_def es " <<
    rick_def.get_morty().get_especie() << " y sale en episodio " <<
    rick_def.get_morty().get_episodio() << endl;

  cout << "el morty de rick_full es " <<
    rick_full.get_morty().get_especie() << " y sale en episodio " <<
    rick_full.get_morty().get_episodio() << endl;

  cout << endl << endl;

//ejemplo 3
  cout << "rick de este episodio obtiene un nuevo morty " << endl;
  rick_full.elimina_morty(morty_full);
  rick_full.asigna_un_morty(morty_def);

  cout << " rick_full abando a un morty " <<
    rick_full.abandona_morty << " el nuevo morty es " <<
    rick_full.get_morty().get_especie() << " y sale en episodio " <<
    rick_full.get_morty().get_episodio() << endl;

  cout << " morty_full (el abandonado) es " <<
    morty_full.get_especie() << " epi: " <<
    morty_full.get_episodio() <<  " vivo: " <<
    morty_full.vivo << endl;

  cout << endl << endl;

//ejmplo 4
  cout << "rick crea su propio morty " << endl;

  Rick rick_solo;
  rick_solo.set_especie("mutante");
  rick_solo.set_episodio(31);
  rick_solo.crea_un_morty();

  cout << "el morty de rick_solo es " <<
    rick_solo.get_morty().get_especie() << " y sale en episodio " <<
    rick_solo.get_morty().get_episodio() << " vivo " <<
    rick_solo.get_morty().vivo << endl;

  cout << endl << endl;

//ejemplo 5
  cout << "rick de este episodio obtiene un nuevo morty " << endl;

  rick_solo.asigna_un_morty(morty_def);

  cout << "el morty de rick_solo es " <<
    rick_solo.get_morty().get_especie() << " y sale en episodio " <<
    rick_solo.get_morty().get_episodio() << " vivo " <<
    rick_solo.get_morty().vivo << endl;

}
