/*
Escriba un programa que lea cinco enteros y que después imprima el número más grande y el más pequeño del grupo. Utilice sólo técnicas de programación que haya aprendido en este capítulo.
*/

#include <stdio.h>

int main () {
    int num1, num2, num3, num4, num5;

    printf( "Introduzca 5 numeros enteros (separados por un espacio):" );
    scanf( "%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5 );

    if ( num1 > num2 && num1 > num3 && num1 > num4 && num1 && num5 ) {
        printf( "El numero mas grande es: %d\n", num1);
    }
    if ( num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 ) {
        printf( "El numero mas grande es: %d\n", num2);
    }
    if ( num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 ) {
        printf( "El numero mas grande es: %d\n", num3);
    }
    if ( num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 ) {
        printf( "El numero mas grande es: %d\n", num4);
    }
    if ( num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4 ) {
        printf( "El numero mas grande es: %d\n", num5);
    }
    if ( num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5 ) {
        printf( "El numero mas pequeño es: %d\n", num1);
    }
    if ( num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5 ) {
        printf( "El numero mas pequeño es: %d\n", num2);
    }
    if ( num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5 ) {
        printf( "El numero mas pequeño es: %d\n", num3);
    }
    if ( num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5 ) {
        printf( "El numero mas pequeño es: %d\n", num4);
    }
    if ( num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4 ) {
        printf( "El numero mas pequeño es: %d\n", num5);
    }
}