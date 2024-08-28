#include <iostream>

using namespace std;

int main(){
    int numero, uno, dos, adivina;
    int fama, punto;

    cout<<"BIENVENIDO AL JUEGO DE APUESTAS MEJOR DISENADO DEL PLANETA PUNTO-FAMA"<<endl;
    cout<<"Para empezar Jugador A ingresa el numero de dos digitos que adivinara el jugador B"<<endl;
    cin >> numero;

    if (numero >= 10 && numero <= 99){
        fama = 0;
        punto = 0;
        cout<<"Jugador B Ingrese su primera suposicion"<<endl;
        cin >> adivina;
        if (adivina >= 10 && adivina <= 99){
            //Primer intento
            uno = numero/10;
            dos = numero%10;
            if (adivina / 10 == uno ){
                fama++;
            }else if (adivina / 10 == dos){
                punto++;
            }
            if (adivina % 10 == dos){
                fama++;
            }else if (adivina % 10 == uno){
                punto++;
            }

            if (fama == 2){
                cout<<"Usted ha adivinado el numero GG"<<endl;
                return 0;
            }
            if (fama > 0) {
                cout << "Usted tiene " << fama << " famas"<<endl;
            }
            if (punto > 0) {
                cout << "Usted tiene " << punto << " puntos"<<endl;
            }
            if (fama == 0 && punto == 0) {
                cout << "No tiene ni puntos ni famas." << endl;
            }

            //Segundo Intento
            fama = 0;
            punto = 0;
            cout<<"Jugador B, Ingrese su segunda suposicion"<<endl;
            cin >> adivina;
            if (adivina >= 10 && adivina <= 99){
                uno = numero/10;
                dos = numero%10;
                if (adivina / 10 == uno ){
                    fama++;
                }else if (adivina / 10 == dos){
                    punto++;
                }
                if (adivina % 10 == dos){
                    fama++;
                }else if (adivina % 10 == uno){
                    punto++;
                }

                if (fama == 2){
                    cout<<"Usted ha adivinado el numero GG"<<endl;
                    return 0;
                }
                if (fama > 0) {
                    cout << "Usted tiene " << fama << " famas"<<endl;
                }
                if (punto > 0) {
                    cout << "Usted tiene " << punto << " puntos"<<endl;
                }
                if (fama == 0 && punto == 0) {
                    cout << "No tiene ni puntos ni famas." << endl;
                }
                //Tercera
                fama = 0;
                punto = 0;
                cout<<"Jugador B, Ingrese su tercera suposicion"<<endl;
                cin >> adivina;
                if (adivina >= 10 && adivina <= 99){
                    uno = numero/10;
                    dos = numero%10;
                    if (adivina / 10 == uno ){
                        fama++;
                    }else if (adivina / 10 == dos){
                        punto++;
                    }
                    if (adivina % 10 == dos){
                        fama++;
                    }else if (adivina % 10 == uno){
                        punto++;
                    }

                    if (fama == 2){
                        cout<<"Usted ha adivinado el numero GG"<<endl;
                        return 0;
                    }
                    if (fama > 0) {
                        cout << "Usted tiene " << fama << " famas"<<endl;
                    }
                    if (punto > 0) {
                        cout << "Usted tiene " << punto << " puntos"<<endl;
                    }
                    if (fama == 0 && punto == 0) {
                        cout << "No tiene ni puntos ni famas." << endl;
                    }

                    //Cuarta
                    fama = 0;
                    punto = 0;
                    cout<<"Jugador B, Ingrese su cuarta suposicion"<<endl;
                    cin >> adivina;
                    if (adivina >= 10 && adivina <= 99){
                        uno = numero/10;
                        dos = numero%10;
                        if (adivina / 10 == uno ){
                            fama++;
                        }else if (adivina / 10 == dos){
                            punto++;
                        }
                        if (adivina % 10 == dos){
                            fama++;
                        }else if (adivina % 10 == uno){
                            punto++;
                        }

                        if (fama == 2){
                            cout<<"Usted ha adivinado el numero GG"<<endl;
                            return 0;
                        }
                        if (fama > 0) {
                            cout << "Usted tiene " << fama << " famas"<<endl;
                        }
                        if (punto > 0) {
                            cout << "Usted tiene " << punto << " puntos"<<endl;
                        }
                        if (fama == 0 && punto == 0) {
                            cout << "No tiene ni puntos ni famas." << endl;
                        }

                        //Quinta
                        fama = 0;
                        punto = 0;
                        cout<<"Jugador B, Ingrese su Quinta suposicion"<<endl;
                        cin >> adivina;
                        if (adivina >= 10 && adivina <= 99){
                            uno = numero/10;
                            dos = numero%10;
                            if (adivina / 10 == uno ){
                                fama++;
                            }else if (adivina / 10 == dos){
                                punto++;
                            }
                            if (adivina % 10 == dos){
                                fama++;
                            }else if (adivina % 10 == uno){
                                punto++;
                            }

                            if (fama == 2){
                                cout<<"Usted ha adivinado el numero GG"<<endl;
                                return 0;
                            }
                            if (fama > 0) {
                                cout << "Usted tiene " << fama << " famas"<<endl;
                            }
                            if (punto > 0) {
                                cout << "Usted tiene " << punto << " puntos"<<endl;
                            }
                            if (fama == 0 && punto == 0) {
                                cout << "No tiene ni puntos ni famas." << endl;
                                cout<<"Usted ha perdido el juego :("<<endl;
                            }
                        }else{
                            cout<<"Usted ha perdido su quinto turno ha perdido el juego nt"<<endl;
                        }

                    }else{
                        cout<<"Usted ha perdido su cuarto turno vamos al siguiente"<<endl;
                    }
                }else{
                    cout<<"Usted ha perdido su tercer turno vamos al siguiente"<<endl;
                }
            }else{
                cout<<"Usted ha perdido su segundo turno vamos al siguiente"<<endl;
            }
        }else{
            cout<<"Usted ha perdido su primer turno vamos al siguiente"<<endl;
        }
    }else{
        cout<<"Su numero no es valido vuelva a intentarlo"<<endl;
    }
}
