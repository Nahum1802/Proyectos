#Escriba un programa que lea cinco enteros y que después imprima el número más grande y el más pequeño del grupo. Utilice sólo técnicas de programación que haya aprendido en este capítulo.

num1 = 0
num2 = 0 
num3 = 0
num4 = 0
num5 = 0

num1, num2, num3, num4, num5 = map(int, input( "Escriba 5 numeros enteros separados por espacios:").split())

if ( num1 > num2 and num1 > num3 and num1 > num4 and num1 > num5) :
    print(f"El valor mas grande es {num1}")
if ( num2 > num1 and num2 > num3 and num2 > num4 and num2 > num5) :
    print(f"El valor mas grande es {num2}")
if ( num3 > num1 and num3 > num2 and num3 > num4 and num3 > num5) :
    print(f"El valor mas grande es {num3}")
if ( num4 > num1 and num4 > num2 and num4 > num3 and num4 > num5) :
    print(f"El valor mas grande es {num4}")
if ( num5 > num1 and num5 > num2 and num5 > num3 and num5 > num4) :
    print(f"El valor mas grande es {num5}")
if ( num1 < num2 and num1 < num3 and num1 < num4 and num1 < num5) :
    print(f"El numero mas pequeño es {num1}")
if ( num1 < num2 and num1 < num3 and num1 < num4 and num1 < num5) :
    print(f"El numero mas pequeño es {num1}")
if ( num2 < num1 and num2 < num3 and num2 < num4 and num2 < num5) :
    print(f"El numero mas pequeño es {num2}")
if ( num3 < num1 and num3 < num2 and num3 < num4 and num3 < num5) :
    print(f"El numero mas pequeño es {num3}")
if ( num4 < num1 and num4 < num2 and num4 < num3 and num4 < num5) :
    print(f"El numero mas pequeño es {num4}")
if ( num5 < num1 and num5 < num2 and num5 < num3 and num5 < num4) :
    print(f"El numero mas pequeño es {num5}")



