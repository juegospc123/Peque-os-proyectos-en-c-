/*(5.3.8) Un programa que pida al usuario dos vectores en el plano (2 coordenadas)
  y diga si son linealmente dependientes (sus componentes son proporcionales).*/
 #include <iostream>
 #include <vector>
 using namespace std;
 int main() {
   int vector1[2],vector2[2];
   std::cout << "Defina los vectores:" << '\n';
   for (short i = 0; i < 2; i++) {
     std::cout << "N°"<<i+1<<": "; std::cin >> vector1[i];
   }
   std::cout << "Igrese los valores del segundo vector:" << '\n';
   for (short i = 0; i < 2; i++) {
     std::cout << "N°"<<i+1<<": "; std::cin >> vector2[i];
   }

   int determinante = vector1[0] * vector2[1] - vector1[1] * vector2[0];
   if (determinante==0) {
     std::cout << "Los vectores son linealmente dependientes" << '\n';
   }else {
     std::cout << "Los vectores No son linealmente dependientes" << '\n';
   }
   return 0;
 }
