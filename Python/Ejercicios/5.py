#Escriba un programa que imprima los números del 1 al 4 en la misma línea. Escriba el programa utilizando los siguientes métodos:
#a) Mediante una instrucción printf sin especificadores de conversión.
#b) Mediante una instrucción printf con cuatro especificadores de conversión.
#c) Mediante cuatro instrucciones printf.

print( "1 2 3 4" )
print( "%d %d %d %d" % (1, 2, 3, 4))
print( "1 ", end="")
print( "2 ", end="")
print( "3 ", end="")
print( "4" )