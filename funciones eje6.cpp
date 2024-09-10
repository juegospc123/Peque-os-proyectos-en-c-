/*(9.2.4) Crea una función "escribirGuiones" que escriba en 
pantalla tantos guiones ("-")
 como se indique como parámetro y no devuelva ningún valor.*/
#include <iostream>
#include <string>

using namespace std;
void escribirGuiones(short cantidad){
	for (int i = 0; i < cantidad; ++i)
	{
		cout<< " _ ";

	}cout<<endl;
}
int main(int argc, char const *argv[])
{
	short num;
	cout << "Ingrese la acantidad de guiones que secea implimir:";
	cin >> num;
	escribirGuiones(num);
	return 0;
}