#Escriba una sola instrucción o línea de C que realice lo siguiente:
#a) Imprima el mensaje “Escriba dos números”.
#b) Asigne el producto de las variables b y c a la variable a.
#c) Indique que un programa realiza un cálculo de nómina (es decir, utilice texto que ayude a documentar un programa).
#d) Escriba tres valores enteros desde el teclado y coloque estos valores en las variables enteras a, b y c

a = 0
b = 0
c = 0

b, c = map(int, input( "Escriba dos numeros (separados por espacios):" ).split())

a = b * c

print( "Este programa realiza un cálculo de nómina\n")
print(f"A = {b} * {c} es igual a: {a}")