#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

double factorial(int n);
double taylor(int n, int x);

int main()
{
	int n, x;
	cout << "introduzca el numero de terminos de la serie: "; cin >> n;
	cout << "introduzca el valor de x: "; cin >> x;
	printf("El valor de Taylor para n = %d, x = %d es = %f\n", n, x, taylor (n, x));
	system("pause");
}

double taylor (int n, int x)
{
	double t, s = 0;
	for(int i = 0; i < n; i++) {
		t = pow(x, i) / factorial(i);
		s += t;
	}
	return s;
}

double factorial(int n)
{
	double fac = 1;
	for(int i = 2; i <= n; i++) {
		fac *= i;
	}
	return fac;
}
