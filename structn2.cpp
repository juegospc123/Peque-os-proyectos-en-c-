#include <iostream>
using namespace std;
int main()
{
	
	struct musig1
	{
		string  Artista;
		string Título;
		float Duración;
		float Tamaño;

	};

	  	musig1* puntero= new musig1[100] ;

	DatosDeMusig1


	int elecsion,i,o,p;
	int CanMusig
	string CansionTmporal;

	cout <<"1. añadir una nueva canción\n";
	cout <<"2. mostrarEl titulo de todas las canciones\n";
	cout <<"3. buscar canción\n";
	cout <<"4. finalizar\n";

		switch(elecsion){
			case 1:
			if (CanMusig>100)
			{
				for (CanMusig = 0; CanMusig < 3; ++CanMusig
				{
					cout<<("Igrese el nombre del Artista:");

					getline(cin,puntero[CanMusig].Artista) ;

					cout<<("Igrese el Título de la canción:");

					getline (cin,puntero[CanMusig].Título);

					cout<<("Igrese la Duración (seg):");

					cin>>puntero[CanMusig].Duración;

					cout<<("Igrese Tamano de la canción (KB):");

					cin>>puntero[CanMusig].Tamaño;

				}

			}
				
			break
			case 2:
			cout <<"Cansiones gurdadas:\n"
			for (i = 0; i < CanMusig; ++i)
				{
					if (puntero[i].titulo. empty())
					{
						cout<<"\nEl tipo de dato no es valido\n";
					}else{
						cout<<" "<<i<<". "<<puntero[i].titulo}	
					}
			break
			case 3:

			cout<<"Ingrese el nombre de la Cansion que desea buscar:"
			cin<<CansionTmporal;


			for (int i = 0; i < CanMusig; ++i)
			{
				if (CansionTmporal==puntero[i].Título)
				{
					if (puntero[i].Artista. empty())
					{
						cout<<"\nEl tipo de dato no es valido\n";
					}else{
						cout<<"\nArtista:"<<puntero[i].Artista;
						}
						if (puntero[i].Duración <=0)
						{
							cout<<"\nEl tipo de dato no es valido\n";
						}else{
							cout<<"\nDuración:"<<puntero[i].Duración<<"seg";
						}
						if (puntero[i].Tamaño <=0)
						{
							cout<<"\nEl tipo de dato no es valido\n";
						}else{
							cout<<"\nTamaño:"<<puntero[i].Tamaño<<"KB";
						}
				}
			}
			break

		}while (elecsion!=4);
	
	
	return 0;
}