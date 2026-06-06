/*
Escriba un programa que introduzca un número de cinco dígitos, que separe el número en sus dígitos individuales
y que despliegue los dígitos separados entre sí mediante tres espacios cada uno. [Pista: Utilice combinaciones de
la división entera y el operador módulo.] 
*/

#include <iostream>

int main () {
    int num1, num2, num3, num4, num5, numero;

    std::cout<< "Ingrese un numero de 5 digitos: ";
    std::cin>> numero;

    num1 = numero / 10000;
    num2 = ( numero / 1000 ) % 10;
    num3 = ( numero / 100 ) % 10;
    num4 = ( numero / 10 ) % 10;
    num5 = numero % 10;

    std::cout<< num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << std::endl;
} 