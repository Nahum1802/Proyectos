#Escriba un programa que lea el radio de un círculo y que imprima el diámetro, la circunferencia y el área de ese
#círculo. Utilice el valor constante de 3.14159 para PI. Realice cada uno de estos cálculos dentro de instrucción(es)
#printf, y utilice el especificador de conversión %f. [Nota: En este capítulo sólo explicamos constantes y variables enteras. En el capítulo 3 explicaremos los números de punto flotante, es decir, valores que pueden tener puntos decimales.]

PI = 3.1416
radio = float(input( "Intrduzca el radio de su circulo: " ))

diametro = 2 * radio
circunferencia = 2 * PI * radio
area = PI * radio * radio

print(f"El diametro de su circulo es: {diametro}")
print(f"La circunferencia de su circulo es: {circunferencia}")
print(f"El area de su circulo es: {area}")
