/*(9.1.2) Crea una función "escribirTabla5", 
 que escriba en pantalla la tabla de multiplicar del número 5.*/

#include <iostream>
#include <string>
using namespace std;

void TablaDeMultiplicar5(){
	int num=5;
	for (int i = 0; i <= 10; ++i)
	{
		int multiplicar= num*i;
		cout << num << " * " << i << " = " << multiplicar << endl;
	}

}
int main()
{
	cout << "Tabla de 5 :\n";
	TablaDeMultiplicar5();
	return 0;
}