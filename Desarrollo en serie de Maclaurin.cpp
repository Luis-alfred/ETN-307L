// DESARROLLO EN SERIE DE MACLAURIN
#include <iostream> /*Directiva de procesamiento*/
#include <conio.h> //Libreria 
#include <stdlib.h> 

#include <math.h> //Libreria para potencias

//Definir namespace
using namespace std;

int fact(int a)
{
	int F = 1;
	for (int i = 1; i <= a; i++)
	{
		F = F*i;
	}
	return F;

}

// Funcion principal
int main()
{
	int n; float an; /*int para declarar la variable tipo entero y float para declarar la variable tipo real*/
	cout << "\n\t DESARROLLO EN SERIE DE MACLAURIN, PARA EL SIN(X), COS(X), SINH(X), COSH(X), e^X, 1/(1-X) Y LOG(1+X)"<<endl; /*Usamos barra fraccionaria invertida y n para el salto de linea*/
	cout << "\t --------------------------------------------------------------------------------------------------- \n"; //Usamos barra fraccionaria invertida y t para centar el texto
	cout << "\n Introduzca el numero de terminos de la serie :"; cin >> n;
	cout << "\n Introduzca el valor de x :"; cin >> an;
	
	double seno = 0, coseno = 0, seno_hiperbolico = 0, coseno_hiperbolico = 0, exponencial = 0, geometrica = 0, logaritmica = 0; //Declaracion de
	
	
	for(int k = 0; k < n; k++)
	{
		seno = seno + pow(-1, k)*pow(an, 2 * k + 1) / fact(2 * k + 1); /*pow se usa para la potencia gracias a la libreria math.h*/
		coseno = coseno + pow(-1, k)*pow(an, 2 * k ) / fact(2 * k );
		seno_hiperbolico = seno_hiperbolico + pow(an, 2 * k + 1) / fact(2 * k + 1);
		coseno_hiperbolico = coseno_hiperbolico + pow(an, 2 * k ) / fact(2 * k );
		exponencial = exponencial + pow (an, k) / fact(k);
		geometrica = geometrica + pow(an, k);
		logaritmica = logaritmica + pow(-1, k)*pow(an, k + 1) / (k + 1);
	}
	
	printf("\n El desarrollo de la serie del seno, para el termino n = %d, asd x = %f es %f\n", n, an, seno); /*Printf se usa para la instruccion de escritura de las variables*/
	printf("\n El desarrollo de la serie del coseno, para el termino n = %d, x = %f es %f\n", n, an, coseno); /*%d nos muestra un valor entero*/
	printf("\n El desarrollo de la serie del seno hiperbolico, para el termino n = %d, x = %f es %f\n", n, an, seno_hiperbolico); /*%f nos muestra un valor real que proviene de declarar float*/
	printf("\n El desarrollo de la serie del coseno hiperbolico, para el termino n = %d, x = %f es %f\n", n, an, coseno_hiperbolico); 
	printf("\n El desarrollo de la serie exponencial, para el termino n = %d, x = %f es %f\n", n, an, exponencial);
	printf("\n El desarrollo de la serie geometrica, para el termino n = %d, x = %f es %f\n", n, an, geometrica);
	printf("\n El desarrollo de la serie logaritmica, para el termino n = %d, x = %f es %f\n", n, an, logaritmica);
	
	_getch();
}
