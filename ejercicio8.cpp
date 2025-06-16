#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rodillo() {
    return rand() % 5 + 1;
}

int premioTriple(int apuesta) {
    return apuesta * 10;
}

int premioDoble(int apuesta) {
    return apuesta * 2;
}

int premioEscalera(int apuesta) {
    return apuesta * 5;
}

bool esEscalera(int x, int y, int z) {
    return ((x == y - 1 and y == z - 1) or (x == y + 1 and y == z + 1));
}

int main() {
    srand(time(0)); 
    int saldo = 100; 
    int apuesta, a1, a2, a3;
    string opcion;

    cout << "SIMULACION DE TRAGAMONEDAS SIMPLE"<<endl<<endl;
    cout << "Saldo inicial: " << saldo << " monedas."<<endl<<endl;

    do {
        do {
            cout << "¿Cuanto deseas apostar, entre 1 y 10 monedas? "<<endl;
            cin >> apuesta;

            if (apuesta < 1 or apuesta > 10) {
                cout << "Tu apuesta no es valida"<<endl<<"Por favor, elige un número entre 1 y 10.";
            } else if (apuesta > saldo) {
                cout << "No cuentas con suficientes monedas."<<endl<<" Saldo actual: " << saldo;
            }
        } while (apuesta < 1 or apuesta > 10 or apuesta > saldo);

        a1 = rodillo();
        a2 = rodillo();
        a3 = rodillo();

        cout << "Resultado:"<<endl<<" [ " << a1 << " | " << a2 << " | " << a3 << " ]"<<endl<<endl;

        saldo = saldo-apuesta;

     
        if (a1 == a2 and a2 == a3) {
            int premio = premioTriple(apuesta);
            saldo = saldo+premio;
            cout << "¡Triple igual! Eres un campeon ganaste " << premio << " monedas."<<endl;
        } else if (a1 == a2 or a2 == a3 or a1 == a3) {
            int premio = premioDoble(apuesta);
            saldo = saldo+premio;
            cout << "¡Doble igual! Fantastico ganaste " << premio << " monedas."<<endl;
        } else if (esEscalera(a1, a2, a3)) {
            int premio = premioEscalera(apuesta);
            saldo = saldo+premio;
            cout << "¡Escalera! Genial ganaste " << premio << " monedas."<<endl;
        } else {
            cout << "Esta vez no te llevaste la victoria"<<endl<<"Perdiste " << apuesta << " monedas."<<endl;
        }

        cout << "Saldo actual: " << saldo << " monedas."<<endl<<endl;

        if (saldo <= 0) {
            cout << "Vaya, te quedaste sin monedas."<<endl<<"Fin del juego."<<endl<<endl;
            break;
        }

        cout << "¿Quieres seguir jugando? (si/no): "<<endl;
        cout<<"1 <- si"<<endl;
		cout<<"2 <- no"<<endl<<endl;
        cin >> opcion;

    } while (opcion == "1");

    cout << "GAME OVER"<<endl<<"Saldo final: " << saldo << " monedas.";

    return 0;
}

