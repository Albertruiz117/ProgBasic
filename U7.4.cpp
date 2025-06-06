//Alberto Yahir Ruiz Amador C23040753
#include<iostream>
using namespace std;
	void parImpar( int numero);
	int main(){
		int numero;
		cout<<"ingrese un numero: ";
		cin>>numero;
		parImpar(numero);
		cout<<"ingrese otro numero: ";
		cin>>numero;
		parImpar(numero);
		return 0;
	}
void parImpar(int numero){
	if(numero%2==0)
	cout<<"el numero es par.\n";
	else
	cout<<"el numero es impar.\n";
}
