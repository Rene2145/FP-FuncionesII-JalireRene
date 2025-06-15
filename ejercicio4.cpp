#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, c, D, x, x1, x2;
    cout<<"CALCULO DE RAICES DE UNA ECUACION CUADRATICA"<<endl<<endl;
    cout << "Escribe el coeficiente a: "<<endl;
    cin >> a;
    cout << "Escribe el coeficiente b: "<<endl;
    cin >> b;
    cout << "Escribe el coeficiente c: "<<endl;
    cin >> c;
    cout << ""<<endl;
	D= pow(b, 2) - 4 * a * c;
	cout <<"Las raices son: ";
    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Reales y diferentes"<<endl<<endl;
        cout << "Con los valores siguientes:"<<endl;
		cout<<" x1 = " << x1<<endl<< " x2 = " << x2 << endl;
        
    } else if (D == 0) {
        double x = -b / (2 * a);
        cout << "Reales e iguales"<<endl<<endl;
        cout << "Con los valores siguientes:"<<endl;
		cout<<" n1 = n2 = " << x << endl;
        
    } else {
        double real = -b / (2 * a);
        double imaginaria = sqrt(-D) / (2 * a);
        cout<<"Complejas"<<endl;
        cout << "Con los valores siguientes:"<<endl<<endl;
		cout<<"x1 = " << real << " + " << imaginaria << "i, "<<endl;
		cout<<"x2 = " << real << " - " << imaginaria << "i" << endl;
    }

    return 0;
}

