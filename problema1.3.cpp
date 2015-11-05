//Problema 1.3 de la pagina 42.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Declaracion de variables
int x=5; //Declaramos "x" y la inicializamos con el valor 5.
int y=2; //Declaramos "y" y la inicializamos con el valor 2.

//Inicio del programa.
int main () {
	cout << "Valor de x: " << x << endl; //Sacamos por pantalla el valor de x.
	cout << "Valor de y: " << y << endl; //Sacamos por pantalla el valor de y.
	cout << "Valor de x/y\n" << x/y; //Sacamos por pantalla el cociente de la division x/y.
	cout << "\tValor de y/x: " << y/x << endl; //Sacamos por pantalla el cociente de la division y/x.
	cout << "La mitad de x: " << x/2.0 << endl; //Sacamos por pantalla el cociente de la division x/2.0.
} //Fin del programa
