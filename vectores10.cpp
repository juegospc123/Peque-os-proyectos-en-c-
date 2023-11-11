/*(5.3.6) Un programa que pida al usuario las componentes de dos vectores en el espacio (3 coordenadas)
 y calcule su producto escalar.*/
#include <iostream>
using namespace std;
int main() {
  double v1[3],v2[3],p[3];
  short c;
  std::cout << "ingrese las medidas de las 3 unidades del N°1 Vector: " << '\n';
  for (short i = 0; i < 3; ) {
    std::cout << "Cordenada°"<<i+1 <<":";
    std::cin >> v1[i];
    i++;

  }
  std::cout << "ingrese las medidas de las 3 unidades del N°2 Vector:" << '\n';
  for ( c = 0; c < 3; ) {
    std::cout << "Cordenada°"<<c+1 <<":";
    std::cin >> v2[c];
    c++;

  }
  for (short m = 0; m <3;) {
	  
    p[m]= v1[m]*v2[m];
    m++;


    }
        std::cout << "El prosucto escalar es: "<<p[0]+p[1]+p[2] << '\n';
  return 0;
}
