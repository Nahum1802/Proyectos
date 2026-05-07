fun main() {
    var num1: Int //Al poner var significa que el valor es variable 
    var num2: Int

    println("Introduzca los valores y le dire que relaciones satisfacen:")
    num1 = readLine()!!.toInt() // Lee los numeros introducidos por el usuario y los convierte a enteros
    num2 = readLine()!!.toInt() // Lee los numeros introducidos por el usuario y los convierte a enteros

    if(num1 == num2) {
        println("$num1 es igual que $num2")
    } //FIn del if

    if(num1 != num2) {
        println("$num1 es diferente que $num2")
    }   //FIn del if

    if(num1 < num2) {
        println("$num1 es menor que $num2")
    } //FIn del if

    if(num1 > num2) {
        println("$num1 es mayor que $num2")
    } //FIn del if

    if(num1 <= num2) {
        println("$num1 es menor o igual que $num2")
    } //FIn del if

    if(num1 >= num2) {
        println("$num1 es mayor o igual que $num2")
    } //FIn del if
}