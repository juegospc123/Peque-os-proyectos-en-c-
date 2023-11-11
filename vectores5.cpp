/*(5.3.1) A partir del programa propuesto en 5.2.2, que almacenaba en una tabla el número de días que tiene cada mes, crear
otro que pida al usuario que le indique la fecha, detallando el día (1 al 31) y el mes (1=enero, 12=diciembre),
como respuesta muestre en pantalla el número de días que quedan hasta final de año.*/
#include <iostream>
#include <cmath>
#include "string"
using namespace std;
int main() {
  int z[]={0,31,59,90,120,151,182,213,244,274,305,335,366};
  int t, d, m;
  t=0;
  d=0;
  m=0;
std::cout << "Incerte el numero del mes (Ej;1=enero, 12=diciembre): " ;std::cin >> m;
    std::cout << "Y el dia";std::cin >> d;

    for (int i = 0; i <m; i++) {
    t=z[m-1]+d;
  }
  t=366-t;
  std::cout << "Los dia que faltan para fin de años son: " << t<<endl;
  return 0;
}
