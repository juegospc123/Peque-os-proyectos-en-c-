/*(5.1.1) Un programa que pida al usuario 4 números, los memorice (utilizando una
tabla), calcule su media aritmética y después muestre en pantalla la media y los datos tecleados.*/
#include <iostream>
#include <cmath>
#include <vector>
int main() {
  int n[5],s;
  
  s=0;
  
  std::cout << "ingrese los cuatro numeros: " << '\n';
  for (int i = 0; i <4; i++) {
	  std::cout << "n" << i+1 << ": ";
	  std::cin >> n[i];
    s+=n[i];
  }



  std::cout << "La media es: " <<s/4<< '\n';
  return 0;
}
