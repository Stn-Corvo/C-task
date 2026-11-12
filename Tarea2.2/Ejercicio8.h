/*8) Haga una funcion que reciba un arreglo de numeros int 
y que solo imprima los numeros pares que hay en dicho arreglo.*/

#include <iostream>

using namespace std;

void imprimirPares(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
       
        if (arreglo[i] % 2 == 0) {
            cout << arreglo[i] << " ";
        }
    }
    cout << endl;
}
