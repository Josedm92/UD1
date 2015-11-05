//Problema 1.7 de la pagina 43.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	double numero1,numero2; //Declaración de variables
	numero1=0; //Inicialización de la variable numero1 a 0.
	numero2=0; //Inicialización de la variable numero2 a 0.

	cout << "Introduzca dos números: " << endl; //Pedimos por pantalla dos números.
	cin >> numero1 >> numero2; //Almacenamos los números obtenidos en sus respectivas variables.
	cout << "Suma de los dos números: " << numero1+numero2 << endl; //Sacamos por pantalla la suma de los dos números.
	cout << "Resta de los dos números: " << numero1-numero2 << endl; //Sacamos por pantalla la resta de los dos números.
	cout << "Producto de los dos números: " << numero1*numero2 << endl; //Sacamos por pantalla el producto de los dos números.
	cout << "División de los dos números: " << numero1/numero2 << endl; //Sacamos por pantalla la división de los dos números.
} //Fin del programa.
