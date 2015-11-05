//Problema 1.9 de la pagina 44.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos la libreria cmath para poder hacer la raiz cuadrada.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	double x1,x2,x3,media,desviacion; //Declaración de variables

	cout << "Introduzca x₁, x₂ y x₃: " << endl; //Pedimos por pantalla los valores de la ecuación.
	cin >> x1 >> x2 >> x3; //Almacenamos los valores en las variables correspondientes.
	//calculamos la media y la sacamos por pantalla.
	media=(x1+x2+x3)/3;
	cout << "La media de los números es: " << media << endl;
	//Calculamos la desviación típica y la sacamos por pantalla.
	desviacion=sqrt ((pow((x1-media),2) + pow((x2-media),2) + pow((x3-media),2))/3);
	cout << "La desviación típica de los números es: " << desviacion << endl;
} //Fin del programa.
