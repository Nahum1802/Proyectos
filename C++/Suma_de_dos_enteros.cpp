/* Programa Suma */
#include <iostream>

int main() {
    int entero1; /* Primer numero entero a introducir */
    int entero2; /* Segundo numero entero a introducir */
    int suma; /* Variable donde se almacenara la suma */

    printf("Introduzca el primer numero entero:\n"); /* Se le da una instruccion */
    scanf("%d", &entero1); /* Lee un numero entero */

    printf("Introduzca el segundo numero entero:\n"); /* Se le da la segunda instruccion */
    scanf("%d", &entero2); /* Lee el segundo numero entero */

    suma = entero1 + entero2; /* Se hace la operacion */

    printf("La suma de %d mas %d es igual a:%d", entero1, entero2, suma); /* Se muestra los resultados */

    return 0;
} /* Fin de la funcion */