/*(5.3.4) Un programa que pida al usuario 10 números enteros y calcule (y muestre) cuál es el mayor de ellos.*/
#include <iostream>
using namespace std;
int main() {
  int n[10],m;
  m=0;
  std::cout << "Ingrese los 10 numeros" << '\n';
  for (short i = 0; i < 10; i++) {
    std::cin >> n[i];
    if (n[i]>m ){
      m=n[i];
    }
  }
  std::cout << "El MAYOR es; "<<m << '\n';
  return 0;
}
