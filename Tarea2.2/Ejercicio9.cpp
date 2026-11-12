/*9) Haga una funcion que reciba un arreglo de numeros double, dicha funcion 
retornará la suma de los numeros en dicho arreglo.*/

#include<iostream>
#include "Ejercicio9.h"
using namespace std;

int main(){
	double numeros[] = {5.5, 2.0, 3.1, 1.4};
    
    int tamanoDouble = sizeof(numeros) / sizeof(numeros[0]);
    
    double resultadoSuma = sumarArreglo(numeros, tamanoDouble);
    cout << "La suma total es: " << resultadoSuma << endl << endl;
    
    system("Color E");
    return 777;
}
