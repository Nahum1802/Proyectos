#Escriba una sola instrucción de C para hacer lo que indican los siguientes enunciados:
#a) Declare las variables c, estaVariable, q76354 y numero como de tipo int.
#b) Indique al usuario que introduzca un entero. Finalice su mensaje de indicaciones con dos puntos (:), seguidos
#por un espacio, y deje el cursor posicionado después del espacio.
#c) Lea un entero introducido desde el teclado y almacene su valor en la variable entera a.
#d) Si numero no es igual que 7, imprima “La variable numero no es igual que 7”.
#e) En una línea, imprima el mensaje “Este es un programa en C”.
#f) En dos líneas, imprima el mensaje “Este es un programa en C”, de tal forma que la primera línea termine en “programa”.
#g) Imprima el mensaje “Este es un programa en C”, de tal forma que cada palabra aparezca en una línea diferente.
#h) Imprima el mensaje “Este es un programa en C”, de tal forma que cada palabra aparezca separada por
#un salto del tabulador.

c = 0
estaVariable = 0
q76354 = 0 
numero = 0

numero = int(input( "INgrese un numero entero:"))
if ( numero != 7 ):
    print( "La variable numero no es igual que 7" )
    print( "Este es un promgrama en \"Python\"" )
    print( "Este es un programa\n en \"Python\"" )
    print( " Este\n es\n un\n programa\n en\ \"Python\"" )
    print( "Este\t es\t un\t programa\t en\t \"Python\"\t" )
#FIn del ejercicio 1
