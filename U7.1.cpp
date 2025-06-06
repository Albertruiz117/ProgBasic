#include<iostream>
using namespace std;
void limpia(void){
	system("CLS");
}
void saludo(void){
	cout<<"buen dia\n";
}
int suma(int x, int y){
	return(x+y);
}
int main()
{
	int cant1, cant2, cant3;
	limpia();
	saludo();
	cout<<"dame un numero: ";
	cin>>cant1;
	cout<<"dame otro numero: ";
	cin>>cant2;
	cant3=suma(cant1,cant2);
	cout<<"el total es: "<<cant3<<'\n';
	cout<<"la suma de 1000+2000= "<<suma(1000,2000);
	return 0;
}