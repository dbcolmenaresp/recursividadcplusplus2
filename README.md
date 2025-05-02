# Recursividad 2

Continuación del análisis del concepto de recursividad

Continuamos con el análisis del tema de la recursividad y su importancia dentro del mundo de la programación.

En esta oportunidad vamos a tratar los temas de la implementación recursiva del factor de Fibonaci y el cálculo recursivo del máximo común divisor.

Como habiamos establecido con anterioridad, una función recursiva siempre va a estar compuesta por dos términos esenciales.

El caso recursivo que es el que se va a llamar a si mismo con un valor diferente que tiende a un valor de finalización de los llamados recursivos.

El caso base o condición de parada que es el que se determina a través de un cálculo básico sin necesidad de llamar recursivamente a la funcion. Esta es la condición que garantiza que la función no se siga llamando recursivamente de manera indefinida.

##Serie de Fibonacci

La secuencia de Fibonacci, donde cada término es la suma de los dos anteriores, puede implementarse recursivamente. La fórmula matemática que representa este cálculo es la siguiente:

El número de Fibonacci de n es igual al número de Fibonacci de n – 1 más el número de Fibonacci de n – 2
