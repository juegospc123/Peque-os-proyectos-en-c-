/*(5.4.1) Un programa pida datos al usuario los datos de una matriz de 2x2 y muestra su traspuesta (el resultado de intercambiar
 filas por columnas).*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
  double datos[2][2];
  std::cout << "Ingrese el valor de la matriz 2X2 " << '\n';

    for (short i = 0; i < 2; i++) {
      for (short j = 0; j < 2; j++) {
        std::cout << "Ingrese el valor (matriz 2x2) de la fila"<<i+1 <<", columna "<<j+1<< '\n';std::cin >> datos[i][j];
      }
    }

  short int t,y;
    std::cout << "Matris original:" << '\n';

    for (t = 0; t < 2; t++) {
      for (y = 0; y < 2; y++) {

        std::cout << datos[t][y];


      }
    }

  cout<<endl;
  std::cout << "La traspuesta de la Matris:" << '\n';

    for (y = 0; y < 2; y++) {
      for (t = 0; t < 2; t++) {

        std::cout << datos[t][y];


      }
    }



  return 0;
}
