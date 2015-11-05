//Problema 1.6 de la pagina 43.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Codigo original.
//int main () {
//	double precio,pagado;
//	int centimos;
//	cout << "Escriba precio y dinero entregado: ";
//	cin >> precio >> pagado;
//	centimos= 100*(pagado-precio);
//	cout << "Hay que devolver: " << centimos << " centimos" << endl;
//}

//Codigo corregido.
//Inicio del programa.
int main () {
	//Declaramos las variables
	double precio,pagado; 
	double centimos; //Cambiamos la variable centimos a tipo double para que de el cambio correctamente.
	cout << "Escriba precio y dinero entregado: "; //Pedimos por pantalla el precio del articulo y el dinero entregado.
	cin >> precio >> pagado; //Almacenamos los valores obtenidos en sus respectivas variables.
	centimos= 100*(pagado-precio); // Calculamos el cambio.
	cout << "Hay que devolver: " << centimos << " centimos" << endl; // Sacamos por pantalla el cambio calculado.
} //Fin del programa.
