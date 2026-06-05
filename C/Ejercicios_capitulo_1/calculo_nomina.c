/*
Escriba una sola instrucción o línea de C que realice lo siguiente:
a) Imprima el mensaje “Escriba dos números”.
b) Asigne el producto de las variables b y c a la variable a.
c) Indique que un programa realiza un cálculo de nómina (es decir, utilice texto que ayude a documentar un programa).
d) Escriba tres valores enteros desde el teclado y coloque estos valores en las variables enteras a, b y c
*/
#include <stdio.h>

int main() {
    int a,b,c;
    printf( "Escriba dos numeros (separados por espacio): ");
    scanf( "%d %d", &b, &c );

    a = b * c;

    printf( "Este programa realiza un calculo de nomina\n" );
    printf( "A = %d * %d esto es igual: %d", b, c, a);
    
    return 0;
}