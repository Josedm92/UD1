//Problema 1.8 de la pagina 43.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int numero=0; //Declaración de variables.
	int multiplicador=1;
	cout << "Introduzca un número:" << endl; //Pedimos un número por pantalla.
	cin >> numero; //Almacenamos el número en la variable.
	cout << "Tabla del número " << numero << endl; //Sacamos por pantalla un título con el número al que corresponde la tabla.
	//Sacamos por pantalla el contenido de la tabla.
	cout << numero << " x " << "1" << " = " << numero*1 << endl; //Multiplicamos por 1 y lo sacamos por pantalla.
	cout << numero << " x " << "2" << " = " << numero*2 << endl; //Multiplicamos por 2 y lo sacamos por pantalla.
	cout << numero << " x " << "3" << " = " << numero*3 << endl; //Multiplicamos por 3 y lo sacamos por pantalla.
	cout << numero << " x " << "4" << " = " << numero*4 << endl; //Multiplicamos por 4 y lo sacamos por pantalla.
	cout << numero << " x " << "5" << " = " << numero*5 << endl; //Multiplicamos por 5 y lo sacamos por pantalla.
	cout << numero << " x " << "6" << " = " << numero*6 << endl; //Multiplicamos por 6 y lo sacamos por pantalla.
	cout << numero << " x " << "7" << " = " << numero*7 << endl; //Multiplicamos por 7 y lo sacamos por pantalla.
	cout << numero << " x " << "8" << " = " << numero*8 << endl; //Multiplicamos por 8 y lo sacamos por pantalla.
	cout << numero << " x " << "9" << " = " << numero*9 << endl; //Multiplicamos por 9 y lo sacamos por pantalla.
	cout << numero << " x " << "10" << " = " << numero*10 << endl; //Multiplicamos por 10 y lo sacamos por pantalla.	
} //Fin del programa
