/*
Escriba un programa que pida al usuario que introduzca dos enteros, que obtenga los números por parte del usuario, después que imprima las palabras “es más grande”. Si los números son iguales, que imprima el mensaje
“Estos números son iguales”. Solamente utilice la forma de selección simple de la instrucción if, que
aprendió en este capítulo.
*/
#include <iostream>

int main() {
    int num1, num2;

    std::cout<< "Introduce dos numeros enteros (separados por un espacio):";
    std::cin>> num1 >> num2;

    if ( num1 > num2 ) {
        std::cout<< num1 << " es mas grande que " << num2 << std::endl;
    }
    if ( num1 < num2 ) {
        std::cout<< num1 << " es menor que " << num2 << std::endl;
    }
    if ( num1 == num2 ) {
        std::cout<< num1 << " es igual a " << num2 << std::endl;
    }
    return 0;
}