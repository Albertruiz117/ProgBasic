#include<iostream>
using namespace std;
void modificarArregloChar(char (&arregloChar)[5]);
void modificarArregloInt(int (&arregloInt)[5]);
int main()
{
	char arregloChar[]="Hola";
	int arregloInt[]={1,2,3,4,5};
	cout<<"Arreglo char original: "<<arregloChar<<'\n';
	cout<<"arreglo int original: ";
	for(int i=0;i<5;i++)
	cout<<arregloInt[i]<<" ";
	cout<<'\n';
	modificarArregloChar(arregloChar);
    modificarArregloInt(arregloInt);
    cout<<"arreglo char modificado: "<<arregloChar<<'\n';
    cout<<"arreglo int modificado: ";
    for(int i=0;i<5;i++)
    cout<<arregloInt[i]<<" ";
	cout<<'\n';
	return 0;
}
void modificarArregloChar(char (&arregloChar)[5])
{
	 for(int i=0;i<5;i++)
	 arregloChar[i]='x';
}
void modificarArregloInt(int (&arregloInt)[5])
{
	 for(int i=0;i<5;i++)
	 arregloInt[i]*=2;
}
