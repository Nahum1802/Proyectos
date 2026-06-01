/*
Escriba un programa que lea un entero y que determine e imprima si es par o impar. [Pista: Utilice el operador
módulo. Un número par es un múltiplo de dos. Cualquier múltiplo de 2 arroja un residuo de cero, cuando se divide
entre 2.
*/

#include <iostream>

int main () {
    int num1, resultado;

    std::cout<< "Ingrese un numero entero: ";
    std::cin>> num1;

    resultado = num1 % 2;

    if ( resultado == 0 ) {
        std::cout<< "El numero" << num1 << " es par";
    } else {
        std::cout<< "El numero" << num1 << " es impar";
    }
}