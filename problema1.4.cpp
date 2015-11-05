//Problema 1.4 de la pagina 42.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	double a,b; //Declaracion de las variables a y b.
	a=5; b=3; //Inicializamos las variables.
	cout << "Caso 1: " << 5 + a * b + a / b * 4 << endl; //Sacamos por pantalla el caso 1.
	cout << "Caso 2: " << 6 * ( 5 - b ) + a - b / ( 5 - a ) << endl; //Sacamos por pantalla el caso 2 (Da error al dividir entre 0).
} //Fin del programa
