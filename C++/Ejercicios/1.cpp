/*
Escriba una sola instrucción de C para hacer lo que indican los siguientes enunciados:
a) Declare las variables c, estaVariable, q76354 y numero como de tipo int.
b) Indique al usuario que introduzca un entero. Finalice su mensaje de indicaciones con dos puntos (:), seguidos
por un espacio, y deje el cursor posicionado después del espacio.
c) Lea un entero introducido desde el teclado y almacene su valor en la variable entera a.
d) Si numero no es igual que 7, imprima “La variable numero no es igual que 7”.
e) En una línea, imprima el mensaje “Este es un programa en C”.
f) En dos líneas, imprima el mensaje “Este es un programa en C”, de tal forma que la primera línea termine en “programa”.
g) Imprima el mensaje “Este es un programa en C”, de tal forma que cada palabra aparezca en una línea diferente.
h) Imprima el mensaje “Este es un programa en C”, de tal forma que cada palabra aparezca separada por
un salto del tabulador.
*/

#include<iostream>

int main() {
    int c, estaVariable, q76354, numero;

    std::cout << "Introduzca un numero entero: ";
    std::cin >> numero;

    if (numero != 7 ) {
        std::cout<< "La variable \"numero\" no es igual que 7\n";
        std::cout<< "Este es un programa en \"C++\"\n";
        std::cout<< "Este es un programa\n en \"C++\"\n";
        std::cout<< "Este\n es\n un\n programa\n en\n \"C++\"\n";
        std::cout<< "Este\t es\t un\t programa\t en \"C++\"\t";
    }
} //FIn de la funcion main