/*
Escriba un programa que introduzca un número de cinco dígitos, que separe el número en sus dígitos individuales
y que despliegue los dígitos separados entre sí mediante tres espacios cada uno. [Pista: Utilice combinaciones de
la división entera y el operador módulo.] 
*/

fun main () {
    var num1 :Int
    var num2 :Int
    var num3 :Int
    var num4 :Int
    var num5 :Int
    var number :Int

    println( "Escribe un numero de 5 digitos: ")
    number = readLine()!!.toInt()

    num1 = number / 10000
    num2 = ( number / 1000 ) %10
    num3 = ( number / 100 ) %10
    num4 = ( number / 10 ) %10
    num5 = number % 10

    println( "$num1 $num2 $num3 $num4 $num5")
}