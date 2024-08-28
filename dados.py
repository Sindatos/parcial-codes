import random
import time

random.seed(time.time())  # Inicializa la semilla para la generación de números aleatorios

tiroini = input("Bienvenido al CASINO GANAMUCHO\nDesea lanzar su tiro inicial SI (a); NO (b): ")

if tiroini.lower() == 'a':
    max_val = 6 
    dado = random.randint(1, max_val)
    dado2 = random.randint(1, max_val)
    totaldado = dado + dado2
    print(f"Sacaste: {totaldado}")
    mismo = totaldado
    

    if totaldado in {2, 3, 12}:
        print("Usted ha perdido")
        print("Reinicie para reintentar el juego")
    elif totaldado in {7, 11}:
        print("Usted ha ganado")
        print("Felicitaciones")
    else:

        dado = random.randint(1, max_val)
        dado2 = random.randint(1, max_val)
        totaldado = dado + dado2
        print(f"Sacaste {totaldado}")

        if totaldado == mismo:
            print(f"Usted ha ganado porque ha sacado el mismo número del primer lanzamiento {mismo}")
        elif totaldado == 7:
            print(f"Usted ha perdido ha sacado {totaldado}")
        else:
   
            dado = random.randint(1, max_val)
            dado2 = random.randint(1, max_val)
            totaldado = dado + dado2
            print(f"Sacaste {totaldado}")

            if totaldado == mismo:
                print(f"Usted ha ganado porque ha sacado el mismo número del primer lanzamiento {mismo}")
            elif totaldado == 7:
                print(f"Usted ha perdido ha sacado {totaldado}")
            else:
    
                dado = random.randint(1, max_val)
                dado2 = random.randint(1, max_val)
                totaldado = dado + dado2
                print(f"Sacaste {totaldado}")

                if totaldado == mismo:
                    print(f"Usted ha ganado porque ha sacado el mismo número del primer lanzamiento {mismo}")
                elif totaldado == 7:
                    print(f"Usted ha perdido ha sacado {totaldado}")
                else:

                    dado = random.randint(1, max_val)
                    dado2 = random.randint(1, max_val)
                    totaldado = dado + dado2
                    print(f"Sacaste {totaldado}")

                    if totaldado == mismo:
                        print(f"Usted ha ganado porque ha sacado el mismo número del primer lanzamiento {mismo}")
                    elif totaldado == 7:
                        print(f"Usted ha perdido ha sacado {totaldado}")
else:
    print("Hasta la Proxima")
