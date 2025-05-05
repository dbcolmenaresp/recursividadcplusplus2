// Programa que implementa la generación del término de Fibonacci de manera recursiva

#include <iostream>
using namespace std;

// Función que genera los términos de la sucesión de Fibonacci de manera recursiva
int fibonacci(int n){
	
	if(n == 0 || n == 1){
		return n; // Condición base
	}
	else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	
}

int main(){
	
	int num; // Valiable que almacena el valor de la sucesión de Fibonacci
	
	while(true){
		// Se solicita el numero para mostrar el término de Fibonacci
		cout << "Ingrese el numero para generar el termino de Fibonacci, cero (0) para salir: ";
		cin >> num;
		
		if(num > 0){
			// Se llama a la función que muestra el término de Fibonacci
			cout  << "El termino " << num << " de la sucesion de Fibonacci es: " << fibonacci(num) << endl;
			cout << endl;
		}
		else
			if(num < 0){
				// Se indica al usuario que debe ingresar un número entero positivo
				cout << "Debe ingresar un valor positivo." << endl;
			}
			else{
				// Deja de ejecutarse si se ingresa el valor de cero (0)
				cout << "El programa ha finalizado" << endl;
				return 0;
			}
	}
	
	return 0;
}
