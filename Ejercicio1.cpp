/*1) Haga una funcion void llamada intercambiar que reciba dos variables enteras como apuntadores, 
dicha funcion va a intercambiar los valores entre ambas variables. 
(a esto se le conoce como swap)*/

#include<iostream>
using namespace std;

void intercambiar(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
		
}

int main(){
	int x = 15;
	int y = 26;
	
	cout << "Antes del intercambio::" << endl;
	cout << "X:  " << x <<endl;
	cout << "Y:  " << y <<endl;
	
	intercambiar(&x, &y);
	
		
	cout << "Despues del intercambio::" << endl;
	cout << "X:  " << x <<endl;
	cout << "Y:  " << y <<endl;
}
