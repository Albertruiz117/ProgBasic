//Alberto Yahir Ruiz Amador C23040753
#include<iostream>
#include<stdio.h>
using namespace std;
int funcionFactorial( int n);
int main()
{
	int num;
	cout<<"dime un numero para calcular su factorial: ";
	cin>>num;
	num=funcionFactorial(num);
	cout<<"="<<num;
	return 0;
}
int funcionFactorial(int n){
	int x;
	cout<<n;
	for(x=n-1;x>=1;x--)
	{
		cout<<n;
		n=n*x;
	}
	return n;
}
