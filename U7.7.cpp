//Alberto Yahir Ruiz Amador C23040753
#include<iostream>
#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
	int num;
	cout<<"dime un numero para calcular su factorial:";
	cin>>num;
	cout<<"el factorial de "<<num<<" es :";
	num=factorial(num);
	cout<<num;
	return 0;
}
int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
	
}