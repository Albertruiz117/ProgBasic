#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
int main()
{	
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,y;
	float z;
	
//	for(x=3;x<=40;x=x+3)
	{
		cout<<x<<", ";
	}
	cout<<"\n";
	system("pause");
	
	for(x=100;x!=64;x-=4)
	{
		z=sqrt(x);
		cout<<" La raiz cuadrada de "<<x<<" es "<<z<<"\n";
	}
	system("pause");
	
	x=10;
	for(y=1;y!=x;++y)
	{
		cout<<y<<" dentro del ciclo (nunca entra)\n";
	}
	cout<<y<<" fuera del ciclo\n";
	system("pause");
	
	for(x=0,y=0;x+y<10;++x)
{
		cout<<"dame el valor de y: ";
		cin>>y;
	    cout<<x<<" + "<<y<<" = "<<y+x<<" el cliclo continua mientras la suma sea <10\n";
	}
	cout<<x<<" + "<<y<<" = "<<y+x<<" fuera del ciclo";
	
	//el for puede no tener todas sus partes 
	for(x=0;x!=123;)
	{
		cout<<" dame el valor de x, 123 para terminar el ciclo: ";
		cin>>x;
	}
	system("pause");
	
	//incializacion antes de for
	x=1;
	for(;x<=10;)
	{
		printf("%d\n",x);
		++x; 
		//variacion fuera de la sentencia for pero dentro del cuerpo del ciclo 
	}
	system("pause");
	
	for(;;)//ciclo infinito
	printf("nunca termina\n");
	
	for(x=0;x<1999900000;x++); //el ; hace que el ciclo concluya aqui 
	cout<<"hola mudno despues de unso cuantos segundos";
	
	
	
	return 0;
}