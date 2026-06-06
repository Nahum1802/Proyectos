//Suma de dos enteros
//Se inicia la funcion main
fun main() {
    var entero1: Int
    var entero2: Int
    var suma: Int

    println("Ingrese el primer numero entero:")
    entero1 = readLine()!!.toInt() //Aqui se lee el numero "entero1" y el "!!" es para que no sea nulo, y el "toInt()" es para convertirlo a entero porque readLine() lo devuelve como String

    println("Ingrese el segundo numero entero:")
    entero2 = readLine()!!.toInt()

    suma = entero1 + entero2 // Aqui se hace la operacion que y se guarda en el "var suma"

    println("La suma de $entero1 mas $entero2 es igual a: $suma")
} 
//Fin de la funcion main