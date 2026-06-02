/*
Escriba un programa que lea dos enteros y que determine e imprima si el primero es múltiplo del segundo. [Pista:
Utilice el operador módulo.]
*/

#include <iostream>

int main () {
    int num1, num2;

    std::cout<< "Escriba el primer numero a comparar: ";
    std::cin>> num1;
    std::cout<< "Escriba el segundo numero a comparar: ";
    std::cin>> num2;

    if ( num1 % num2 == 0) {
        std::cout<< num1 << " es multiplo de " << num2 << std::endl;
    } else {
        std::cout<< num1 << " no es multiplo de " << num2 << std::endl;
    }
}