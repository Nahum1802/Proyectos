/*
Escriba un programa que pida al usuario que introduzca dos enteros, que obtenga los números por parte del usuario, después que imprima las palabras “es más grande”. Si los números son iguales, que imprima el mensaje
“Estos números son iguales”. Solamente utilice la forma de selección simple de la instrucción if, que
aprendió en este capítulo.
*/

fun main() {
    var num1: Int
    var num2: Int

    println( "Escriba dos numeros (separados con espacio):")
    val elemento = readLine()!!.split(" ")

    num1 = elemento[0].toInt()
    num2 = elemento[1].toInt()

    if ( num1 > num2 ) {
        println( "$num1 es mayor que $num2" )
    }
    if ( num1 < num2 ) {
        println( "$num1 es menor que $num2" )
    }
    if ( num1 == num2 ) {
        println( "$num1 es igual que $num2" )
    }
}