print("Bienvenido a oldie bank")
edad = int(input("Ingrese su edad: "))

if edad < 20:
    tasa = 20
else:
    tasa = 18

estudiante = int(input("¿Está estudiando? Si = 1, No = 0: "))

if estudiante == 1:
    promedio = float(input("¿Cuál es su promedio?: "))
    if promedio <= 3.5:
        tasa = tasa - 0.5
    elif 3.5 < promedio < 4.2:
        tasa = tasa - 0.8
    elif promedio >= 4.2:
        tasa = tasa - 1.5

comida = int(input("Ingrese cuál es su comida preferida; 1 = Hamburguesa; 2 = Perro; 3 = Pizza; 4 = Sushi: "))

if comida == 1:
    print("Ha elegido Hamburguesa")
    tasa = tasa - 0.2
elif comida == 2:
    print("Ha elegido Perro")
    tasa = tasa - 0.5
elif comida == 3:
    print("Ha elegido Pizza")
    tasa = tasa + 0.1
elif comida == 4:
    print("Ha elegido Sushi")
    tasa = tasa + 0.3

trabajador = int(input("¿Está trabajando en este momento? Si = 1, No = 0: "))

if trabajador == 1 and tasa < 17:
    tasa = tasa - 1

print(f"Su tasa anual es de: {tasa}%")
