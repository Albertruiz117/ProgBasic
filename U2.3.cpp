//Alberto Yahir Ruiz Amador C23040753
#include<stdio.h>
#include<conio.h>
int main( )
{
	char cad[80];
	char c;
	puts("dame una cadena");
	gets(cad);
	puts("ejemplo de impresion con puts");
	puts(cad);
	printf("ejemplo de impresion con printf: ");
	printf(cad);
	printf("\npresiona una tecla y continuar automaticamente");
	c=getche();
	puts("\n");
	putchar(c);
	puts("\n");
	printf("presione una tecla y luego enter: ");
	c=getchar();
	putchar(c);
	printf("\npresiona una tecla y continuar automaticamente");
	fflush(stdin);
	c=getch();
	printf("\n");
	putchar(c);
	printf("\n");
	putchar(c);
	return 0;
}