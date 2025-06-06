#include<iostream>
using namespace std;
int main()
{
	int r,y[5],x[]={50,30,-1,0,-32768};
	int i=0;
	cout<<"impresion de los arreglos antes de la asignacion de uno a otro\n";
	for(i=0;i<5;i++)
	cout<<"x["<<i<<"]="<<x[i]<<"     y["<<i<<"]="<<y[i]<<"\n";
	cout<<"asignacion de los valores x en y espere un momento\n";
	for(i=0;i<5;i++)
	y[i]=x[i];
	cout<<"impresion de los arreglos despues de la asignacion\n";
	for(i=0;i<5;i++)
	cout<<"x["<<i<<"]="<<x[i]<<"     y["<<i<<"]="<<y[i]<<"\n";
	cout<<"presione una tecla para terminar ";
	return 0;
}