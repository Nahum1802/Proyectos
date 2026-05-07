/* Uso de instrucciones if, operadores
    de relacion y operadores de igualdad */

#include <stdio.h>

int main() {
    int num1; /* Primer dato que lee el usuario */
    int num2; /* Segundo dato que lee el usuario */

    printf( "Introduzca dos numeros enteros y le dire\n");
    printf( "las relaciones que satisface: ");
    scanf("%d%d", &num1, &num2); /* Lectura de numeros enteros */

    if(num1 == num2) {
        printf("%d es igual que %d\n", num1, num2);
    } /* Fin de la instrucción if */

    if(num1 != num2) {
        printf("%d no es igual que %d\n", num1, num2);
    } /* Fin de la instrucción if */

    if(num1 < num2) {
        printf("%d es menor que %d\n", num1, num2);
    } /* Fin de la instrucción if */

    if(num1 > num2) {
        printf("%d es mayor que %d\n", num1, num2);
    } /* Fin de la instrucción if */

    if(num1 >= num2) {
        printf("%d es mayor o igual que %d\n", num1, num2);
    } /* Fin de la instrucción if */

    if(num1 <= num2) {
        printf("%d es menor o igual que %d\n", num1, num2);
    } /* Fin de la instrucción if */

    return 0;
} /* Fin de la función main */

