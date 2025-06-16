#include <iostream>
#include <cmath> 
using namespace std;
void calcularRaices(double a, double b, double c, double &x1, double &x2, bool &esReal) {
	double 	D = pow(b, 2) - 4 * a * c;

  if (D >= 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        esReal = true; 
    } else {
        x1 = -b / (2 * a);
        x2 = sqrt(-D) / (2 * a);
        esReal = false; 
    }
}

int main() {
	cout<<"FUNCION CALCULAR RAICES"<<endl<<endl;
    double a, b, c, D, x1, x2;
    bool esReal;
    cout << "Escribe el coeficiente a: "<<endl;
    cin >> a;
    cout << "Escribe el coeficiente b: "<<endl;
    cin >> b;
    cout << "Escribe el coeficiente c: "<<endl;
    cin >> c;
    cout << ""<<endl;

	calcularRaices(a, b, c, x1, x2, esReal);
	
	cout <<"Las raices son: ";
	
    if (esReal) {
        cout << "REALES Y DIFERENTES"<<endl<<endl;
        cout << "Con los valores siguientes:"<<endl;
		cout<<" x1 = " << x1<<endl<< " x2 = " << x2 << endl;

    } else {
        cout<<"COMPLEJAS"<<endl<<endl;
        cout << "Con los valores siguientes:"<<endl;
		cout<<"x1 = " << x1 << " + " << x1 << "i"<<endl;
		cout<<"x2 = " << x1 << " - " << x2 << "i"<< endl;
    }

    return 0;
}

