#include<iostream>
using namespace std;

int funcion_factorial(int numero);


int main()
{
	int numero;
	cout<<"Ingrese un numero "<<endl;
	cin>>numero;

	cout<<funcion_factorial(numero)<<endl;
	return 0;
}


int funcion_factorial(int numero)
{
	int i;
	int factorial=1;


	for(int i=1; i<=numero; i++)
	{
		factorial*=i;
	}
	cout<<factorial<<endl;

}








/*
int main()
{
	int i;
	int factorial=1;
	int numero;
	cout<<"Ingrese un numero ";
	cin>>numero;
	
	for(int i=1; i<=numero; i++)
	{
		factorial*=i;
	}
	cout<<factorial<<endl;
	return 0;
}



int numero;
int factorial(numero);


int main()
{
	int i;
	int factorial=1;
	int numero;
	cout<<"Ingrese un numero ";
	cin>>numero;
	cout<<factorial(numero)<<endl;
	return 0;
}

int factorial(numero)
{
	int i;
	int factorial=1;
	int numero;
	cout<<"Ingrese un numero ";
	cin>>numero;

	for(int i=1; i<=numero; i++)
	{
		factorial*=i;
	}
	cout<<factorial<<endl;
}
*/
