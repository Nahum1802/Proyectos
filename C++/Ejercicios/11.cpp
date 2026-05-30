/*
Escriba un programa que lea cinco enteros y que después imprima el número más grande y el más pequeño del grupo. Utilice sólo técnicas de programación que haya aprendido en este capítulo.
*/

#include <iostream>

int main() {
    int num1, num2, num3, num4, num5;

    std::cout<< "Ingrese 5 numeros enteros (separados por un espacio):";
    std::cin>> num1 >> num2 >> num3 >> num4 >> num5;

    if ( num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 ) {
        std::cout<< "El numero mas grande es:" << num1 << std::endl;
    }
    if ( num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) {
        std::cout<< "El numero mas grande es:" << num2 << std::endl;
    }
    if ( num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5) {
        std::cout<< "El numero mas grande es:" << num3 << std::endl;
    }
    if ( num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5) {
        std::cout<< "El numero mas grande es:" << num4 << std::endl;
    }
    if ( num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4) {
        std::cout<< "El numero mas grande es:" << num5 << std::endl;
    }
    if ( num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
        std::cout<< "El numero mas pequeño es:" << num1 << std::endl;
    }
    if ( num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5) {
        std::cout<< "El numero mas pequeño es:" << num2 << std::endl;
    }
    if ( num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5) {
        std::cout<< "El numero mas pequeño es:" << num3 << std::endl;
    }
    if ( num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5) {
        std::cout<< "El numero mas pequeño es:" << num4 << std::endl;
    }
    if ( num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4) {
        std::cout<< "El numero mas pequeño es:" << num5 << std::endl;
    }
}