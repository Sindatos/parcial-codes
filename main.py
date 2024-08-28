print("Bienvenido al calculador TUTTICUADRATI")
habitaciones = int(input("Ingrese numero de habitaciones"))

if (habitaciones <= 1):
    habitaciones = 1
elif (habitaciones >= 3):
    habitaciones = 3
ancho = int(input("Ingrese el ancho de las habitaciones: "))
if (ancho <= 2):
    ancho = 2
elif (ancho >= 10):
    ancho = 10
largo = int(input("Ingrese el largo de las habitaciones: "))
if (largo <= 2):
    largo = 2
elif (largo >= 10):
    largo = 10
    
areahab = (ancho*largo) * habitaciones

banhos = int(input("Ingrese el numero de banhos: "))
if (banhos <= 1):
    banhos = 1
    areabanhos = 9
else:
    areabanhos = 4
    
social = int(input("Desea area social 1 = Premium // 0 = Regular"))
if (social == 1):
    areasocial = 40
else:
    areasocial = 20
    
patio = int(input("Desea Patio 1 = Si // 0 = No"))

if (patio  == 1):
    ancho = int(input("Ingrese el ancho del patio: "))
    if (ancho <= 2):
        ancho = 2
    elif (ancho >= 8):
        ancho = 8
    largo = int(input("Ingrese el largo del patio: "))
    if (largo <= 2):
        largo = 2
    elif (largo >= 8):
        largo = 8
    areapatio = largo*ancho
else:
    areapatio = 0


garaje = int(input("Garaje simple = 1 // doble = 0"))

if (social == 1):
    areagaraje = 10
else:
    areagaraje = 20

areatotal = areahab + areabanhos + areagaraje + areapatio + areasocial

if (areatotal - areagaraje) < 100:
    valormetro = 8000000
else:
    valormetro = 9000000
    
valortotal = (areatotal-areagaraje)+(areagaraje*5000000)*valormetro*1.25

if (valortotal > 1000000000):
    valortotal = valortotal - 0.5
    
print("El area total es de: ", areatotal)
print("El valor total es de: ", valortotal)

