#Escriba un programa que pida al usuario escribir dos números, que obtenga los dos números por parte del usuario,
#y que imprime la suma, el producto, la diferencia, el cociente y el residuo de los dos números.

a = 0
b = 0
resultado = 0

a,b = map(int, input( "Escriba dos numeros (separados por espacio):").split())

resultado = a + b
print(f"La suma de {a} y {b} es: {resultado} ")

resultado = a * b
print(f"El producto de {a} y {b} es: {resultado}" )

resultado = a -b
print(f"La diferencia de {a} y {b} es: {resultado}" )

resultado = a / b
print(f"El cociente de {a} y {b} es: {resultado}" )

resultado = a % b
print(f"El residuo de {a} y {b} es: {resultado}")
