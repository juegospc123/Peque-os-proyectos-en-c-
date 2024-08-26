/*(5.5.1) Un programa que, a partir de los datos prefijados de los días de cada mes, diga qué meses tienen 30 días. Se deberá mostrar 
el número de cada mes, pero empezando a contar desde 1 (abril será el mes 4).*/
#include <iostream>
using namespace std;
int main()
{
	int fines[]={31, 28, 31, 30, 31, 30,
         31, 31, 30, 31, 30, 31};
     int a[12],b[12],c[12];
     int k =0, op;
     int matriz[3];

        std:: cout<<"A continuacion agrupammos los meses que posean la mismaa cantidad de dias "<<endl;
         for (int i = 31; i >= 28 ; --i)
         {
             op++;
         	for (int j = 0; j < 12; ++j)
         	{
 			if (fines [j]== i)
 			
         	{
         	    matriz[op]= j;
         	}
         		cout<<"Los mese con "<<i<<" dia son: "<< k++<<endl ;
         	}
         	
         }
	return 0;
}