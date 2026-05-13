/*
Escriba un programa que introduzca tres diferentes enteros desde el teclado, después que imprima la suma, el
promedio, el producto, el número más pequeño y el más grande de éstos. Solamente utilice la forma de selección
simple de la instrucción if, que aprendió en este capítulo. El diálogo en la pantalla debe aparecer de la siguiente
forma:
Escriba tres enteros diferentes: 13 27 14
La suma es 54
El promedio es 18
El producto es 4914
El número más pequeño es 13
El número más grande es 27
*/

#include <stdio.h>

int main() {
    int num1, num2, num3, resultado;

    printf( "Ingresa 3 nuemros (separados por espacios):");
    scanf( "%d %d %d", &num1, &num2, &num3 );

    resultado = num1 + num2 + num3;
    printf( "La suma de %d, %d y %d es igual a: %d\n", num1, num2, num3, resultado);

    resultado = ( num1 + num2 + num3 ) / 3;
    printf( "El promedio de %d, %d y %d es de: %d\n", num1, num2, num3, resultado);

    resultado = num1 * num2 * num3;
    printf( "El producto de %d, %d y %d es igual a: %d\n", num1, num2, num3, resultado );

    if ( num1 > num2 && num1 > num3 ) {
        printf( "El numero mas grande es: %d\n", num1 );
    }
    if ( num2 > num1 && num2 > num3 ) {
        printf( "El numero mas grande es: %d\n", num2 );
    }
    if ( num3 > num1 && num3 > num2 ) {
        printf( "El numero mas grande es %d\n", num3 );
    }
    if ( num1 < num2 && num1 < num2 ) {
        printf( "El numero mas pequeño es %d\n", num1 );
    }
    if ( num2 < num1 && num2 < num3 ) {
        printf( "El numero mas pequeño es %d\n", num2 );
    }
    if ( num3 < num1 && num3 < num2 ) {
        printf( "El numero mas pequeño es %d\n", num3 );
    }

    return 0;
}