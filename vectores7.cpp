/*(5.3.3) Crear un programa que pida al usuario 10 números reales, calcule su media y luego muestre los que e
stán por encima de la media.*/
#include <iostream>
using namespace std;
int main() {
  double n[10],  s, m;
  std::cout << "Ingrese elos 10 nuemros reales a continuacion: " << '\n';
  for (short i = 0; i < 10; i++) {
    std::cin >> n[i];
    s+=n[i];

  }
  /* Mostrar los números por encima de la media*/
  cout<< "La media es: "<<s/10<<endl;
    cout << "Los números por encima de la media son: " << endl;
    m=s/10;
    for (int i = 0; i < 10; i++) {
        if (n[i] > m ){
            cout << n[i] << endl;
        }
    }

  return 0;
}
