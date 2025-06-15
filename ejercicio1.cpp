#include <iostream>  
#include <cmath>     
using namespace std;

int main() {
    double radio;
	double area	;
	cout<<"CALCULO DEL AREA DE UN CIRCULO"<<endl<<endl;
    cout << "Escribe el radio de tu circulo:"<<endl;
    cin >> radio;
    area = M_PI*pow(radio, 2); 
    cout << "El area de tu circulo es:" <<endl<< area << endl;
    return 0;
}

