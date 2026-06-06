#Escriba un programa que pida al usuario que introduzca dos enteros, que obtenga los números por parte del usuario, después que imprima las palabras “es más grande”. Si los números son iguales, que imprima el mensaje
#“Estos números son iguales”. Solamente utilice la forma de selección simple de la instrucción if, que
#aprendió en este capítulo.

num1 = 0
num2 = 0

num1, num2 = map(int, input( "Escirba dos numeros (separados con espacio):").split())

if ( num1 < num2 ):
    print(f"{num1} es menor que {num2}")

if ( num1 > num2 ):
    print(f"{num1} es mas grande que {num2}" )  

if ( num1 == num2 ):
    print(f"{num1} es igual que {num2}" )
    