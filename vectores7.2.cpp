#include <iostream>
#include <conio.sh>

void main()
{
int c, n, numero[n], suma;
float promedio;
suma = 0;
cout<<"Ingresa el numero de elementos";
cin>>n;
for (c=0; c<=n; ++c) {
cout<<"Ingresa un numero";
cin>>numero[c];
suma = suma + numero[c];
}
promedio = suma/n;
cout<<"Lo numeros ingresados son:"
for (c=0; c <=n; ++c) {
cout<<numero[c];
}
cout<<"La media es "<<promedio;

getch();
}
