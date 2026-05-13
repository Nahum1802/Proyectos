/*
Escriba un programa que introduzca tres diferentes enteros desde el teclado, después que imprima la suma, el
promedio, el producto, el número más pequeño y el más grande de éstos. Solamente utilice la forma de selección
simple de la instrucción if, que aprendió en este capítulo. El diálogo en la pantalla debe aparecer de la siguiente
forma:
Escriba tres enteros diferentes: 13 27 14
La suma es 54
El promedio es 18
El producto es 4914
El número más pequeño es 13
El número más grande es 27
*/

fun main() {
    val num1: Int
    val num2: Int
    val num3: Int
    var resultado: Int

    println( "Ingrese 3 nunmeros enteros (separados por los espacios):" )
    val elemento = readLine()!!.split(" ")

    num1 = elemento[0].toInt()
    num2 = elemento[1].toInt()
    num3 = elemento[2].toInt()

    resultado = num1 + num2 + num3
    println( "La suma de $num1, $num2 y $num3 es igual a: $resultado" )

    resultado = ( num1 + num2 + num3 ) / 3
    println( "El promedio de $num1, $num2 y $num3 es igual a: $resultado" )

    resultado = num1 * num2 * num3
    println( "El producto de $num1, $num2 y $num3 es igual a: $resultado" )

    if ( num1 > num2 && num1 > num3) {
        println( "El numero mas grande es: $num1" )
    }
    if ( num2 > num1 && num2 > num3) {
        println( "El numero mas grande es: $num2" )
    }
    if ( num3 > num1 && num3 > num2) {
        println( "El numero mas grande es: $num3" )
    }
    if ( num1 < num2 && num1 < num3) {
        println( "El numero mas pequeño es: $num1" )
    }
    if ( num2 < num1 && num2 < num3 ) {
        println ( "El numero mas pequeño es: $num2")
    }
    if ( num3 < num1 && num3 < num2 ) {
        println( "El numero mas pequeño es: $num3" )
    }
}