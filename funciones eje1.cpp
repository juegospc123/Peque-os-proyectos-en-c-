/*(9.1.1) Crea una función "saludar", que escriba el texto "Hola" en pantalla.*/
#include <stdio.h>
#include <string>
using namespace std;

void MostrarHola(){
	int i;
	cout<< "Hola " << i++ << endl;

}
int main()
{
	
	cout << "Primer Hola.\n";
	MostrarHola();
	cout << "Segundo Hola.\n";
	MostrarHola();
	cout << "Terveer Hola.\n";
	MostrarHola();
	return 0;
}