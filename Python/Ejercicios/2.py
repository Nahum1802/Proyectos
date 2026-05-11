#Escriba una instrucción (o comentario) para realizar lo siguiente:
#a) Indique que el programa calculará el producto de tres enteros.
#b) Declare las variables x, y, z y resultado de tipo int.
#c) Indique al usuario que introduzca tres enteros.
#d) Lea tres enteros introducidos desde el teclado y almacénelos en las variables x, y y z.
#e) Calcule el producto de los tres entero contenidos en las variables x, y, z, y asigne el resultado a la variable
#resultado.
#f) Imprima “El producto es”, seguido del valor de la variable entera resultado

print( "Este programa calcula el producto de 3 enteros" )

x = 0
y = 0
z = 0 
resultado = 0

x, y, z = map(int, input( "Ingrese los 3 numeros enteros (separados por espacio): ").split())

resultado = x * y * z

print( f"El producto de {x}, {y} y {z} es {resultado}" )