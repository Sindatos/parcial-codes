numero = int(input("BIENVENIDO AL JUEGO DE APUESTAS MEJOR DISEÑADO DEL PLANETA PUNTO-FAMA\nPara empezar Jugador A ingresa el número de dos dígitos que adivinará el jugador B: "))

if 10 <= numero <= 99:
    fama = 0
    punto = 0
    adivina = int(input("Jugador B, ingrese su primera suposición: "))
    if 10 <= adivina <= 99:
        uno = numero // 10
        dos = numero % 10
        if adivina // 10 == uno:
            fama += 1
        elif adivina // 10 == dos:
            punto += 1
        if adivina % 10 == dos:
            fama += 1
        elif adivina % 10 == uno:
            punto += 1

        if fama == 2:
            print("¡Usted ha adivinado el número GG!")
            exit()
        if fama > 0:
            print(f"Usted tiene {fama} fama(s)")
        if punto > 0:
            print(f"Usted tiene {punto} punto(s)")
        if fama == 0 and punto == 0:
            print("No tiene ni puntos ni famas.")

        fama = 0
        punto = 0
        adivina = int(input("Jugador B, ingrese su segunda suposición: "))
        if 10 <= adivina <= 99:
            uno = numero // 10
            dos = numero % 10
            if adivina // 10 == uno:
                fama += 1
            elif adivina // 10 == dos:
                punto += 1
            if adivina % 10 == dos:
                fama += 1
            elif adivina % 10 == uno:
                punto += 1

            if fama == 2:
                print("¡Usted ha adivinado el número GG!")
                exit()
            if fama > 0:
                print(f"Usted tiene {fama} fama(s)")
            if punto > 0:
                print(f"Usted tiene {punto} punto(s)")
            if fama == 0 and punto == 0:
                print("No tiene ni puntos ni famas.")

            fama = 0
            punto = 0
            adivina = int(input("Jugador B, ingrese su tercera suposición: "))
            if 10 <= adivina <= 99:
                uno = numero // 10
                dos = numero % 10
                if adivina // 10 == uno:
                    fama += 1
                elif adivina // 10 == dos:
                    punto += 1
                if adivina % 10 == dos:
                    fama += 1
                elif adivina % 10 == uno:
                    punto += 1

                if fama == 2:
                    print("¡Usted ha adivinado el número GG!")
                    exit()
                if fama > 0:
                    print(f"Usted tiene {fama} fama(s)")
                if punto > 0:
                    print(f"Usted tiene {punto} punto(s)")
                if fama == 0 and punto == 0:
                    print("No tiene ni puntos ni famas.")

                fama = 0
                punto = 0
                adivina = int(input("Jugador B, ingrese su cuarta suposición: "))
                if 10 <= adivina <= 99:
                    uno = numero // 10
                    dos = numero % 10
                    if adivina // 10 == uno:
                        fama += 1
                    elif adivina // 10 == dos:
                        punto += 1
                    if adivina % 10 == dos:
                        fama += 1
                    elif adivina % 10 == uno:
                        punto += 1

                    if fama == 2:
                        print("¡Usted ha adivinado el número GG!")
                        exit()
                    if fama > 0:
                        print(f"Usted tiene {fama} fama(s)")
                    if punto > 0:
                        print(f"Usted tiene {punto} punto(s)")
                    if fama == 0 and punto == 0:
                        print("No tiene ni puntos ni famas.")

                    fama = 0
                    punto = 0
                    adivina = int(input("Jugador B, ingrese su quinta suposición: "))
                    if 10 <= adivina <= 99:
                        uno = numero // 10
                        dos = numero % 10
                        if adivina // 10 == uno:
                            fama += 1
                        elif adivina // 10 == dos:
                            punto += 1
                        if adivina % 10 == dos:
                            fama += 1
                        elif adivina % 10 == uno:
                            punto += 1

                        if fama == 2:
                            print("¡Usted ha adivinado el número GG!")
                            exit()
                        if fama > 0:
                            print(f"Usted tiene {fama} fama(s)")
                        if punto > 0:
                            print(f"Usted tiene {punto} punto(s)")
                        if fama == 0 and punto == 0:
                            print("No tiene ni puntos ni famas.")
                            print("Usted ha perdido el juego :(")
                    else:
                        print("Usted ha perdido su quinto turno. Ha perdido el juego, nt.")
                else:
                    print("Usted ha perdido su cuarto turno. Vamos al siguiente.")
            else:
                print("Usted ha perdido su tercer turno. Vamos al siguiente.")
        else:
            print("Usted ha perdido su segundo turno. Vamos al siguiente.")
    else:
        print("Usted ha perdido su primer turno. Vamos al siguiente.")
else:
    print("Su número no es válido, vuelva a intentarlo.")
