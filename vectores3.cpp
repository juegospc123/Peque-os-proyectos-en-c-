/*(5.2.1) Un programa que almacene en una tabla el número de días que tiene cad
a mes (su­pon­dremos que es un año no bisiesto), pida al usuario que le indique un m
es (1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes.*/
#include <iostream>

#include <cmath>
using namespace std;
int main() {
    short int n[]={0,31,28,31,30,31,30,31,31,30,31,30,31},m;
    std::cout << "Incerte el numero del mes (Ej;1=enero, 12=diciembre):";std::cin >> m;
    std::cout << "Tiene: " << n[m]<<" dias"<<endl;

  return 0;
}
