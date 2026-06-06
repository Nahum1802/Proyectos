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

#include<iostream>

int main() {
    std::cout<< "Este programa calculara el producto de 3 numeros enteros\n";

    int x, y, z, resultado;

    std::cout<< "Ingrese 3 numeros enteros (separados por espacios): ";
    std::cin>> x>> y>> z;
    
    resultado = x * y * z;

    std::cout<< "EL resultado de " << x << ", " << y << " y " << z << " es: " << resultado;

    return 0;
} //FIn de la funcion main