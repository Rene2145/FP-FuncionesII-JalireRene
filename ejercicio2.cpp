#include <iostream>   
#include <cstdlib>    
#include <ctime>  

using namespace std; 
int main() {
    int cantidad, maximo;
	cout<<"GENERADOR DE NUMEROS ALEATORIOS"<<endl<<endl;
	
    cout<<"Indica la cantidad de numeros aleatorios que deseas generar: "<<endl;
    cin >> cantidad;

    cout<< "Indica el valor maximo permitido: "<<endl;
    cin >> maximo;

    srand(time(0));

    cout<<"Los numeros aleatorios generados son:"<<endl;
    for(int i = 0; i < cantidad; i=i+1) {
        int numero = rand()%(maximo + 1); 
        cout<< numero;
    }

    cout << endl;
    return 0;
}   
