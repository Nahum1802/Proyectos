contador = int
calificacion = int
total = int
promedio = float

total = 0
contador = 0

calificacion = int(input( "Ingrese una califiaccion o -1 para terminar:"))

while calificacion != -1:
    total = total + calificacion
    contador = contador + 1

    calificacion = int(input( "Ingrese una calififacion o -1 para terminar:"))

if contador != 0:
    promedio = total / contador
    print(f"El promedio del grupo es: {promedio}")
else:
    print("No se introdujeron calififaciones")
