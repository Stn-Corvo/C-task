/*7) Haga una funcion que reciba un string como parametro, esta va a devolver true 
si dicho string esta escrito de forma palíndroma, de lo contrario deberá devolver false. Ejemplos:
	esPalindromo("ABCDCBA")	devuelve true
	esPalindromo("GERARDO")	devuelve false
	esPalindromo("ALILA")	devuelve true
	esPalindromo("UNAH")	devuelve false

	Un palíndromo es un conjunto de caracteres que se lee igual de izquierda a derecha 
	que de derecha a izquierda.*/
	
#include<string>
using namespace std; 	
	
bool esPalindromo(string str){
	
	int inicio = 0;
    int fin = str.length() - 1;
   
    while (inicio < fin) {
        
        if (str[inicio] != str[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    

    return true;
}
