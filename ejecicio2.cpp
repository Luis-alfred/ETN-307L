#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float exponencial;
	int i=0, x, n, j;
	double factorial=1;
	
	cout<<"introduzca el valor de x: ";
	cin>>x;
	
	cout<<"introduzca el numero de terminos de la serie: ";
	cin>>n;
	
	while (i<=n)
	{
		j=1;
		factorial=1;
		while(j<=i)
		{
			factorial=factorial*i;
			j=j+1;
		}
		
		exponencial=exponencial+pow(x, i)/factorial;
		
		i=i+1;
	}
	
	cout<<"El valor de e a la x es: "<<exponencial<<endl;
		
	return 0;
}


