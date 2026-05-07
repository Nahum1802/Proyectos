num1, num2 = map(int, input("Ingrese los valores y le dire que relaciones satisfacen:").split())
#la funcion "map" hace que si hay varias funciones se puedan leer al mismo tiempo, en este caso con el "int" y el "split" hace que se puedan separar los numeros con un espacio

if (num1 == num2):
    print(f"{num1} es igual que {num2}")

if (num1 != num2):
    print(f"{num1} es diferente que {num2}")

if (num1 > num2):
    print(f"{num1} es mayor que {num2}")

if (num1 < num2):
    print(f"{num1} es menor que {num2}")

if (num1 >= num2):
    print(f"{num1} es mayor o igual que {num2}")

if (num1 <= num2):
    print(f"{num1} es menor o igual que {num2}")