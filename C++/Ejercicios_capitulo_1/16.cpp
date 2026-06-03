/*
He aquí un avance. En este capítulo aprendió acerca de enteros y del tipo int. C también puede representar letras
mayúsculas, minúsculas, y una considerable variedad de símbolos especiales. C utiliza internamente enteros pequeños para representar cada carácter. Al conjunto de caracteres que utiliza una computadora y a las representaciones
enteras para esos caracteres se les conoce como conjunto de caracteres de la computadora. Por ejemplo, usted puede
imprimir el entero equivalente a la A mayúscula, si ejecuta la instrucción:
printf( “%d”, ‘A’ );
Escriba un programa en C que imprima los enteros equivalentes a algunas letras mayúsculas, minúsculas, dígitos y
símbolos especiales. Como mínimo, determine los enteros equivalentes de las siguientes: ABCabc012$*
+ / y el carácter espacio en blanco.
*/
#include <iostream>

int main () {
    std::cout<< "A: " << static_cast<int>('A') << std::endl;
    std::cout<< "B: " << static_cast<int>('B') << std::endl;
    std::cout<< "C: " << static_cast<int>('C') << std::endl;
    std::cout<< "a: " << static_cast<int>('a') << std::endl;
    std::cout<< "b: " << static_cast<int>('b') << std::endl;
    std::cout<< "c: " << static_cast<int>('c') << std::endl;
    std::cout<< "0: " << static_cast<int>('0') << std::endl;
    std::cout<< "1: " << static_cast<int>('1') << std::endl;
    std::cout<< "2: " << static_cast<int>('2') << std::endl;
    std::cout<< "$: " << static_cast<int>('$') << std::endl;
    std::cout<< "*: " << static_cast<int>('*') << std::endl;
    std::cout<< "+: " << static_cast<int>('+') << std::endl;
    std::cout<< "/: " << static_cast<int>('/') << std::endl;
    std::cout<< "Espacio en blanco: " << static_cast<int>(' ') << std::endl;

}