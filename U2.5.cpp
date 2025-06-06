#include<iostream>
#include<windows.h>
using namespace std;
int main(void)
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x;
	cout<<"dame un numero: ";
	cin>>x;
	cout<<"hola mundo ";
	cout<<" la variable x vale : "<<x;
	return 0;
}
