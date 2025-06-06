//Alberto Yahir Ruiz Amador C23040753
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x=1;
	string clave;
	for(x=1;x<4;x++)
	{
		printf("dame tu pasword sin espacios en blanco (intento #%d) ",x);
		cin>>clave;
		if(clave=="soloyolose")
		break;
	}
	if(x==4)
	puts("\ausuario no autorizado");
	else
	printf(" bienvenido al inteto #%d",x);
	return 0;
}
	int x=1;
	string clave;
	for(x=1;x<4;x++)
	{
		printf("dame tu pasword sin espacios en blanco (intento #%d) ",x);
		cin>>clave;
		if(clave=="soloyolose")
		break;
	}
	if(x==4)
	puts("\ausuario no autorizado");
	else
	printf(" bienvenido al inteto #%d",x);
	return 0;
}