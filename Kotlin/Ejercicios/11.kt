/*
Escriba un programa que lea cinco enteros y que después imprima el número más grande y el más pequeño del grupo. Utilice sólo técnicas de programación que haya aprendido en este capítulo.
*/

fun main () {
    var num1 :Int 
    var num2 :Int
    var num3 :Int 
    var num4 :Int 
    var num5 :Int

    println( "Escriba el valor de cada numero separado por espacio:" )
    val elemento = readLine()!!.split(" ")

    num1 = elemento[0].toInt()
    num2 = elemento[1].toInt()
    num3 = elemento[2].toInt()
    num4 = elemento[3].toInt()
    num5 = elemento[4].toInt()

    if ( num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        println( "El numero mas grande es $num1" )
    }
    if ( num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) {
        println( "El numero mas grande es $num2" )
    }
    if ( num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5) {
        println( "El numero mas grande es $num3" )
    }
    if ( num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5) {
        println( "El numero mas grande es $num4" )
    }
    if ( num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4) {
        println( "El numero mas grande es $num5" )
    }
    if ( num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
        println( "El numero mas pequeño es $num1" )
    }
    if ( num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5) {
        println( "El numero mas pequeño es $num2" )
    }
    if ( num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5) {
        println( "El numero mas pequeño es $num3" )
    }
    if ( num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5) {
        println( "El numero mas pequeño es $num4" )
    }
    if ( num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4) {
        println( "El numero mas pequeño es $num1" )
    }
}