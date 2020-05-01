// Pedir dos números por teclado y realizar las operaciones basicas
// ISC Axel Beltrán
// 25/04/2020

#include <iostream>

using namespace std;

int main(){

	int x, y; // Las variables a guardar los datos introducidos por el teclado
	
	cout  << "Introduce dos n'umeros:" << endl; // Se imprime el mensaje
	cin >> x >> y; // Se guardan los valores en las variables

	cout << "La suma de los valores es = " << x + y << endl;
	cout << "La resta de los valores es = " << x - y << endl;
	cout << "La multiplicación de los valores es = " << x * y << endl;
	cout << "La división de los valores es = " << x / y << endl;
  
 	return 0;

} 