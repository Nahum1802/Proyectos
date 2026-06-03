/*
Escriba un programa que pida al usuario escribir dos números, que obtenga los dos números por parte del usuario,
y que imprime la suma, el producto, la diferencia, el cociente y el residuo de los dos números.
*/

#include <iostream>

int main() {
    int num1, num2, resultado;

    std::cout<< "Ingresa dos numeros (separados por espacio):";
    std::cin>> num1 >> num2;

    resultado = num1 + num2;
    std::cout<< "La suma de " << num1 << " y " << num2 << " es: " <<resultado << std::endl;

    resultado = num1 * num2;
    std::cout<< "El producto de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    resultado = num1 - num2;
    std::cout<< "La diferencia de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    resultado = num1 / num2;
    std::cout<< "El cociente de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    resultado = num1 % num2;
    std::cout<< "El residuo de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    return 0;
}