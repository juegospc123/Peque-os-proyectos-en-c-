/*(5.4.2) Un programa que pida al usuario los datos de una matriz de 3x3, y muestre su determinante.*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    double matriz[3][3];
    double deter1[]={1,1},deter2[]={1,1};
    
    for(short i=0;i<3;i++){
              for (short o=0;o<3;o++){
                  cout<<"Imprima el numero de la fila ( "<<i+1<<" ), columna ( "<<o+1<<" )"<<endl;
                  cin >>matriz[i][o];
                  }
          }
    for(short k=0;k<3;k++){
              for(short l=0;l<3;l++){
                        deter1[0]*=matriz[k][l];
                        
                        }
              deter1[1]=deter1[1]+deter1[0];
              }
    for(short q=0;q<3;q++){
              for(short w=0;w<3;w++){
                        deter2[0]+=matriz[q][w];
                        
                        }
              deter2[1]-=deter2[0];
              }
    cout<<"El determinante de la matris (3x3) es: "<< deter1[1]-deter2[1]<<endl;
    return 0;
    }
