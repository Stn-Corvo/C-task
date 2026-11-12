/*/*5) Haga una funcion que reciba 5 numeros y devuelva el mayor de ellos, 
esta debe funcionar con 5 numeros int, 
con 5 numeros float o con 5 numeros double*/

#include <iostream>

using namespace std;

double obtenerMayor(double n1, double n2, double n3, double n4, double n5) {
    double mayor = n1;

    if (n2 > mayor) {
        mayor = n2;
    }
    if (n3 > mayor) {
        mayor = n3;
    }
    if (n4 > mayor) {
        mayor = n4;
    }
    if (n5 > mayor) {
        mayor = n5;
    }

    return mayor;
}

