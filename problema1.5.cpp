//Problema 1.5 de la pagina 43.

//Codigo original.
//#include <iostream> 
//
//int main () {
//	Double valor,base;
//
//	cout << "Indique base: " ; cin << base
//	cout << "Indique valor: " ; cin >> valor;
//	cout << "El log en base" << base << "de" 
//	<< Valor << es;
//	cout < < log(valor)/log(base) << end;
//}


//Codigo corregido
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos la libreria cmath para la operacion de log.
using namespace std; //Incluimos el espacio de nombres std para poder usar endl.

int main () {
	double valor,base; //Ponemos double en minuscula, de la otra forma no se reconoce.

	cout << "Indique base: " ; 
	cin >> base; //Separamos cout y cin en dos lineas, cambiamos << por >> porque es una operacion de entrada y añadimos el ; que faltaba.
	cout << "Indique valor: " ; 
	cin >> valor; //Separamos cout y cin en dos lineas.
	cout << "El log en base" << base << "de" << valor << "es"; //Unimos en una linea, ponemos valor en minuscula para que lo reconozca como la variable declarada y ponemos "es entrecomillado para que no lo tome como variable".
	cout << log(valor)/log(base) << endl; //Unimos los << y ponemos endl al final puesto que end no es valido.
}
