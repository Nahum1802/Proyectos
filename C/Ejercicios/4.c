/*
Escriba un programa que pida al usuario escribir dos números, que obtenga los dos números por parte del usuario,
y que imprime la suma, el producto, la diferencia, el cociente y el residuo de los dos números.
*/

#include <stdio.h>

int main() {
    int num1, num2, resultado;

    printf( "Ingrese dos numero (separados por espacio):" );
    scanf( "%d %d", &num1, &num2);

    resultado = num1 + num2;
    printf( "La suma de %d y %d es: %d\n", num1, num2, resultado );

    resultado = num1 * num2;
    printf( "El producto de %d y %d es: %d\n", num1, num2, resultado );

    resultado = num1 - num2;
    printf( "La diferencia de %d y %d es: %d\n", num1, num2, resultado );

    resultado = num1 / num2;
    printf( "El cociente de %d y %d es: %d\n", num1, num2, resultado );

    resultado = num1 % num2;
    printf( "El residuo de %d y %d es: %d\n", num1, num2, resultado );

    return 0;
}