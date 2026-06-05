/*
Escriba un programa que pida al usuario escribir dos números, que obtenga los dos números por parte del usuario,
y que imprime la suma, el producto, la diferencia, el cociente y el residuo de los dos números.
*/

fun main() {
    var num1: Int
    var num2: Int
    var resultado: Int

    println( "Escriba dos numeros (separados por un espacio): " )
    val entrada = readLine()!!.split(" ")

    num1 = entrada[0].toInt()
    num2 = entrada[1].toInt()

    resultado = num1 + num2
    println( "La suma de $num1 y $num2 es: $resultado" )

    resultado = num1 * num2
    println( "El producto de $num1 y $num2 es: $resultado" )

    resultado = num1 - num2
    println( "la diferencia de $num1 y $num2 es: $resultado" )

    resultado = num1 / num2
    println( "El cociente de $num1 y $num2 es: $resultado" )

    resultado = num1 % num2
    println( "El residuo de $num1 y $num2 es: $resultado" )
}