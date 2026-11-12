/*2) Haga una funcion void que reciba un arreglo apuntado de numeros enteros, esta funcion va a alterar cada elemento del arreglo 
colocando un numero al azar entre 1 y 100, 
dicha funcion solo debe recibir un parametro.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int TAM = 10;

void llenarAleatorio(int (*arr)[TAM]) {
    for (int i = 0; i < TAM; i++) {
        (*arr)[i] = rand() % 100 + 1;   
    }
}

int main() {
    int numeros[TAM];

    srand(time(NULL));
    llenarAleatorio(&numeros);  

    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
   
    return 0;
}
