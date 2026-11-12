/*3) Haga una funcion void que reciba un arreglo apuntado de numeros double, 
dicha funcion va a alterar cada elemento del arreglo aplicandole la raiz cuadrada*/


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

const int TAM = 10;

void raizCuadrada(double (*arr)[TAM]) {
    for (int i = 0; i < TAM; i++) {
        (*arr)[i] = sqrt((*arr)[i]);
    }
}

int main() {
    double numeros[TAM];

    srand(time(0));

    for (int i = 0; i < TAM; i++) {
        numeros[i] = rand() % 100 + 1;
    }

    cout << "Antes:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    raizCuadrada(&numeros); 

    cout << "Despues:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
