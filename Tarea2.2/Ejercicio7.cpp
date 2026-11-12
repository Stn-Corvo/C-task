/*7) Haga una funcion que reciba un string como parametro, esta va a devolver true 
si dicho string esta escrito de forma palíndroma, de lo contrario deberá devolver false. Ejemplos:
	esPalindromo("ABCDCBA")	devuelve true
	esPalindromo("GERARDO")	devuelve false
	esPalindromo("ALILA")	devuelve true
	esPalindromo("UNAH")	devuelve false

	Un palíndromo es un conjunto de caracteres que se lee igual de izquierda a derecha 
	que de derecha a izquierda.*/
	
#include<iostream>
#include "Ejercicio7.h"
using namespace std;

int main(){
	
	cout << esPalindromo("ABCBA") << endl;
	cout << esPalindromo("ABCB") << endl;
	
	
	system("Color E");
	return 777;
}
