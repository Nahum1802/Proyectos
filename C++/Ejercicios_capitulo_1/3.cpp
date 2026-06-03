/*
Escriba una sola instrucción o línea de C que realice lo siguiente:
a) Imprima el mensaje “Escriba dos números”.
b) Asigne el producto de las variables b y c a la variable a.
c) Indique que un programa realiza un cálculo de nómina (es decir, utilice texto que ayude a documentar un programa).
d) Escriba tres valores enteros desde el teclado y coloque estos valores en las variables enteras a, b y c
*/
#include <iostream>

int main() {
    int a, b, c;
    std::cout<< "Escriba dos numeros (separados por un espacio):";
    std::cin>> b >> c;

    a = b * c;

    std::cout<< "Este programa realiza un calculo de nomina\n";
    std::cout<< "A = " << b << " * " << c << " esto es igual  " << a << "\n";
}