/*6) Escriba una función que devuelva true si un número entero positivo es primo de lo contrario 
devuelva false.
   NOTA: la función no debe permitir cero ó numeros negativos (guard clause)*/
   
#include<iostream>
using namespace std;

bool numeroPrimo(int n) {

    if (n <= 0) {
        return false;
    }
    

    if (n == 1) {
        return false;
    }
    

    if (n == 2) {
        return true;
    }
    

    if (n % 2 == 0) {
        return false;
    }
    
   
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false; 
        }
    }
    
    return true;
}
