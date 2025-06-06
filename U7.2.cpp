//Alberto Yahir Ruiz Amador C23040753
#include<iostream>
using namespace std;
void captura(void);
int maximo(int i, int j);
int main(void)
{
	int mayor=0;
	captura();
	mayor=maximo(1,-1);
	cout<<"el mayor es: "<<mayor;
	return 0;
}
void captura(void)
{
	int x,y;
	cout<<"dame un  numero entero: ";
	cin>>x;
	cout<<"dame otro numero entero: ";
	cin>>y;
	cout<<"el mayor es: "<<maximo(x,y)<<'\n';
}
maximo(int i, int j)
{
	if(i>j)
	return i;
	else
	return j;
}
