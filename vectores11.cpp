/*(5.3.7) Un programa que pida al usuario las componentes de dos vectores en el espacio y calcule su producto vectorial.*/
/*Primero, escribimos los componentes de los vectores A y B. Por ejemplo, si A tiene componentes (A1, A2, A3) y B tiene
componentes (B1, B2, B3), entonces tenemos:

A = (A1, A2, A3) B = (B1, B2, B3)

A continuación, calculamos el producto vectorial utilizando la siguiente fórmula:

A x B = (A2B3 - A3B2, A3B1 - A1B3, A1B2 - A2B1)

El resultado es un nuevo vector que es perpendicular a los vectores A y B.

Por ejemplo, si tenemos los vectores A = (2, 3, 4) y B = (1, -1, 2), podemos calcular su producto vectorial
de la siguiente manera:

A x B = (32 - 4(-1), 41 - 22, 21 - 3(-1))
= (6 + 4, 4 - 4, 2 + 3)
= (10, 0, 5)

Por lo tanto, el producto vectorial de los vectores A y B es (10, 0, 5).*/
#include <iostream>
#include <string>
using namespace std;
int main() {
  int vector1[2], vector2[2], resultado[2];
  
  double com[]={1,2,3};


  std::cout << "Ingrese los (3) componentes de los vectores:" << '\n';
  std::cout << "Primer Vector: " << '\n';
  for (short i = 0; i <3; ) {
    std::cout << "Com° "<<com[i]<<": ";std::cin >> vector1[2];

    i++;
  }
  std::cout << "Segundo Vector: " << '\n';
  for (short c = 0; c < 3; ) {
    std::cout << "Com° " <<com[c] <<": ";std::cin >> vector2[2];
    c++;
  }

resultado[0] = (vector1[1] * vector2[2]) - vector1[2] * vector2[1];
resultado[1] = vector1[2] * vector2[0] - vector1[0] * vector2[2];
resultado[2] = vector1[0] * vector2[1] - vector1[1] * vector2[0];





std::cout << "El Producto vectorial de los componentes es el espacio es: X(" <<resultado[0]<<"), Z("<<resultado[1]<<"), Y("<<resultado[2]<<")."  <<endl;

  return 0;
}
