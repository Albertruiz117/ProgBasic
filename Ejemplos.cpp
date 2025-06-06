#include<iostream>
#include<windows.h>//con ciclo for 
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



////#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
int main()
{	
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, tabla;
	cout<<"dime cual tabla quieres generar: ";
	cin>>tabla;
	for(x=1;x<11;x++)
	{
		cout<<tabla<<" X " <<x<<" = "<<tabla*x<<"\n";		
	}
	for(x=1;x<11;x++)
	printf("%2d X %d = %3d\n", tabla,x,tabla*x);
	return 0;
	
}


//////if
#include<iostream>
using namespace std;
int main()
{
	if(denominador)
	     cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else 
	    cout<<"La division sobre cero no se permite\n";
	    

    if(!denominador)
        cout<<"La division sobre cero no se permite";
    else
        cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
 return 0;  
}

/////
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"dame un numero para determinar si es positivo o negativo: ";
	cin>>n;
	n>0?cout<<"el numero es positivo\n":cout<<"el numero es negativo\n";
	system("pause");
	
	if(n>0)
	   cout<<"el numero es positivo\n";
	   else
	   cout<<"el nuemro es negativo\n";
	system("pause");
	cout<<"el numero es positivo"<<n>0:cout<<"el numero es negativo";
	return 0;}
	
	
	//// switch
	
	#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int d,m,a;
	cout<<"dame una fecha en este formato ddmmaaaa: ";
	scanf("%2d%2d%4d",&d,&m,&a);
	switch(m)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			printf("primer cuatrimestre");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
        	printf("segundo cuatrimestre");
        	break;
        	case 9:
        	case 10:
        	case 11:
        	case 12:
        		printf("tercer cuatrimestre");
        	break;
        default:
        	printf("mes no valido");
	}
	cout<<"de"<<a;
	return 0;
}



//////program de ejemplo, lee 3 calificacione sy obtiene el promedio y grado 
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string nombre;
	int cal1,cal2,cal3,prom;
	cout<<"Dime tu nombre: ";
	cin>>nombre;
	cout<<"Dime la calificaicon 1: ";
	cin>>cal1;
	cout<<"Dime la calificaicon 2: ";
	cin>>cal2;
	cout<<"Dime la calificaicon 3: ";
	cin>>cal3;
	prom=(cal1 + cal2 + cal3)/3;
	cout<<nombre<<" tu promedio es: "<<prom<<", y tu calificacion final es: ";
	if(prom>+90 and prom<=100)
	{
		cout<<"A";
	}
	else
	{
		if(prom>=80 and prom<=89)
		{
			cout<<"B";
		
		}
		else 
		{
			if(prom>=70 and prom<=79)
			{
				cout<<"C";
			}
			else 
				if(prom>=60 and prom<=69)
				{
					cout<<"D";
				}
				else
				{
					if(prom<=59)
					{
						cout<<"N/A";
					}
				}
			}
		}
	}
	return 0;
	
}



////pasword
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


//// 5numeros diferente de 0
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    int x,y=1;
    cout<<"lectura de 5 numeros enteros usando do while\n";
    do{
    	cout<<"dame un numero que no sea 0 (intento # "<<y<<")\n";
    	cin>>x;
    	if(x==0)
    	continue;
    	cout<<"por aqui pasa solo cunado el numero es diferente de 0\n";
    	y++;
	}while(y<6);
	system("pause");
	
	
	system("CLS");
	cout<<"lectura de 5 numeros enteros usando un for estandar\n";
	for(y=1;y<6;y++)
	{
		cout<<"dame un numero que no sea 0 (intento #"<<y<<")\n";
		 cin>>x;
		 if(x==0)
		 continue;
		cout<<"por aqui pasa solo cunado el numero es diferente de 0\n";
    	y++;	
	}




