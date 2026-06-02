#Escriba un programa que lea dos enteros y que determine e imprima si el primero es múltiplo del segundo. [Pista:
#Utilice el operador módulo.]

num1 = int
num2 = int

num1 = int(input( "Ingrese el primer numero: "))
num2 = int(input( "Ingrese el segindo numero: "))

if ( num1 % num2 == 0 ) :
    print(f"{num1} es multiplo de {num2}")
else :
    print(f"{num1} ni es multiplo de {num2} ")