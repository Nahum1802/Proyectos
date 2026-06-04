#Escriba un programa que introduzca un número de cinco dígitos, que separe el número en sus dígitos individuales
#y que despliegue los dígitos separados entre sí mediante tres espacios cada uno. [Pista: Utilice combinaciones de
#la división entera y el operador módulo.] 

num1 = int
num2 = int
num3 = int
num4 = int
num5 = int
number = int

number = int(input( "Ingrese un numero con 5 digitos:" ))

num1 = number // 10000
num2 = ( number // 1000 ) %10
num3 = ( number // 100 ) %10
num4 = ( number // 10 ) %10
num5 = number % 10

print(f"{num1} {num2} {num3} {num4} {num5}" )
