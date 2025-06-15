#include <iostream>
#include <cmath> 
using namespace std;

void calcularRaices(double a, double b, double c, double &m1, double &m2, bool &esReal) {
    double discriminante = pow(b, 2) - 4 * a * c;
