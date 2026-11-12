/*4) Haga una funcion void que reciba un string apuntado y que lo altere colocando en mayusculas los caracteres que estan en 
posiciones pares y en minusculas los caracteres que estan en posiciones impares.*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void alternarMayusMinus(string *texto) {
    for (size_t i = 0; i < texto->length(); i++) {
        if (i % 2 == 0) {
            (*texto)[i] = toupper((*texto)[i]);  
        } else {
            (*texto)[i] = tolower((*texto)[i]); 
        }
    }
}

int main() {
    string frase;

    cout << "Escribe una frase: ";
    getline(cin, frase);

    alternarMayusMinus(&frase);

    cout << "Resultado: " << frase << endl;
    return 0;
}
