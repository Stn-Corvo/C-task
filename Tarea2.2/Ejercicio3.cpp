/*3) Haga una funcion que reciba un char y dos numeros double:
   -> Si el char recibido es + entonces la funcion retornará la suma de los dos numeros
   -> Si el char recibido es - entonces la funcion retornará la resta de los dos numeros
   -> Si el char recibido es / entonces la funcion devolverá la division de los dos numeros
   -> Si el char recibido es x entonces la funcion retornará la multiplicacion de los dos numeros
*/

#include<iostream>
#include "Ejercicio3.h"
using namespace std;

int main(){
	
	cout << funcionChar('+', 5,6) << endl;
	cout << funcionChar('*', 5,5) << endl;
	
	
	system("color E");
	return 777;
}
