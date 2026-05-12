/*
Escriba un programa que imprima los números del 1 al 4 en la misma línea. Escriba el programa utilizando los siguientes métodos:
a) Mediante una instrucción printf sin especificadores de conversión.
b) Mediante una instrucción printf con cuatro especificadores de conversión.
c) Mediante cuatro instrucciones printf.
*/

fun main() {
    println( "1 2 3 4")
    println( "%d %d %d %d".format(1, 2, 3, 4) )
    print( "1 " )
    print( "2 " )
    print( "3 " )
    print( "4 " )
}