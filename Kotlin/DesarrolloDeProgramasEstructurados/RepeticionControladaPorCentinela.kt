fun main () {
    var contador: Int 
    var calificacion: Int
    var total: Int
    var promedio: Double

    total = 0
    contador = 0

    println( "Ingrese la calificacion o -1 para terminar:")
    calificacion = readLine()!!.toInt()

    while ( calificacion != -1 ) {
        total = total + calificacion
        contador = contador + 1

        println( "introduzca la siguiente calificacion o -1 para terminar:")
        calificacion = readLine()!!.toInt()
    }

    if ( contador != 0 ) {
        promedio = total / contador.toDouble()
        println( "El promedio del grupo es: $promedio")
    }else {
        println( "No se introdujeron calificaciones")
    }
}