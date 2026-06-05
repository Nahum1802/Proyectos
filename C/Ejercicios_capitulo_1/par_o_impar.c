/*
Escriba un programa que lea un entero y que determine e imprima si es par o impar. [Pista: Utilice el operador
módulo. Un número par es un múltiplo de dos. Cualquier múltiplo de 2 arroja un residuo de cero, cuando se divide
entre 2.
*/
#include <stdio.h>

int main () {
    int num1, resultado;

    printf( "Ingrese un numero: ");
    scanf( "%d", &num1 );

    resultado = num1 % 2;

    if ( resultado == 0 ) {
        printf( "El numero %d es par", num1 );
    }else {
        printf( "El numero %d es impar", num1 );
    }
}