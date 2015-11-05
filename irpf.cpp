//Programa que calcula la retención del IRP en el salario de un empleado.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Declaracion de variables
const double IRPF=0.21; //Declaramos la constante del IRPF al 21%.
double salariobruto=0.0; //Declaramos la variable del salario bruto inicializada a 0 para prevenir errores.
double retencion=0.0; //Declaramos la variable de la retencion del IRPF inicializada a 0 para prevenir errores.
double salarioneto=0.0; //Declaramos la variable del salario neto inicializada a 0 para prevenir errores.

//Inicio del programa.
int main () {
	cout << "Introduzca salario bruto: " << endl; //Sacamos por pantalla un texto pidiendo el salario bruto.
	cin >> salariobruto; //Almacenamos el valor obtenido en la variable del salario bruto.
	retencion=salariobruto*IRPF; //Calculamos la retencion aplicada al salario bruto introducido.
	salarioneto=salariobruto-retencion; //Calculamos el salario neto.
	cout << "La retencion aplicada es de: " << retencion << "€" << endl; //Sacamos por pantalla la retencion calculada.
	cout << "El salario neto es de: " << salarioneto << "€" << endl; //Sacamos por pantalla el salario neto calculado.
} //Fin del programa
