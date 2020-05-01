// Comparación de enteros
// ISC Axel Beltrán
// 18/04/2020 - 20:00 hrs (UTC-06:00)

#include <iostream> // Libreria de entradas (in) y salidas (out)

using namespace std;

int main(){
	
	int num1, num2; // Variables para guardar dos números leidos por teclado
	
	// Se imprime mensaje y se da un salto de linea
	cout << "Escribe dos números para comparar:" << endl;
	// Se solicita escribir dos núnumeros;
	cin >> num1 >> num2; // Se uardan los dos valores en las variables
	
	// Se hacen las comparaciones de los números
	if(num1 == num2)
		cout << "Número " << num1 << " es igual a número " << num2 << endl;
	if(num1 != num2)
		cout << "Número " << num1 << " es diferente a número " << num2 << endl;
	if(num1 < num2)
		cout << "Número " << num1 << " es menor a número " << num2 << endl;
	if(num1 > num2)
		cout << "Número " << num1 << " es mayor a número " << num2 << endl;		
	if(num1 <= num2)
		cout << "Número " << num1 << " es menor o igual a número " << num2 << endl;
	if(num1 >= num2)
		cout << "Número " << num1 << " es mayor o igaul a número " << num2 << endl;			
		
	return 0;
		
}
