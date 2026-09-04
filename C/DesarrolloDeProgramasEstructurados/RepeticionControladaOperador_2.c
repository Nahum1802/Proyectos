#include <stdio.h>

int main() {
    int aprobados = 0;
    int reprobados = 0;
    int estudiante = 1;
    int resultado;

    while ( estudiante <= 10 ) {
        printf( "Introduzca el resultado ( 1 = aprobado, 2 = reprobado ): ");
        scanf( "%d", &resultado );

        if ( resultado == 1) {
            aprobados = aprobados + 1;
        } else {
            reprobados = reprobados + 1;
        }
        estudiante = estudiante + 1;
    }
    printf( "Aprobados: %d\n", aprobados);
    printf( "Reprobados: %d\n", reprobados);

    if ( aprobados > 8) {
        printf( "Objetivo alcanzado\n");
    }

    return 0;
}