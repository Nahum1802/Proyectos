#include <iostream>

int main (){
    int contador; /* número de calificaciones introducidas */
    int calificacion; /* valor de la calificación */
    int total; /* suma de las calificaciones */
    float promedio; /* número con punto decimal para el promedio */

    total = 0; /* inicializa el total */
    contador = 0; /* inicializa el contador del ciclo */

    std::cout<< "Introduzca la calificacion, -1 para terminar:";
    std::cin>> calificacion;

    while ( calificacion != -1 ){
        total = total + calificacion; /*Suma de calificacion*/
        contador = contador +1; /*incrementa el contador*/

        std::cout<< "Introduzca la siguiente calififacion, -1 para terminar:";
        std::cin>> calificacion; 
    }

    if ( contador != 0 ){
        promedio = ( float ) total / contador;

        std::cout<< "El prodmedio del grupo es:" << promedio << std::endl;
    }else{
        std::cout<< "No se introdujeron calificaciones" << std::endl;
    }

    return 0;
}