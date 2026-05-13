/*
Escriba un programa que introduzca tres diferentes enteros desde el teclado, después que imprima la suma, el
promedio, el producto, el número más pequeño y el más grande de éstos. Solamente utilice la forma de selección
simple de la instrucción if, que aprendió en este capítulo. El diálogo en la pantalla debe aparecer de la siguiente
forma:
Escriba tres enteros diferentes: 13 27 14
La suma es 54
El promedio es 18
El producto es 4914
El número más pequeño es 13
El número más grande es 27
*/

#include <iostream>

int main () {
    int num1, num2, num3, resultado;

    std::cout<< "Ingrese 3 numeros (separados por espacios):";
    std::cin>> num1 >> num2 >> num3;

    resultado = num1 + num2 + num3;
    std::cout<< "La suma de " << num1 << ", " << num2 << " y " << num3 << " es igual a:" << resultado << std::endl;

    resultado = ( num1 + num2 + num3) / 3;
    std::cout<< "El promedio de " << num1 << ", " << num2 << " y " << num3 << " es igual a:" << resultado << std::endl;

    resultado = num1 * num2 * num3;
    std::cout<< "El producto de " << num1 << ", " << num2 << " y " << num3 << " es igual a:" <<resultado << std::endl;

    if ( num1 > num2 && num1 > num3 ) {
        std::cout<< "El numero mas grande es:" << num1 << std::endl;
    }
    if ( num2 > num1 && num2 > num3) {
        std::cout<< "El numero mas grande es:" << num2 << std::endl;
    }
    if ( num3 > num1 && num3 > num2) {
        std::cout<< "El numero mas grande es:" << num3 << std::endl;
    }
    if ( num1 < num2 && num1 < num3 ) {
        std::cout<< "El numero mas pequeño es:" << num1 << std::endl;
    }
    if ( num2 < num1 && num2 < num3) {
        std::cout<< "El numero mas pequeño es:" << num2 << std::endl;
    }
    if ( num3 < num1 && num3 < num2 ) {
        std::cout<< "El numero mas pequeño es:" << num3 << std::endl;
    }
}