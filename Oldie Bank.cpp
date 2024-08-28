#include <iostream>

using namespace std;
int main() {

    int edad, comida;
    float promedio;
    int estudiante, trabajador;
    float tasa;
    cout << "Bienvenido a oldie bank"<<endl;
    cout << "Ingrese su edad"<<endl;
    cin >> edad;
    if (edad < 20){
        tasa = 20;
    }else{
        tasa = 18;
    }
    cout<<"Esta estudiando Si = 1, No = 0"<<endl;
    cin >> estudiante;
    if (estudiante == 1){
        cout<<"Cual es su promedio"<<endl;
        cin >> promedio;
        if (promedio <= 3.5){
            tasa = tasa - 0.5;
        }
        else if(promedio > 3.5 && promedio < 4.2){
            tasa = tasa - 0.8;
        }
        else if(promedio >= 4.2){
            tasa = tasa - 1.5;
        }
    }

    cout<<"Ingrese cual es su comida preferida; 1 = Hamburguesa; 2 = Perro; 3 = Pizza; 4 = Sushi"<<endl;
    cin >> comida;

    if (comida == 1){
        cout<<"Ha elegido Hamburguesa"<<endl;
        tasa = tasa - 0.2;
    }
    else if(comida == 2){
        cout<<"Ha elegido Perro"<<endl;
        tasa = tasa - 0.5;
    }
    else if(comida == 3){
        cout<<"Ha elegido Pizza"<<endl;
        tasa = tasa + 0.1;
    }
    else if(comida == 4){
        cout<<"Ha elegido Sushi"<<endl;
        tasa = tasa + 0.3;
    }

    cout<<"Esta trabajando en este momento Si = 1, No = 0"<<endl;
    cin >> trabajador;
    if (trabajador == 1 && tasa < 17){
        tasa = tasa - 1;
    }

    cout<<"Su tasa anual es de: "<<tasa<<"%"<<endl;

    return 0;
}
