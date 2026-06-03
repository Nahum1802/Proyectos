/*
He aquí un avance. En este capítulo aprendió acerca de enteros y del tipo int. C también puede representar letras
mayúsculas, minúsculas, y una considerable variedad de símbolos especiales. C utiliza internamente enteros pequeños para representar cada carácter. Al conjunto de caracteres que utiliza una computadora y a las representaciones
enteras para esos caracteres se les conoce como conjunto de caracteres de la computadora. Por ejemplo, usted puede
imprimir el entero equivalente a la A mayúscula, si ejecuta la instrucción:
printf( “%d”, ‘A’ );
Escriba un programa en C que imprima los enteros equivalentes a algunas letras mayúsculas, minúsculas, dígitos y
símbolos especiales. Como mínimo, determine los enteros equivalentes de las siguientes: ABCabc012$*
+ / y el carácter espacio en blanco.
*/

fun main () {
    println( "A: ${'A'.code}" )
    println( "B: ${'B'.code}" )
    println( "C: ${'C'.code}" )
    println( "a: ${'a'.code}" )
    println( "b: ${'b'.code}" )
    println( "c: ${'c'.code}" )
    println( "0: ${'0'.code}" )
    println( "1: ${'1'.code}" )
    println( "2: ${'2'.code}" )
    println( "$: ${'$'.code}" )
    println( "*: ${'*'.code}" )
    println( "+: ${'+'.code}" )
    println( "/: ${'/'.code}" )
    println( "Espacio en blanco: ${' '.code}" )
}