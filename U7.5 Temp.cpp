//Alberto Yahir Ruiz Amador C23040753
#include<iostream>
using namespace std;
double ctof(double centi);
double ftoc(double fahr);
int main()
{
	double temperatura;
	int opcion;
	cout<<"ingrese la temperatura: ";
    cin>>temperatura;
    cout<<"seleccione la opcion deseada: \n";
    cout<<"1. centigrados a fahrenheit\n ";
    cout<<"2. fahrenheit a centigrados\n ";
    cin>>opcion;
    switch(opcion)
    {
    	case 1:
    		cout<<temperatura<<"grados centigrados son"<<ctof(temperatura)<<"grados fahrenheit.\n";
    		break;
    	case 2:
    		cout<<temperatura<<" grados fahrenheit son "<<ftoc(temperatura)<<" grados centigrados.\n";
    		break;
    	default:
    		cout<<"opcion invalida.\n";
    		break;
	}
	return 0;
}
double ctof(double centi)
{
	return (centi*9/5)+32;
}
double ftoc(double farh)
{
	return (farh-32)*1.8;
}