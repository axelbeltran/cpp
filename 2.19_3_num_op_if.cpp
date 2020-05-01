// Pedir 3 números por teclados e imprimir suma, promedio, producto, mayor y menor
// ISC Axel Beltrán
// 25/04/2020

#include <iostream>

using namespace std;

int main(){
	
	int x, y, z; // Variables para guardar los datos de entrada
	cout << "Introduce 3 enteros distintos: "; // Imprime mensaje sin salto de linea 
	cin >> x >> y >> z; 

	cout << "La suma es " << x + y + z << endl;
	cout << "El promedio es " << (x + y + z)/3 << endl;
	cout << "El producto es " << x * y * z << endl;

	if(x < y && x < z)
		cout << "El menor es " << x << endl;
	else if(y < x && y < z)
		cout << "El menor es " << y << endl;
	else if(z < y && z < x)
		cout << "El menor es " << z << endl;
	if(x > y && x > z)
		cout << "El mayor es " << x << endl;
	else if(y > x && y > z)
		cout << "El mayor es " << y << endl;
	else if(z > y && z > x)
		cout << "El mayor es " << z << endl;
	
	
	return 0;

}