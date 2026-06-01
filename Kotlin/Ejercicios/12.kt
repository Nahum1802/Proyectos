/*
Escriba un programa que lea un entero y que determine e imprima si es par o impar. [Pista: Utilice el operador
módulo. Un número par es un múltiplo de dos. Cualquier múltiplo de 2 arroja un residuo de cero, cuando se divide
entre 2.
*/

fun main () {
    var num1 :Int
    var resultado :Int

    println( "INgrese un numeor entero: ")
    num1 = readLine()!!.toInt()

    resultado = num1 % 2

    if ( resultado == 0 ) {
        println( "El numero $num1 es par" )
    } else {
        println( "El numero $num1 es impar" )
    }
}