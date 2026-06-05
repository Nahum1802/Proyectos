/*
Escriba un programa que lea el radio de un círculo y que imprima el diámetro, la circunferencia y el área de ese
círculo. Utilice el valor constante de 3.14159 para pi. Realice cada uno de estos cálculos dentro de instrucción(es)
printf, y utilice el especificador de conversión %f. [Nota: En este capítulo sólo explicamos constantes y variables enteras. En el capítulo 3 explicaremos los números de punto flotante, es decir, valores que pueden tener puntos decimales.]
*/

#include <stdio.h>

int main() {
    const float PI = 3.1416;
    float radio;

    printf( "Ingresa el radio del tu ciruculo: " );
    scanf( "%f", &radio );

    printf( "El diametro de tu circulo es: %f\n", 2 * radio );
    printf( "La circufenrencia de tu circulo es: %f\n", 2 * PI * radio );
    printf( "El area de tu circulo es: %f\n", PI * radio * radio );

    return 0;
} 