#Escriba un programa que introduzca tres diferentes enteros desde el teclado, después que imprima la suma, el
#promedio, el producto, el número más pequeño y el más grande de éstos. Solamente utilice la forma de selección
#simple de la instrucción if, que aprendió en este capítulo. El diálogo en la pantalla debe aparecer de la siguiente
#forma:
#Escriba tres enteros diferentes: 13 27 14
#La suma es 54
#El promedio es 18
#El producto es 4914
#El número más pequeño es 13
#El número más grande es 27

num1 = 0
num2 = 0
num3 = 0
resultado = 0

num1, num2, num3 = map(int, input( "Ingrese 3 numeros (separados por espacios):").split())

resultado = num1 + num2 + num3
print(f"La suma de {num1}, {num2} y {num3} es igual a: {resultado}")

resultado = ( num1 + num2 + num3) / 3
print(f"El promedio de {num1}, {num2} y {num3} es igual a: {resultado}")

resultado = num1 * num2 * num3
print(f"El producto de {num1}, {num2} y {num3} es igual a: {resultado}")

if ( num1 > num2 & num1 > num3 ):
    print(f"El numero mas grande es: {num1}")

if ( num2 > num1 & num2 > num3):
    print(f"El numero mas grande es: {num2}")

if ( num3 > num1 & num3 > num2 ):
    print(f"El numero mas grande es: {num3}")

if ( num1 < num2 & num1 < num3 ):
    print(f"El numero mas pequeño es: {num1}")

if ( num2 < num1 & num2 < num3 ):
    print(f"El numero mas pequeño es: {num2}")

if ( num3 < num1 & num3 < num2 ):
    print(f"El numero mas pequeño es: {num2}")

