/*
Escriba un programa que lea dos enteros y que determine e imprima si el primero es múltiplo del segundo. [Pista:
Utilice el operador módulo.]
*/

fun main () {
    var num1 :Int
    var num2 :Int

    println( "Ingrese el primer numero entero: " )
    num1 = readLine()!!.toInt()

    println( "Ingrese el segundo nuemro entero: " )
    num2 = readLine()!!.toInt()

    if ( num1 % num2 == 0) {
        println( "$num1 es multiplo de $num2" )
    } else {
        println( "$num1 no es multiplo de $num2" )
    }
    
}