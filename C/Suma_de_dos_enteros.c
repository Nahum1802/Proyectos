//Programa de suma
#include <stdio.h>

int main() {
    int entero1; /* Primer numero entero a introducir */
    int entero2; /* Segundo numero entero a introducir */
    int suma; /*Variable que se va almacenar el resultado */

    printf("Introduzca el primer numero entero:\n"); /* Indicador */
    scanf("%d", &entero1); /* Lee un numero entero */

    printf("Introduzca el segundo numero entero:\n"); /* Indicador */
    scanf("%d", &entero2); /* Lee el segundo numero entero */

    suma = entero1 + entero2; /* Hace la operacion */

    printf("La suma de %d y de %d es de: %d", entero1, entero2, suma); /* Imprime suma */
    
    return 0;
} /* Fin de la funcion */