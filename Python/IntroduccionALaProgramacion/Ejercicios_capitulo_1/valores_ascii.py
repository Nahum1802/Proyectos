#He aquí un avance. En este capítulo aprendió acerca de enteros y del tipo int. C también puede representar letras
#mayúsculas, minúsculas, y una considerable variedad de símbolos especiales. C utiliza internamente enteros pequeños para representar cada carácter. Al conjunto de caracteres que utiliza una computadora y a las representaciones
#enteras para esos caracteres se les conoce como conjunto de caracteres de la computadora. Por ejemplo, usted puede
#imprimir el entero equivalente a la A mayúscula, si ejecuta la instrucción:
#printf( “%d”, ‘A’ );
#Escriba un programa en C que imprima los enteros equivalentes a algunas letras mayúsculas, minúsculas, dígitos y
#símbolos especiales. Como mínimo, determine los enteros equivalentes de las siguientes: ABCabc012$*
#+ / y el carácter espacio en blanco.

print(f"A: {ord('A')}" )
print(f"B: {ord('B')}" )
print(f"C: {ord('C')}" )
print(f"a: {ord('a')}" )
print(f"b: {ord('b')}" )
print(f"c: {ord('c')}" )
print(f"0: {ord('0')}" )
print(f"1: {ord('1')}" )
print(f"2: {ord("2")}" )
print(f"$: {ord('$')}" )
print(f"*: {ord('*')}" )
print(f"+: {ord('+')}" )
print(f"/: {ord('/')}" )
print(f"Espacio en blanco: {ord(' ')}" )