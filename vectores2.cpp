/*(5.1.2) Un programa que pida al usuario 5 números reales y luego los muestre en el orden contrario al que se introdujeron.*/
#include <iostream>
using namespace std;
int main() {
  double n[]={5};

  std::cout << "Defima los cinconumeros" << '\n';

  for (int i = 0; i <5; i++) {
    std::cout << "N°" <<i+1<<": ";std::cin >> n[i];
  }
  std::cout << "El orden contrario de los numeros ingresados es: "<<endl;
  short int i,a;
  i=0;
  a=0;
  while (i<5) {
    i++;
    a=5;
    std::cout << n[a-i]<<endl ;
  }
  return 0;
}
