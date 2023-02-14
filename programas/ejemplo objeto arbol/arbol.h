/*
* Ejemplo
* Programar la clase Arbol que:
* Atributos: especie, edad, tam
* Métodos: getters(), setters(), crece(tiempo)
* Constructor

* completa el siguiente código y agrega comentarios
* para explicar lo que ocurre en cada función o instrucción que no entiendas
*/

#include<string>

//using namespace std;

class Arbol{
private:
  std::string especie;
  int edad;
  float tam;
  //agrega un atributo extra

public:
  Arbol();
  Arbol(std::string esp, int ed, float ta): especie(esp), edad(ed), tam(ta){};

  std::string get_especie();
  //int get_edad();
  //int get_tam();
  //agrega el getter a tu atributo extra

  void set_especie(std::string );
  //void set_edad(int );
  //void set_tam(int );
  //agrega el setter a tu atributo extra

  //void crece(int );

};


std::string Arbol::get_especie(){
  return especie;
}

void Arbol::set_especie(std::string esp){
  especie = esp;
}
