//Problema 1.9 de la pagina 44.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos la libreria cmath para poder hacer la raiz cuadrada.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaramos las variables.
	double x0,x1,x2,y1,y2,pi0,pi1,pi2;
	x0=sqrt(2.0); //Asignamos el valor a x0.
	y1=pow(2.0,0.25); //Asignamos el valor a y1.
	pi0=2.0+sqrt(2.0); //Asignamos el valor a pi0.
	//Calculamos π₁, como y1 ya está calculado solo calculamos x1.
	x1=(1.0/2.0)*(sqrt(x0)+(1.0/sqrt(x0))); //Calculamos x1 partiendo de x0.
	pi1=pi0*((x1+1.0)/(y1+1.0)); //Calculamos pi1 partiendo de x1 calculado anteriormente y y1.
	//Calculamos π₂.
	x2=(1.0/2.0)*(sqrt(x1)+(1.0/sqrt(x1))); //Calculamos x2 partiendo de x1 calculado anteriormente.
	y2=((y1*sqrt(x1))+(1.0/sqrt(x1)))/(y1+1.0); //Calculamos y2 partiendo de y1 y x1 calculados anteriormente.
	pi2=pi1*((x2+1.0)/(y2+1.0)); //Calculamos pi1 partiendo de y2 y x2 calculados anteriormente.
	//Sacamos por pantalla los resultados.
	cout << "El valor de π₀ es: " << pi0 << endl; //Resultado de pi0.
	cout << "El valor de π₁ es: " << pi1 << endl; //Resultado de pi1.
	cout << "El valor de π₂ es: " << pi2 << endl; //Resultado de pi2.
} //Fin del programa
