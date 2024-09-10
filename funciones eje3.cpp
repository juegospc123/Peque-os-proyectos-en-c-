/*(9.2.1) Crea una función "saludarVariasVeces", que escriba el texto "Hola"
 en pantalla, tantas veces como se indique como parámetro.*/

#include <iostream>
#include <string>

using namespace std;

void saludarVariasVeces(int cantidad){
	for (int i = 0; i < cantidad; ++i)
	{
		string hola ="Hola";
		cout << hola << " \n";
	}
	

}
int main()
{
	int Mostrar=0;
	cout << "Defina la cantidad de vecess que quiere nostrar la palabra Hola:";
	cin >> Mostrar;
	saludarVariasVeces(Mostrar);
	return 0;
}