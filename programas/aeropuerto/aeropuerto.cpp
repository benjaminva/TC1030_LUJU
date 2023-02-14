#include<iostream>
#include"aerolinea.h"

using namespace std;


int main(){

  Aerolinea mexicana("mexicana aviacion");
  cout << "aerolinea " << mexicana.get_nombre() << endl;
  cout << "flota " << mexicana.get_flota().get_nombre() << endl;
  mexicana.get_flota().imprime_flota();

  cout << endl << endl;

  Pasajeros b1(39, "ABC57", "CMF56", 344.5, 39);
  Pasajeros b2(44, "ABC43", "CMF56", 344.5, 39);
  Pasajeros b3(55, "ABC51", "CMF56", 344.5, 39);
  Pasajeros b4(11, "ABC55", "CMF56", 344.5, 39);

  mexicana.agrega_a_pasajeros(b1);
  mexicana.agrega_a_pasajeros(b2);
  mexicana.agrega_a_pasajeros(b3);
  mexicana.agrega_a_pasajeros(b4);

  Carga c1(39, "JKL17", "CMF56", 6657.7, 120);
  Carga c2(88, "JKL27", "CMF56", 6657.7, 120);
  Carga c3(91, "JKL5", "CMF56", 6657.7, 120);
  Carga c4(62, "JKL118", "CMF56", 6657.7, 120);

  mexicana.agrega_a_carga(c1);
  mexicana.agrega_a_carga(c2);
  mexicana.agrega_a_carga(c3);
  mexicana.agrega_a_carga(c4);

  cout << "aerolinea " << mexicana.get_nombre() << endl;
  cout << "flota " << mexicana.get_flota().get_nombre() << endl;
  mexicana.get_flota().imprime_flota();
}
