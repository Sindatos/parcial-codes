#include <iostream>
#include <cstdlib>  // Para srand y rand
#include <ctime>    // Para time

using namespace std;

int main() {
    srand((time(0)));  // Inicializa la semilla para la generación de números aleatorios

    char tiroini;
    const int max = 6;  // Valor máximo en el dado
    int dado, dado2, totaldado, mismo;
    bool conti = false;

    cout << "Bienvenido al CASINO GANAMUCHO" << endl;
    cout << "Desea lanzar su tiro inicial SI (a); NO (b)" << endl;
    cin >> tiroini;

    if (tiroini == 'a' || tiroini == 'A') {
        dado = rand() % max + 1; 
        dado2 = rand() % max + 1; 
        totaldado = dado + dado2;
        cout << "Sacaste: " << totaldado << endl;
        mismo = totaldado;
        
        if (totaldado == 2 || totaldado == 3 || totaldado == 12) {
            cout << "Usted ha perdido" << endl;
            cout << "Reinicie para reintentar el juego" << endl;
        } else if (totaldado == 7 || totaldado == 11) {
            cout << "Usted ha ganado" << endl;
            cout << "Felicitaciones" << endl;
        } else {

            dado = rand() % max + 1; 
            dado2 = rand() % max + 1; 
            totaldado = dado + dado2;
            cout << "Sacaste " << totaldado << endl;
            if (totaldado == mismo) {
                cout << "Usted ha ganado porque ha sacado el mismo numero del primer lanzamiento " << mismo << endl;
            } else if (totaldado == 7) {
                cout << "Usted ha perdido ha sacado " << totaldado << endl;
            } else {

                dado = rand() % max + 1;
                dado2 = rand() % max + 1;
                totaldado = dado + dado2;
                cout << "Sacaste " << totaldado << endl;
                if (totaldado == mismo) {
                    cout << "Usted ha ganado porque ha sacado el mismo numero del primer lanzamiento " << mismo << endl;
                } else if (totaldado == 7) {
                    cout << "Usted ha perdido ha sacado " << totaldado << endl;
                } else {

                    dado = rand() % max + 1; 
                    dado2 = rand() % max + 1; 
                    totaldado = dado + dado2;
                    cout << "Sacaste " << totaldado << endl;
                    if (totaldado == mismo) {
                        cout << "Usted ha ganado porque ha sacado el mismo numero del primer lanzamiento " << mismo << endl;
                    } else if (totaldado == 7) {
                        cout << "Usted ha perdido ha sacado " << totaldado << endl;
                    } else {

                        dado = rand() % max + 1; 
                        dado2 = rand() % max + 1; 
                        totaldado = dado + dado2;
                        cout << "Sacaste " << totaldado << endl;
                        if (totaldado == mismo) {
                            cout << "Usted ha ganado porque ha sacado el mismo numero del primer lanzamiento " << mismo << endl;
                        } else if (totaldado == 7) {
                            cout << "Usted ha perdido ha sacado " << totaldado << endl;
                        } 
                    }
                }
            }
        }
    } else {
        cout << "Hasta la Proxima" << endl;
    }

    return 0;
}
