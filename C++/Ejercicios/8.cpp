/*
Escriba un programa que lea el radio de un círculo y que imprima el diámetro, la circunferencia y el área de ese
círculo. Utilice el valor constante de 3.14159 para pi. Realice cada uno de estos cálculos dentro de instrucción(es)
printf, y utilice el especificador de conversión %f. [Nota: En este capítulo sólo explicamos constantes y variables enteras. En el capítulo 3 explicaremos los números de punto flotante, es decir, valores que pueden tener puntos decimales.]
*/

#include <iostream>

int main() {
    const float PI = 3.1416;
    float radio;

    std::cout<< "Ingrese el valor del radio de su circulo: ";
    std::cin>> radio;
    

    std::cout<< "El diametro de tu cirulo es: " << 2 * radio << "\n";
    std::cout<< "La circunferencia de tu circulo es: " << 2 * radio * PI << "\n";
    std::cout<< "El area de tu circulo es: " << PI * radio * radio << "\n";
}