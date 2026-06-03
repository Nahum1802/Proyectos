/*
Escriba una sola instrucción de C para hacer lo que indican los siguientes enunciados:
a) Declare las variables c, estaVariable, q76354 y numero como de tipo int.
b) Indique al usuario que introduzca un entero. Finalice su mensaje de indicaciones con dos puntos (:), seguidos
por un espacio, y deje el cursor posicionado después del espacio.
c) Lea un entero introducido desde el teclado y almacene su valor en la variable entera a.
d) Si numero no es igual que 7, imprima “La variable numero no es igual que 7”.
e) En una línea, imprima el mensaje “Este es un programa en C”.
f) En dos líneas, imprima el mensaje “Este es un programa en C”, de tal forma que la primera línea termine en “programa”.
g) Imprima el mensaje “Este es un programa en C”, de tal forma que cada palabra aparezca en una línea diferente.
h) Imprima el mensaje “Este es un programa en C”, de tal forma que cada palabra aparezca separada por
un salto del tabulador.
*/

fun main() {
    var c: Int
    var estaVariable: Int
    var q76354: Int
    var numero: Int

    println( "Introduzca un numero entero:" )
    numero = readLine()!!.toInt()

    if ( numero != 7 ) {
        println( "La variable numero no es igual que 7" )
        println( "Este es un programa en \"Kotlin\"" )
        println( "Este es un programa")
        println( " en \"Kotlin\"" )
        println( "Este\n es\n un\n programa\n en\n \"Kotlin\"" )
        println( "Este\t es\t un\t programa\t en \"Kotlin\"\t" )
    }
} //Fin de la funcion main