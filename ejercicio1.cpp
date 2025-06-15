#include <iostream>
#include "funciones.h"
 
using namespace std;

int main() {
    double radio;
    cout << "Escribe el radio de tu circulo:"<<endl;
    cin >> radio;

    double area = calcularArea(radio);
    cout << "El area de tu circulo es: " << area << endl;

    return 0;
}

