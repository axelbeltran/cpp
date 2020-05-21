// Class example: class, function and object     
// ISC Axel Ingacio Beltrán Alvarez
// Third line:	DATE - TIME

#include <iostream>

// declaration using to import prefix std:: ==> std::cout << "hello World!" << std::endl;
using namespace std;

class LibroCalificaciones{
	
	public:
		void mensaje(){
			cout << "Bienvenido al curso" << endl;
		}

};

int main(){
	
	LibroCalificaciones libro;
	libro.mensaje();
	return 0;
	
}
