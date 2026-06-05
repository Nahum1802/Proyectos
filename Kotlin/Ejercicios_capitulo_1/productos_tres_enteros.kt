/*
Escriba una instrucción (o comentario) para realizar lo siguiente:
a) Indique que el programa calculará el producto de tres enteros.
b) Declare las variables x, y, z y resultado de tipo int.
c) Indique al usuario que introduzca tres enteros.
d) Lea tres enteros introducidos desde el teclado y almacénelos en las variables x, y y z.
e) Calcule el producto de los tres entero contenidos en las variables x, y, z, y asigne el resultado a la variable
resultado.
f) Imprima “El producto es”, seguido del valor de la variable entera resultado
*/

fun main() {
    println( "Este programa calcula el producto de 3 numeros enteros" )

    var x: Int
    var y: Int
    var z: Int
    var resultado: Int

    println( "Intorduzca 3 numeros enteros (separados por espacios):" )
    val entrada = readLine()!!.split(" ")
    x = entrada[0].toInt()
    y = entrada[1].toInt()
    z = entrada[2].toInt()
    
    resultado = x * y * z

    println( "El producto de $x, $y y $z es: $resultado" )

}