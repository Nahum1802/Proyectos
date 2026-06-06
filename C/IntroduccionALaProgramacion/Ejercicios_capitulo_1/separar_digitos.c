/*
Escriba un programa que introduzca un número de cinco dígitos, que separe el número en sus dígitos individuales
y que despliegue los dígitos separados entre sí mediante tres espacios cada uno. [Pista: Utilice combinaciones de
la división entera y el operador módulo.] 
*/
#include <stdio.h>

int main () {
    int numero, digito1, digito2, digito3, digito4, digito5;

    printf("Ingrese un numero de cinco digitos: ");
    scanf("%d", &numero);

    digito1 = numero / 10000;
    digito2 = (numero / 1000) % 10;
    digito3 = (numero / 100) % 10;
    digito4 = (numero / 10) % 10;
    digito5 = numero % 10;

    printf("%d   %d   %d   %d   %d\n", digito1, digito2, digito3, digito4, digito5);

    return 0;
}