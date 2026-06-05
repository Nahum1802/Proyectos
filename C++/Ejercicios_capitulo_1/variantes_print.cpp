/*
Escriba un programa que imprima los números del 1 al 4 en la misma línea. Escriba el programa utilizando los siguientes métodos:
a) Mediante una instrucción printf sin especificadores de conversión.
b) Mediante una instrucción printf con cuatro especificadores de conversión.
c) Mediante cuatro instrucciones printf.
*/
#include <iostream>

int main() {
    std::cout<< "1 2 3 4\n";
    std::cout<< 1 << " " << 2 << " " << 3 << " " << 4 << "\n";
    std::cout<< "1 ";
    std::cout<< "2 ";
    std::cout<< "3 ";
    std::cout<< "4\n";

    return 0;
}