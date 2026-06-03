#Escriba un programa que lea un entero y que determine e imprima si es par o impar. [Pista: Utilice el operador
#módulo. Un número par es un múltiplo de dos. Cualquier múltiplo de 2 arroja un residuo de cero, cuando se divide
#entre 2.

num1 =int
resultado = int

num1 = int(input( "Ingrese un numero entero: "))

resultado = num1 % 2

if ( resultado == 0 ) :
    print(f"El numero {num1} es par" )
else :
    print(f"El numero {num1} es impar" )