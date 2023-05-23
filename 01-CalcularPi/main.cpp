#include <iostream>

double calcularPi() {
    double pi = 0.0;
    double denominador = 1.0;
    int signo = 1;

    while (true) {
        pi += signo / denominador;
        denominador += 2;
        signo *= -1;

        // Comprobemos si los primeros 6 decimales son correctos
        if (pi - 3.141592 < 0.000001 && pi - 3.141592 > -0.000001) {
            break;
        }
    }

    return pi * 4;
}

int main() {
    double pi = calcularPi();
    std::cout << "El valor de pi calculado es: " << pi << std::endl;
    return 0;
}
