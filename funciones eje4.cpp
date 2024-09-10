
/*(9.2.2) Crea una función "escribirTabla", que escriba en
 pantalla la tabla de multiplicar del número que se le 
 indique como parámetro.*/
#include <iostream>
#include <string>
using namespace std;

void TablaMultiNum(){
    int num;
	int cantidad;
	cout << "Ingrese el numero de la tabla a mostrar:";
	cin >> num;
	for (int i = 0; i <= 10; ++i)
	{
		
		cout << num << " * " << i << " = " << num*i << endl;
	}

}
int main()
{
	TablaMultiNum();
	
	return 0;
}