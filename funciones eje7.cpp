/*    (9.2.5) Crear una función "dibujarRectangulo",
 que reciba como parámetros la anchura y la altura del 
 rectángulo a mostrar, y muestre en pantalla un rectángulo
  de ese tamaño, relleno de caracteres "#". Por ejemplo,
   para anchura 4 y altura 2 sería:
*/
#include <istream>
#include <string>
using namespace std;
void dibujarRectangulo(int alto,int ancho){
	for (int i = 0; i < alto; ++i)
	{
		
		for (int j = 0; j < ancho; ++j)
		{
			cout << "#";
		}cout << endl;
	}
}
int main(int argc, char const *argv[])
{
	int parametroAlto=0, parametroAncho=0;
	cout << "Ingrese el alto:";
	cin >> parametroAlto;
	cout >> " Ingreseel ancho:";
	cin >> parametroAncho;
	dibujarRectangulo(parametroAncho,parametroAlto);
	

	return 0;
}