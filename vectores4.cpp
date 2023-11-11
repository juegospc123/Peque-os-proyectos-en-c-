/*(5.2.2) Un programa que almacene en una tabla el número de días que tiene
cada mes (año no bisiesto), pida al usuario que le indique un mes
(ej. 2 para febrero) y un día (ej. el día 15) y diga qué número de día es dentro del año
(por ejemplo, el 15 de febrero sería el día número 46, el 31 de diciembre sería el día 365).*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int z[]={0,31,59,90,120,151,182,213,244,274,305,335,366};
  int t, d, m;
  t=0;
  d=0;
  m=0;
std::cout << "Incerte el numero del mes (Ej;1=enero, 12=diciembre): " ;std::cin >> m;
    std::cout << "Y el dia";std::cin >> d;
  if (d<=31 && m<=12) {
	  for (int i = 0; i <m; i++) {
    t=z[m-1]+d;
  }std::cout << "El numero del dia es: " << t<<endl;


}else{
  std::cout << "ERROR DE SISTEMA" << '\n';
}



  return 0;
}
