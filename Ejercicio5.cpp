/*5) Haga una funcion void que reciba un string apuntado y que lo altere reemplazandole:
	a) las letras A (mayusculas o minusculas) por 4
	b) las letras E (mayusculas o minusculas) por 3
	c) las letras I (mayusculas o minusculas) por 1
*/

#include <iostream>
#include <string>
using namespace std;

void leetSpeak(string *texto) {
    for (size_t i = 0; i < texto->length(); i++) {
        char c = (*texto)[i];

        if (c == 'A' || c == 'a') {
            (*texto)[i] = '4';
        } else if (c == 'E' || c == 'e') {
            (*texto)[i] = '3';
        } else if (c == 'I' || c == 'i') {
            (*texto)[i] = '1';
        }
    }
}

int main() {
    string frase;

    cout << "Escribe una frase: ";
    getline(cin, frase);

    leetSpeak(&frase);

    cout << "Resultado: " << frase << endl;
    return 0;
}
