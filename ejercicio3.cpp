#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double c1, c2, sc, h;
	cout<<"CALCULO DE LA HIPOTENUSA"<<endl<<endl;
    cout << "Escribe la longitud del primer cateto: "<<endl;
    cin >> c1;

    cout << "Escribe la longitud del segundo cateto: "<<endl;
    cin >> c2;

    sc = pow(c1, 2) + pow(c2, 2);
    h = sqrt(sc);

    cout << "El valor de la hipotenusa es:" <<endl<<h<< endl;

    return 0;
}
