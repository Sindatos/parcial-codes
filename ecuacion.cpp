#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 1.0;
    double y = 1.0;

    // Cálculo de a
    double a = pow(sqrt(5 * x + (sqrt(pow(y, x - 1))) / (y + 2 * x)), 3);

    // Cálculo de b
    double b = (pow(pow(x, 2), 3) / (pow(y, 3) * x + 1)) - 3 * (sqrt(3 + sqrt(x - 1)));

    // Cálculo de z
    double z = a - b;

    // Imprimir el resultado
    cout << "El valor de z es: " << z << endl;

    return 0;
}
