/*
Escriba un programa que lea el radio de un círculo y que imprima el diámetro, la circunferencia y el área de ese
círculo. Utilice el valor constante de 3.14159 para PI. Realice cada uno de estos cálculos dentro de instrucción(es)
printf, y utilice el especificador de conversión %f. [Nota: En este capítulo sólo explicamos constantes y variables enteras. En el capítulo 3 explicaremos los números de punto flotante, es decir, valores que pueden tener puntos decimales.]
*/

fun main () {
    val PI = 3.1416f
    var radio : Float
    var diametro: Float
    var circunferencia: Float
    var area: Float

    print( "Escriba el valor del radio de su circulo: ")
    radio = readLine()!!.toFloat()

    diametro = 2 * radio
    println( "El diametro de su circulo es: $diametro" )

    circunferencia = 2 * radio * PI
    println( "La circunferencai de su circulo es: $circunferencia" )

    area = PI * radio * radio
    println( "El aarea de su circulo es: $area" )
}