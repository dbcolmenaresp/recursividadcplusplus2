# Recursividad 2

Continuación del análisis del concepto de recursividad

Continuamos con el análisis del tema de la recursividad y su importancia dentro del mundo de la programación.

En esta oportunidad vamos a tratar los temas de la implementación recursiva del factor de Fibonaci y el cálculo recursivo del máximo común divisor.

Como habiamos establecido con anterioridad, una función recursiva siempre va a estar compuesta por dos términos esenciales.

El caso recursivo que es el que se va a llamar a si mismo con un valor diferente que tiende a un valor de finalización de los llamados recursivos.

El caso base o condición de parada que es el que se determina a través de un cálculo básico sin necesidad de llamar recursivamente a la funcion. Esta es la condición que garantiza que la función no se siga llamando recursivamente de manera indefinida.

## Serie de Fibonacci

La serie de Fibonacci es una sucesión de números que describe algunas caracteristicas del mundo físico y se usa en la generación de datos, modelado y simulación, de allí surge la importancia de su representación algiritmica.

La sucesión de números de Fibonacci es la siguiente:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

Analizando la serie de Fibonacci se determina que comienza con 0 y 1, y tiene la propiedad particular de que cada elemento es la suma de los dos elementos anteriores, por ejemplo:

0 + 1 = 1  
1 + 1 = 2  
1 + 2 = 3  
2 + 3 = 5  
3 + 5 = 8  
5 + 8 = 13  
8 + 13 = 21  
13 + 21 = 34  
21 + 34 = 55  
...

Con base en este análisis de la sucesión de los números de Fibonacci se puede establecer lo siguiente:

Para n = 0: F(0) = 0  
Para n = 1: F(1) = 1  
Para n = 2: F(2) = F(1) + F(0)  
Para n = 3: F(3) = F(2) + F(1)  
Para n = 4: F(4) = F(3) + F(2)  
Para n = 5: F(5) = F(4) + F(3)  
Para n = 6: F(6) = F(5) + F(4)  
...

De manera general se tiene que para un número dado n, la sucesión de Fibonacci de los n primeros números positivos, es decir el elemento recursivo, se puede definir de la siguiente manera:

El número de Fibonacci de n es igual al número de Fibonacci de n – 1 más el número de Fibonacci de n – 2

Fibonacci(n) = Fibonaci(n – 1) + Fibonacci(n – 2)

El valor del término actual de la sucesión de Fibonacci es la suma de los dos términos anteriores.

De esta manera se identifica la condición recursiva para determinar el término actual de la sucesión de Fibonacci respecto de los dos términos anteriores de si misma.

Luego se procede a identificar el caso base de la función, en esta oportunidad los casos en los cuales n = 0 y n = 1, el valor del término actual de la sucesión de Fibonacci es F(n) = 1, el cual se determina sin necesidad de hacer un nuevo llamado recursivo a la función, solo se retorna el valor de 1.

Los casos base identificados se pueden expresar de la siguiente manera:

El número de Fibonacci de cero es uno
F(0) = 1

El número de Fibonacci de uno es uno
F(1) = 1

En vista de este análisis se puede establecer lo siguiente:

F(n) = n si n = 0 o n = 1  
F(n) = F(n – 1) + F(n – 2) si n => 2  

Observamos que para calcular un término de la sucesión de Fibonacci, se procede a aplicar la función de manera recursiva dos veces.

El algorítmo que muestra el término de Fibonacci de manera recursiva es el siguiente:

```
n = 6 // Valor al que se le quiere calcular el término de Fibonacci

funcion Fibonacci(entero n)
    Si n = 0 O n = 1
        retornar n // Condición de parada, caso base
    Si no
        retornar Fibonacci(n – 1) + Fibonacci(n – 2) // Condición recursiva
```

Implementación del cálculo del término de Fibonacci en lenguaje C++

Para la implementación del algoritmo del cálculo del término de la sucesión de Fibonacci se procede de la siguiente manera:

Primeramente se define la función que calcula el término de la suceción de Fibonacci

~~~c++
// Función que genera los términos de la sucesión de Fibonacci de manera recursiva
int fibonacci(int n){
~~~

Se debe agregar a la función la condición de parada.

~~~c++
if(n == 0 || n == 1){
    return n; // Condición base
}
~~~

Por último se agrega la condición recursiva para el cálculo en sumas sucesivas

~~~c++
return fibonacci(n - 1) + fibonacci(n - 2);
~~~

El programa completo para calcular el término de la sucesión de Fibonacci se muestra a continuación:

~~~c++
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
~~~
