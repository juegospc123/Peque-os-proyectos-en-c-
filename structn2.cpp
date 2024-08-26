/*(7.2.1) Ampliar el programa del ejercicio 7.1.1, para que almacene datos 
de hasta 100 canciones. Deberá tener un menú que permita las opciones: 
añadir una nueva canción, mostrar el título de todas las canciones, buscar
 la canción que contenga un cierto texto (en el artista o en el título).
  Nota: si te parece demasiado complicado, 
en el apartado 7.4 tienes un ejemplo parecido, desarrollado de principio a fin.*/
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

	  	musig1* puntero= new musig1[10] ;

	


	int elecsion,i,o,p;
	int CanMusig = 0;
	string CansionTmporal;

	cout <<"1. añadir una nueva canción\n";
	cout <<"2. mostrarEl titulo de todas las canciones\n";
	cout <<"3. buscar canción\n";
	cout <<"4. finalizar\n";
	cin>>elecsion;

		while (elecsion!=4){
		   
			if(elecsion==1){

				
				
					cout<<("Igrese el nombre del Artista:\n");
					cin.ignore();

					getline(cin,puntero[CanMusig].Artista) ;
					
					if (puntero[i].Artista. empty())
					{
						cout<<"\nEl tipo de dato no es valido\n";
					}

					cout<<("Igrese el Título de la canción:");
					cin.ignore();

					getline (cin,puntero[CanMusig].Título);
					if (puntero[i].Título. empty())
					{
						cout<<"\nEl tipo de dato no es valido\n";
					}

					cout<<("Igrese la Duración (seg):\n");

					cin>>puntero[CanMusig].Duración;
					if (puntero[i].Duración <=0)
					{
						cout<<"\nEl tipo de dato no es valido\n";
					}

					cout<<("Igrese Tamano de la canción (KB):");

					cin>>puntero[CanMusig].Tamaño;
					if (puntero[i].Tamaño <=0)
					{
						cout<<"\nEl tipo de dato no es valido\n";
					}

				CanMusig++;   
		    
		}
			if(elecsion==2 && elecsion!=0){
			    cout <<"Cansiones gurdadas:\n";
			for (i = 0; i < CanMusig; ++i)
				{
					if (puntero[i].Título. empty())
					{
						cout<<"\nEl tipo de dato no es valido\n";
					}else{
						cout<<" "<<i<<". "<<puntero[i].Título;
				}
				    
				} 
			    
		}
			
			if(elecsion==3 && CanMusig!=0){
			 cout<<"Ingrese el nombre de la Cansion que desea buscar:";
			cin.ignore();
			getline(cin,CansionTmporal) ;


			for (int i = 0; i < CanMusig; ++i)
			{
				if (CansionTmporal==puntero[i].Título )
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
			    
		}
			
			
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
		    cout <<"1. añadir una nueva canción\n";
		    cout <<"2. mostrarEl titulo de todas las canciones\n";
		    cout <<"3. buscar canción\n";
		    cout <<"4. finalizar\n";
		    cin>>elecsion;
		}
		cout<<"Finalizado";
	
	
	return 0;
}