// Programa que implementa la generaci�n del t�rmino de Fibonacci de manera recursiva

#include <iostream>
using namespace std;

// Funci�n que genera los t�rminos de la sucesi�n de Fibonacci de manera recursiva
int fibonacci(int n){
	
	if(n == 0 || n == 1){
		return n; // Condici�n base
	}
	else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	
}

int main(){
	
	int num; // Valiable que almacena el valor de la sucesi�n de Fibonacci
	
	while(true){
		// Se solicita el numero para mostrar el t�rmino de Fibonacci
		cout << "Ingrese el numero para generar el termino de Fibonacci, cero (0) para salir: ";
		cin >> num;
		
		if(num > 0){
			// Se llama a la funci�n que muestra el t�rmino de Fibonacci
			cout  << "El termino " << num << " de la sucesion de Fibonacci es: " << fibonacci(num) << endl;
			cout << endl;
		}
		else
			if(num < 0){
				// Se indica al usuario que debe ingresar un n�mero entero positivo
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
