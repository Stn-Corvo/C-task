/*3) Haga una funcion que reciba un char y dos numeros double:
   -> Si el char recibido es + entonces la funcion retornará la suma de los dos numeros
   -> Si el char recibido es - entonces la funcion retornará la resta de los dos numeros
   -> Si el char recibido es / entonces la funcion devolverá la division de los dos numeros
   -> Si el char recibido es x entonces la funcion retornará la multiplicacion de los dos numeros
*/

#include<cmath>
using namespace std;

int funcionChar(char a, int x, int y){
	
	if(a == '+'){
		return x + y;
	}
	if(a == '-'){ 
		return x - y;
	}
	if(a == '*'){
		return x * y;
	}
	if(a == '/'){
		return x / y;
	}
}
