/*9) Haga una funcion que reciba un arreglo de numeros double, dicha funcion 
retornará la suma de los numeros en dicho arreglo.*/

#include <iostream>
using namespace std;

double sumarArreglo(double arreglo[], int tamano) {
    double suma = 0.0;
    
    for (int i = 0; i < tamano; i++) {
        suma += arreglo[i];
    }
    
    return suma;
}
