/*(9.2.3) Crea una función "escribirProducto",
 que escriba en pantalla la multiplicación (detalle y resultado) 
 de los dos números que se le indiquen como parámetro. Por ejemplo,
 si se usa "escribirProducto(3,5)" en pantalla deberá aparecer "3 x 5 = 15".*/
#include <iostream>
#include <string>
using namespace std;
void escribirProducto(){
	short parametro1=0, parametro2=0;
	cout << "Ingrese los numeros a multiblicar a mostrar.\n";
	cout << "	Num1:";
	cin >> parametro1;
	cout << "	Num2:";
	cin >> parametro2;
	
	for (int i = 0; i <= 10; ++i)
	{
		if (i == parametro2)
		{
			cout << parametro1 << " * " << i << " = " << parametro1*i << endl;
		}
		
	}
}
int main()
{
	escribirProducto();
	return 0;
}