//Alberto Yahir Ruiz Amador C23040753
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main( )
{
	char cad[80];
	string cad2;
	char c;
	puts("dame una cadena (en realidad es un arreglo)");
	gets(cad);
	puts("ejemplo de impresion con puts");
	puts(cad);
	printf("ejemplo de impresion con printf: ");
	printf(cad);
	printf("\npresiona una tecla y continuar automaticamente");
	c=getche();
	puts("\n");
	printf("presione una tecla y luego enter: ");
	getchar();
	printf("\npresiona una tecla y continuar automaticamente");
	fflush(stdin);
	getch();
	putchar(c);
	std::cout<<"daem una cadena ahora con cin: ";
	std::cin>> cad;
	cout<<"la segunda cadena no tiene espacios: "<<cad;
	cout<<"\ndame una cadena con espacios: ";
	fflush(stdin);
	getline(cin, cad2);
	cout<<"la cadena es"<<cad2 <<"ya con espacios"<<"\n";
	cout<<"captura de un arreglo char con getline\n";
}