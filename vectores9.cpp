  /*(5.3.5) Un programa que pida al usuario los datos de dos vectores e
  n el planoX2 (2 coordenadas) y calcule su diferencia.*/
    /*(5.3.5) Un programa que pida al usuario los datos de dos 2 coordenadas del plano
    y calcule su diferencia.*/
#include <iostream>
using namespace std;
int main() {

  double  v1[2],v2[2];
  std::cout << "Ingrese las dos cordenadas del primer plano" << '\n';
  
  for (short i = 0; i < 2; i++) {
    std::cout << "Vector°" << i+1<<": ";
    std::cin >> v1[i];
  }
  std::cout << "Ingrese las dos cordenadas del segundo plano" << '\n';
  for (short i = 0; i < 2; i++) {
    std::cout << "Vector"<< i+1<<": ";
    std::cin >> v2[i];
  }
  std::cout << "La deferencia de las cordenadas es :" <<endl;
  double  x, y;
    x=v1[1]-v2[1];
    y=v1[2]-v2[2];

  std::cout << "N°1 Cordenada("<<x<<")"<<endl<<"N°2 Cordenada ("<<y<<")" << '\n';
  return 0;
}
