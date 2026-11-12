/*10) Haga una funcion que reciba un string como parametro, dicha funcion imprimirá el string en escalera, Ejemplos:
	escalera("UNAH") imprime:
	U
	UN
	UNA
	UNAH

	escalera("Sistemas") imprime:
	S
	Si
	Sis
	Sist
	Siste
	Sistem
	Sistema
	Sistemas
*/

#include <iostream>
#include <string>

using namespace std;

void escalera(string texto) {
    for (size_t i = 1; i <= texto.length(); i++) {
        
        cout << texto.substr(0, i) << endl;
    }
}
