/*
Escriba una sola instrucción o línea de C que realice lo siguiente:
a) Imprima el mensaje “Escriba dos números”.
b) Asigne el producto de las variables b y c a la variable a.
c) Indique que un programa realiza un cálculo de nómina (es decir, utilice texto que ayude a documentar un programa).
d) Escriba tres valores enteros desde el teclado y coloque estos valores en las variables enteras a, b y c
*/
fun main() {
    var a: Int
    var b: Int
    var c: Int

    print( "Escriba dos numeros (separados por un espacio):" )
    val entrada = readLine()!!.split(" ")
    b = entrada[0].toInt()
    c = entrada[1].toInt()

    a = b * c

    println( "Este programa realiza un calculo de nomina")
    println( "A = $b * $c es igual a: $a")

}