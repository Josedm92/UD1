//Problema 1.9 de la pagina 44.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos la libreria cmath para poder hacer la raiz cuadrada.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	double a,b,c,x; //Declaración de variables

	cout << "Introduzca a, b y c: " << endl; //Pedimos por pantalla los valores de la ecuación.
	cin >> a >> b >> c; //Almacenamos los valores en las variables correspondientes.

	cout << "Solución para la ecuación: " << a << "x²+" << b << "x+" << c << "=0" << endl; //Sacamos por pantalla la ecuación a resolver.
	//Resolvemos la primera solución y la sacamos por pantalla
	x=(b+sqrt(pow(b,2)-4*a*c))/(2*a);
	cout << "Solución 1: " << x << endl;
	//Resolvemos la segunda solución y la sacamos por pantalla
	x=(b-sqrt(pow(b,2)-4*a*c))/(2*a);
	cout << "Solución 2: " << x << endl;

} //Fin del programa.

