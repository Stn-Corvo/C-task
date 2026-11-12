/*8) Haga una funcion que reciba un arreglo de numeros int 
y que solo imprima los numeros pares que hay en dicho arreglo.*/

#include<iostream>
#include "Ejercicio8.h"
using namespace std;

int main(){
	
    int numeros[] = {3, 8, 5, 12, 7, 14, 20};
    
    int tamano = sizeof(numeros) / sizeof(numeros[0]);

    imprimirPares(numeros, tamano);
	
	system("Color E");
	return 777;
}
