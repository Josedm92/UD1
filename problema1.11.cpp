//Problema 1.11 de la pagina 44.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración e inicialización de variables.
	double notateoria,notapracticas,notaproblemas,notafinal;
	notateoria=0.0;
	notapracticas=0.0;
	notaproblemas=0.0;
	notafinal=0.0;
	//Pedimos por pantalla las notas de teoría, prácticas y problemas y las almacenamos en sus variables correspondientes.
	cout << "Introduzca la nota de la teoría: " << endl;
	cin >> notateoria;
	cout << "Introduzca la nota de las prácticas: " << endl;
	cin >> notapracticas;
	cout << "Introduzca la nota de los problemas: " << endl;
	cin >> notaproblemas;
	//Calculamos la nota final
	notafinal=notateoria*0.7+notapracticas*0.2+notaproblemas*0.1;
	cout << "La nota final es de: " << notafinal << endl; //Sacamos por pantalla la nota final calculada.
} //Fin del programa
