/*
Escriba una instrucción (o comentario) para realizar lo siguiente:
a) Indique que el programa calculará el producto de tres enteros.
b) Declare las variables x, y, z y resultado de tipo int.
c) Indique al usuario que introduzca tres enteros.
d) Lea tres enteros introducidos desde el teclado y almacénelos en las variables x, y y z.
e) Calcule el producto de los tres entero contenidos en las variables x, y, z, y asigne el resultado a la variable
resultado.
f) Imprima “El producto es”, seguido del valor de la variable entera resultado
*/

#include<stdio.h>

int main() {
    printf( "Vamos a calcular el producto de 3 enteros\n");

    int x, y, z, resultado;

    printf( "Introduzca los 3 numeros enteros (separasdos por espacios): " );
    scanf( "%d %d %d", &x, &y, &z );

    resultado = x * y * z;

    printf( "El producto de %d, %d y %d es %d", x, y, z, resultado );

    return 0;
} //Fin de la funcion main