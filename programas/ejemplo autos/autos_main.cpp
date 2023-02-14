#include <iostream>

using namespace std;

#include "auto.h"

int main(){
  Auto sentra;
  sentra.agregaLlanta("goodyear back left", false, 0);
  sentra.agregaLlanta("goodyear back right", false, 1);
  sentra.agregaLlanta("uniroyal front left", false, 2);
  sentra.agregaLlanta("uniroyal front right", false, 3);

  cout << sentra.estatus_llantas();
}
