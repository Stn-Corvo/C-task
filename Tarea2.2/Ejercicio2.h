/*2) Escriba una funcion que calcule el mínimo común múltiplo de dos números enteros*/
#include <iostream>
#include <cmath>

using namespace std;

int calcularMCD(int a, int b) {
    while (b != 0) {
        int residuo = a % b;
        a = b;
        b = residuo;
    }
    return abs(a);
}

int calcularMCM(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    
    int resultado = abs(a * b) / calcularMCD(a, b);
    return resultado;
}

